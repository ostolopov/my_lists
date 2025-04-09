#include "utils.h"

int get_int(int *number, int min, int max) {
    while (true) {
        if (!(cin >> *number)) {
            if (cin.eof()) {
                cout << "\nProgram terminated.\n";
                return 0;
            }
            cout << "Invalid number. Please try again!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (*number < min || *number > max) {
            cout << "The number is out of the allowed range. Please try again!\n";
            continue;
        }
        break;
    }
    return 1;
}

template <typename T>
void universal_case() {
    int case_number;
    T* head = nullptr;
    int capacity;
    int data, key;
    cout << "(1) Создание пустого списка.\n"
            "(2) Подсчет количества элементов списка.\n"
            "(3) Вывод на экран содержимого списка.\n"
            "(4) Вставка элемента в начало списка.\n"
            "(5) Вставка элемента в конец списка.\n"
            "(6) Исключение элемента из начала списка.\n"
            "(7) Исключение элемента из конца списка.\n"
            "(8) Уничтожение списка с освобождением памяти.\n"
            "ВНИМАНИЕ! При выходе из этого раздела список и все его данные удаляются\n";
    while (get_int(&case_number, 0 ,8) != 0 && case_number != 0) {
        switch (case_number) {
            case 1:
                cout << "Создание списка\n";
                head = create_list<T>();
                break;
            case 2:
                cout << "Подсчет элементов\n";
                capacity = count_node(head);
                cout << "Количество элементов: " << capacity << "\n";
                break;
            case 3:
                cout << "Вывод содержимого\n";
                print_node(head);
                break;
            case 4:
                cout << "Вставка в начало\n";
                cin >> data;
                cin >> key;
                insert_begin_node(&head, data, key);
                break;
            case 5:
                cout << "Вставка в конец\n";
                cin >> data;
                cin >> key;
                insert_end_node(&head, data, key);
                break;
            case 6:
                cout << "Удаление из начала\n";
                delete_begin_node(&head);
                break;
            case 7:
                cout << "Удаление из конца\n";
                delete_end_node(&head);
                break;
            case 8:
                cout << "Удаление всего списка\n";
                delete_all_node(&head);
                break;
            default:
                cout << "Число вне диапазона\n";
                break;
        }

        cout << "(1) Создание пустого списка.\n"
            "(2) Подсчет количества элементов списка.\n"
            "(3) Вывод на экран содержимого списка.\n"
            "(4) Вставка элемента в начало списка.\n"
            "(5) Вставка элемента в конец списка.\n"
            "(6) Исключение элемента из начала списка.\n"
            "(7) Исключение элемента из конца списка.\n"
            "(8) Уничтожение списка с освобождением памяти.\n"
            "ВНИМАНИЕ! При выходе из этого раздела список и все его данные удаляются\n";
    }
    delete_all_node(&head);
}

// Явная инстанциация шаблона для всех нужных типов
template void universal_case<sym_cyc_no_head>();
template void universal_case<sym_lin_no_head>();
template void universal_case<sym_cyc_with_head>();
template void universal_case<sym_lin_with_head>();
template void universal_case<undir_lin_no_head>();
template void universal_case<unidir_cyc_no_head>();
template void universal_case<undir_lin_with_head>();
template void universal_case<unidir_cyc_with_head>();
