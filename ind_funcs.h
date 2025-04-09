#ifndef IND_FUNCS_H
#define IND_FUNCS_H

#include <iostream>
#include "my_lists.h"

using namespace std;

// Включить новый элемент после i-го по номеру элемента.
template <typename T>
void include_after_the_ith (T **head, int i);
template<>
void include_after_the_ith <undir_lin_no_head> (undir_lin_no_head **head, int i);
template<>
void include_after_the_ith <undir_lin_with_head> (undir_lin_with_head **head, int i);
template<>
void include_after_the_ith <sym_lin_no_head> (sym_lin_no_head **head, int i);
template<>
void include_after_the_ith <sym_lin_with_head> (sym_lin_with_head **head, int i);
template<>
void include_after_the_ith <unidir_cyc_no_head> (unidir_cyc_no_head **head, int i);
template<>
void include_after_the_ith <unidir_cyc_with_head> (unidir_cyc_with_head **head, int i);
template<>
void include_after_the_ith <sym_cyc_no_head> (sym_cyc_no_head **head, int i);
template<>
void include_after_the_ith <sym_cyc_with_head> (sym_cyc_with_head **head, int i);

// Включить новый элемент после элемента с заданным ключом
template <typename T>
void include_after_the_key (T ** head, int key);
template<>
void include_after_the_key <undir_lin_no_head> (undir_lin_no_head **head, int key);
template<>
void include_after_the_key <undir_lin_with_head> (undir_lin_with_head **head, int key);
template<>
void include_after_the_key <sym_lin_no_head> (sym_lin_no_head **head, int key);
template<>
void include_after_the_key <sym_lin_with_head> (sym_lin_with_head **head, int key);
template<>
void include_after_the_key <unidir_cyc_no_head> (unidir_cyc_no_head **head, int key);
template<>
void include_after_the_key <unidir_cyc_with_head> (unidir_cyc_with_head **head, int key);
template<>
void include_after_the_key <sym_cyc_no_head> (sym_cyc_no_head **head, int key);
template<>
void include_after_the_key <sym_cyc_with_head> (sym_cyc_with_head **head, int key);

// Включить новый элемент перед i-ым по номеру элементом
template <typename T>
void include_before_the_ith (T **head, int i);
template<>
void include_before_the_ith <undir_lin_no_head> (undir_lin_no_head **head, int i);
template<>
void include_before_the_ith <undir_lin_with_head> (undir_lin_with_head **head, int i);
template<>
void include_before_the_ith <sym_lin_no_head> (sym_lin_no_head **head, int i);
template<>
void include_before_the_ith <sym_lin_with_head> (sym_lin_with_head **head, int i);
template<>
void include_before_the_ith <unidir_cyc_no_head> (unidir_cyc_no_head **head, int i);
template<>
void include_before_the_ith <unidir_cyc_with_head> (unidir_cyc_with_head **head, int i);
template<>
void include_before_the_ith <sym_cyc_no_head> (sym_cyc_no_head **head, int i);
template<>
void include_before_the_ith <sym_cyc_with_head> (sym_cyc_with_head **head, int i);

// Включить новый элемент перед элементом с заданным ключом.
template <typename T>
void include_before_the_key (T **head, int key);
template<>
void include_before_the_key <undir_lin_no_head> (undir_lin_no_head **head, int key);
template<>
void include_before_the_key <undir_lin_with_head> (undir_lin_with_head **head, int key);
template<>
void include_before_the_key <sym_lin_no_head> (sym_lin_no_head **head, int key);
template<>
void include_before_the_key <sym_lin_with_head> (sym_lin_with_head **head, int key);
template<>
void include_before_the_key <unidir_cyc_no_head> (unidir_cyc_no_head **head, int key);
template<>
void include_before_the_key <unidir_cyc_with_head> (unidir_cyc_with_head **head, int key);
template<>
void include_before_the_key <sym_cyc_no_head> (sym_cyc_no_head **head, int key);
template<>
void include_before_the_key <sym_cyc_with_head> (sym_cyc_with_head **head, int key);

// Включить новый элемент вместо i-го по номеру элемента.
template <typename T>
void include_instead_the_ith (T **head, int i);
template<>
void include_instead_the_ith <undir_lin_no_head> (undir_lin_no_head **head, int i);
template<>
void include_instead_the_ith <undir_lin_with_head> (undir_lin_with_head **head, int i);
template<>
void include_instead_the_ith <sym_lin_no_head> (sym_lin_no_head **head, int i);
template<>
void include_instead_the_ith <sym_lin_with_head> (sym_lin_with_head **head, int i);
template<>
void include_instead_the_ith <unidir_cyc_no_head> (unidir_cyc_no_head **head, int i);
template<>
void include_instead_the_ith <unidir_cyc_with_head> (unidir_cyc_with_head **head, int i);
template<>
void include_instead_the_ith <sym_cyc_no_head> (sym_cyc_no_head **head, int i);
template<>
void include_instead_the_ith <sym_cyc_with_head> (sym_cyc_with_head **head, int i);

// Включить новый элемент вместо элемента с соответствующим ключом.
template <typename T>
void include_instead_the_key (T **head, int key);
template<>
void include_instead_the_key <undir_lin_no_head> (undir_lin_no_head **head, int key);
template<>
void include_instead_the_key <undir_lin_with_head> (undir_lin_with_head **head, int key);
template<>
void include_instead_the_key <sym_lin_no_head> (sym_lin_no_head **head, int key);
template<>
void include_instead_the_key <sym_lin_with_head> (sym_lin_with_head **head, int key);
template<>
void include_instead_the_key <unidir_cyc_no_head> (unidir_cyc_no_head **head, int key);
template<>
void include_instead_the_key <unidir_cyc_with_head> (unidir_cyc_with_head **head, int key);
template<>
void include_instead_the_key <sym_cyc_no_head> (sym_cyc_no_head **head, int key);
template<>
void include_instead_the_key <sym_cyc_with_head> (sym_cyc_with_head **head, int key);

// Исключить элемент перед i-ым по номеру элементом

// Исключить элемент перед элементом с заданным ключом.

// Исключить элемент после i-го по номеру элемента.

// Исключить элемент после элемента с заданным ключом

// Исключить i-ый по номеру элемент.

// Исключить элемент с соответствующим ключом.

// Поменять местами i-ый и i-1 по номерам элементы.

// Поменять местами i-ый и i+1 по номерам элементы.

// Поменять местами i-ый и j-ый по номерам элементы.

// Поменять местами элемент с заданным ключом и следующий.

// Поменять местами элемент с заданным ключом и предыдущий.

// Поменять местами два элемента с заданными ключами.

// Первый элемент переставить в конец списка.

// Последний элемент переставить в начало списка.

// Упорядочить список по возрастанию ключей.

// Отпечатать все элементы после i-го.

// Отпечатать все элементы, у которых значения ключей попадают в заданный диапазон.

// Вставить элемент в упорядоченный список согласно значению ключа, не нарушая упорядочения.

// Удалить из списка элементы, значения ключей которых меньше среднего арифметического значения всех значений ключей.


#endif
