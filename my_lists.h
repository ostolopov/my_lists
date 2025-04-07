#ifndef MY_LISTS_H
#define MY_LISTS_H

#include <iostream>
using namespace std;

struct undir_lin_no_head {
    int key;
    int data;
    undir_lin_no_head *next;
};

struct undir_lin_with_head {
    int key;
    int data;
    undir_lin_with_head *next;
};

struct sym_lin_no_head {
    int key;
    int data;
    sym_lin_no_head *next;
    sym_lin_no_head *prev;
};

struct sym_lin_with_head {
    int key;
    int data;
    sym_lin_with_head *next;
    sym_lin_with_head *prev;
};

struct unidir_cyc_no_head {
    int key;
    int data;
    unidir_cyc_no_head *next;
};

struct unidir_cyc_with_head {
    int key;
    int data;
    unidir_cyc_with_head *next;
};

struct sym_cyc_no_head {
    int key;
    int data;
    sym_cyc_no_head *next;
    sym_cyc_no_head *prev;
};

struct sym_cyc_with_head {
    int key;
    int data;
    sym_cyc_with_head *next;
    sym_cyc_with_head *prev;
};
//чо в них делать то епто
undir_lin_no_head *create_undir_lin_no_head ();
undir_lin_with_head *create_undir_lin_with_head ();
sym_lin_no_head *create_sym_lin_no_head ();
sym_lin_with_head *create_sym_lin_with_head ();
unidir_cyc_no_head *create_unidir_cyc_no_head ();
unidir_cyc_with_head *create_unidir_cyc_with_head ();
sym_cyc_no_head *create_sym_cyc_no_head ();
sym_cyc_with_head *create_sym_cyc_with_head ();

template <typename T>
int count_node(T *head);
template <>
int count_node<undir_lin_no_head> (undir_lin_no_head *head);
template <>
int count_node<undir_lin_with_head> (undir_lin_with_head *head);
template <>
int count_node<sym_lin_no_head> (sym_lin_no_head *head);
template <>
int count_node<sym_lin_with_head> (sym_lin_with_head *head);
template <>
int count_node<unidir_cyc_no_head> (unidir_cyc_no_head *head);
template <>
int count_node<unidir_cyc_with_head> (unidir_cyc_with_head *head);
template <>
int count_node<sym_cyc_no_head> (sym_cyc_no_head *head);
template <>
int count_node<sym_cyc_with_head> (sym_cyc_with_head *head);


template <typename T>
void print_node (T *head);
template <>
void print_node<undir_lin_no_head> (undir_lin_no_head *head);
template <>
void print_node<undir_lin_with_head> (undir_lin_with_head *head);
template <>
void print_node<sym_lin_no_head> (sym_lin_no_head *head);
template <>
void print_node<sym_lin_with_head> (sym_lin_with_head *head);
template <>
void print_node<unidir_cyc_no_head> (unidir_cyc_no_head *head);
template <>
void print_node<unidir_cyc_with_head> (unidir_cyc_with_head *head);
template <>
void print_node<sym_cyc_no_head> (sym_cyc_no_head *head);
template <>
void print_node<sym_cyc_with_head> (sym_cyc_with_head *head);

template <typename T>
void insert_begin_node (T **head, int data, int key);
template<>
void insert_begin_node<undir_lin_no_head> (undir_lin_no_head **head, int data, int key);
template<>
void insert_begin_node<undir_lin_with_head> (undir_lin_with_head **head, int data, int key);
template<>
void insert_begin_node<sym_lin_no_head> (sym_lin_no_head **head, int data, int key);
template<>
void insert_begin_node<sym_lin_with_head> (sym_lin_with_head **head, int data, int key);
template<>
void insert_begin_node<unidir_cyc_no_head> (unidir_cyc_no_head **head, int data, int key);
template<>
void insert_begin_node<unidir_cyc_with_head> (unidir_cyc_with_head **head, int data, int key);
template <>
void insert_begin_node<sym_cyc_no_head> (sym_cyc_no_head **head, int data, int key);
template <>
void insert_begin_node<sym_cyc_with_head> (sym_cyc_with_head **head, int data, int key);

template <typename T>
void insert_end_node (T **head, int data, int key);
template<>
void insert_end_node<undir_lin_no_head> (undir_lin_no_head **head, int data, int key);
template<>
void insert_end_node<undir_lin_with_head> (undir_lin_with_head **head, int data, int key);
template<>
void insert_end_node<sym_lin_no_head> (sym_lin_no_head **head, int data, int key);
template<>
void insert_end_node<sym_lin_with_head> (sym_lin_with_head **head, int data, int key);
template<>
void insert_end_node<unidir_cyc_no_head> (unidir_cyc_no_head **head, int data, int key);
template<>
void insert_end_node<unidir_cyc_with_head> (unidir_cyc_with_head **head, int data, int key);
template <>
void insert_end_node<sym_cyc_no_head> (sym_cyc_no_head **head, int data, int key);
template <>
void insert_end_node<sym_cyc_with_head> (sym_cyc_with_head **head, int data, int key);

template <typename T>
void delete_begin_node (T **head);
template<>
void delete_begin_node <undir_lin_no_head> (undir_lin_no_head **head);
template<>
void delete_begin_node<undir_lin_with_head> (undir_lin_with_head **head);
template<>
void delete_begin_node<sym_lin_no_head> (sym_lin_no_head **head);
template<>
void delete_begin_node<sym_lin_with_head> (sym_lin_with_head **head);
template<>
void delete_begin_node<unidir_cyc_no_head> (unidir_cyc_no_head **head);
template<>
void delete_begin_node<unidir_cyc_with_head> (unidir_cyc_with_head **head);
template<>
void delete_begin_node<sym_cyc_no_head> (sym_cyc_no_head **head);
template<>
void delete_begin_node<sym_cyc_with_head> (sym_cyc_with_head **head);

template <typename T>
void delete_end_node (T **head);
template<>
void delete_end_node <undir_lin_no_head> (undir_lin_no_head **head);
template<>
void delete_end_node<undir_lin_with_head> (undir_lin_with_head **head);
template<>
void delete_end_node<sym_lin_no_head> (sym_lin_no_head **head);
template<>
void delete_end_node<sym_lin_with_head> (sym_lin_with_head **head);
template<>
void delete_end_node<unidir_cyc_no_head> (unidir_cyc_no_head **head);
template<>
void delete_end_node<unidir_cyc_with_head> (unidir_cyc_with_head **head);
template<>
void delete_end_node<sym_cyc_no_head> (sym_cyc_no_head **head);
template<>
void delete_end_node<sym_cyc_with_head> (sym_cyc_with_head **head);

template <typename T>
void delete_all_node (T **head);
template<>
void delete_all_node <undir_lin_no_head> (undir_lin_no_head **head);
template<>
void delete_all_node<undir_lin_with_head> (undir_lin_with_head **head);
template<>
void delete_all_node<sym_lin_no_head> (sym_lin_no_head **head);
template<>
void delete_all_node<sym_lin_with_head> (sym_lin_with_head **head);
template<>
void delete_all_node<unidir_cyc_no_head> (unidir_cyc_no_head **head);
template<>
void delete_all_node<unidir_cyc_with_head> (unidir_cyc_with_head **head);
template<>
void delete_all_node<sym_cyc_no_head> (sym_cyc_no_head **head);
template<>
void delete_all_node<sym_cyc_with_head> (sym_cyc_with_head **head);

#endif

