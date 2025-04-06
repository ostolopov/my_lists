#include "utils.h"
#include "my_lists.h"

int get_int(int *number, int min, int max) {
    while (true) {
        if (!(cin >> *number)) {
            if (cin.eof()) {
                cout << "\nРабота программы прекращена.\n";
                return 0;
            }
            cout << "Число неверно. Попробуйте еще раз!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (*number < min || *number > max) {
            cout << "Число вышло за разрешенный диапазон. Попробуйте еще раз!\n";
            continue;
        }
        break;
    }
    return 1;
}
void universal_case() {
    int case_number;
    int capacity;
    undir_lin_no_head *head = nullptr;
    // undir_lin_with_head
    // sym_lin_no_head *head = nullptr;
    // sym_lin_with_head
    // unidir_cyc_no_head *head = nullptr;
    // unidir_cyc_with_head
    // sym_cyc_no_head *head = nullptr;
    // sym_cyc_with_head
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
                head = create_undir_lin_no_head();
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
                insert_begin_node(&head, 42); // заменишь на ввод
                break;
            case 5:
                cout << "Вставка в конец\n";
                insert_end_node(&head, 99); // заменишь на ввод
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
