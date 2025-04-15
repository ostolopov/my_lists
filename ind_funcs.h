#ifndef IND_FUNCS_H
#define IND_FUNCS_H

#include <iostream>
#include "my_lists.h"

// 1. Включить новый элемент после i-го по номеру элемента.
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

// 2. Включить новый элемент после элемента с заданным ключом
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

// 6. Включить новый элемент вместо элемента с соответствующим ключом.
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

#endif
