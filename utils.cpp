#include "utils.h"

int get_int(int *number, int min, int max) {
    while (true) {
        if (!(std::cin >> *number)) {
            if (std::cin.eof()) {
                std::cout << "\nProgram terminated.\n";
                return 0;
            }
            std::cout << "Invalid number. Please try again!\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (*number < min || *number > max) {
            std::cout << "The number is out of the allowed range. Please try again!\n";
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
    int data, key, i, j, key2;
    std::cout << "(1) Создание пустого списка.\n"
            "(2) Подсчет количества элементов списка.\n"
            "(3) Вывод на экран содержимого списка.\n"
            "(4) Вставка элемента в начало списка.\n"
            "(5) Вставка элемента в конец списка.\n"
            "(6) Исключение элемента из начала списка.\n"
            "(7) Исключение элемента из конца списка.\n"
            "(8) Уничтожение списка с освобождением памяти.\n"
            "(9) Включить новый элемент после i-го по номеру элемента.\n"
            "(10) Включить новый элемент после элемента с заданным ключом\n"
            "(11) Включить новый элемент вместо элемента с соответствующим ключом.\n"
            "ВНИМАНИЕ! При выходе из этого раздела список и все его данные удаляются\n";
    while (get_int(&case_number, 0 ,11) != 0 && case_number != 0) {
        switch (case_number) {
            case 1:
                std::cout << "Создание списка\n";
                head = create_list<T>();
                break;
            case 2:
                std::cout << "Подсчет элементов\n";
                capacity = count_node(head);
                std::cout << "Количество элементов: " << capacity << "\n";
                break;
            case 3:
                std::cout << "Вывод содержимого\n";
                print_node(head);
                break;
            case 4:
                std::cout << "Вставка в начало\n";
                std::cin >> data;
                std::cin >> key;
                insert_begin_node(&head, data, key);
                break;
            case 5:
                std::cout << "Вставка в конец\n";
                std::cin >> data;
                std::cin >> key;
                insert_end_node(&head, data, key);
                break;
            case 6:
                std::cout << "Удаление из начала\n";
                delete_begin_node(&head);
                break;
            case 7:
                std::cout << "Удаление из конца\n";
                delete_end_node(&head);
                break;
            case 8:
                std::cout << "Удаление всего списка\n";
                delete_all_node(&head);
                break;
            case 9:
                std::cout << "Введите i:\n";
                std::cin >> i;
                include_after_the_ith (&head,  i);
                break;
            case 10:
                std::cout << "Введите key:\n";
                std::cin >> key;
                include_after_the_key (&head, key);
                break;
            case 11:
                std::cout << "nВведите key:\n";
                std::cin >> key;
                include_instead_the_key (&head, key);
                break;
            default:
                std::cout << "Число вне диапазона\n";
                break;
        }
        std::cout << "(1) Создание пустого списка.\n"
            "(2) Подсчет количества элементов списка.\n"
            "(3) Вывод на экран содержимого списка.\n"
            "(4) Вставка элемента в начало списка.\n"
            "(5) Вставка элемента в конец списка.\n"
            "(6) Исключение элемента из начала списка.\n"
            "(7) Исключение элемента из конца списка.\n"
            "(8) Уничтожение списка с освобождением памяти.\n"
            "(9) Включить новый элемент после i-го по номеру элемента.\n"
            "(10) Включить новый элемент после элемента с заданным ключом\n"
            "(11) Включить новый элемент вместо элемента с соответствующим ключом.\n"
            "ВНИМАНИЕ! При выходе из этого раздела список и все его данные удаляются\n";
    }
    delete_all_node(&head);
}

template void universal_case<sym_cyc_no_head>();
template void universal_case<sym_lin_no_head>();
template void universal_case<sym_cyc_with_head>();
template void universal_case<sym_lin_with_head>();
template void universal_case<undir_lin_no_head>();
template void universal_case<unidir_cyc_no_head>();
template void universal_case<undir_lin_with_head>();
template void universal_case<unidir_cyc_with_head>();
