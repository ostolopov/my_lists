#include "my_lists.h"

undir_lin_no_head *create_undir_lin_no_head () {
    return nullptr;
}

template <>
int count_node<undir_lin_no_head> (undir_lin_no_head *head) {
    int capacity = 0;
    undir_lin_no_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<undir_lin_no_head> (undir_lin_no_head *head) {
    undir_lin_no_head *current = head;
    while (current != nullptr) {
        cout << "k:" << current->key << " d:" << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

template<>
void insert_begin_node <undir_lin_no_head> (undir_lin_no_head **head, int data, int key) {
    auto *node = new undir_lin_no_head();
    node->data = data;
    node->key = key;
    node->next = *head;
    *head = node;
}

template<>
void insert_end_node <undir_lin_no_head> (undir_lin_no_head **head, int data, int key) {
    auto *node = new undir_lin_no_head();
    node->data = data;
    node->key = key;
    node->next = nullptr;
    if (*head == nullptr)
        *head = node;
    else {
        undir_lin_no_head *current = *head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = node;
    }
}

template<>
void delete_begin_node <undir_lin_no_head> (undir_lin_no_head **head) {
    if ((*head) == nullptr)
        return;
    undir_lin_no_head *current = *head;
    *head = (*head)->next;
    delete current;
}

template<>
void delete_end_node <undir_lin_no_head> (undir_lin_no_head **head) {
    if ((*head) == nullptr)
        return;
    if ((*head)->next == nullptr) {
        delete (*head);
        *head = nullptr;
        return;
    }
    undir_lin_no_head *current = *head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}

template<>
void delete_all_node <undir_lin_no_head> (undir_lin_no_head **head) {
    undir_lin_no_head *current = *head;
    while (current != nullptr) {
        undir_lin_no_head *temp = current;
        current = current->next;
        delete temp;
    }
    *head = nullptr;
}

//=============================================================================
undir_lin_with_head *create_undir_lin_with_head () {
    return nullptr;
}

template <>
int count_node<undir_lin_with_head> (undir_lin_with_head *head) {
    int capacity = 0;
    undir_lin_with_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<undir_lin_with_head> (undir_lin_with_head *head);
template<>
void insert_begin_node<undir_lin_with_head> (undir_lin_with_head **head, int data, int key);
template<>
void insert_end_node<undir_lin_with_head> (undir_lin_with_head **head, int data, int key);
template<>
void delete_begin_node<undir_lin_with_head> (undir_lin_with_head **head);
template<>
void delete_end_node<undir_lin_with_head> (undir_lin_with_head **head);
template<>
void delete_all_node<undir_lin_with_head> (undir_lin_with_head **head);

//=============================================================================
sym_lin_no_head *create_sym_lin_no_head () {
    return nullptr;
}

template <>
int count_node<sym_lin_no_head> (sym_lin_no_head *head) {
    int capacity = 0;
    sym_lin_no_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<sym_lin_no_head> (sym_lin_no_head *head);
template<>
void insert_begin_node<sym_lin_no_head> (sym_lin_no_head **head, int data, int key);
template<>
void insert_end_node<sym_lin_no_head> (sym_lin_no_head **head, int data, int key);
template<>
void delete_begin_node<sym_lin_no_head> (sym_lin_no_head **head);
template<>
void delete_end_node<sym_lin_no_head> (sym_lin_no_head **head);
template<>
void delete_all_node<sym_lin_no_head> (sym_lin_no_head **head);
//=============================================================================
sym_lin_with_head *create_sym_lin_with_head () {
    return nullptr;
}

template <>
int count_node<sym_lin_with_head> (sym_lin_with_head *head) {
    int capacity = 0;
    sym_lin_with_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<sym_lin_with_head> (sym_lin_with_head *head);
template<>
void insert_begin_node<sym_lin_with_head> (sym_lin_with_head **head, int data, int key);
template<>
void insert_end_node<sym_lin_with_head> (sym_lin_with_head **head, int data, int key);
template<>
void delete_begin_node<sym_lin_with_head> (sym_lin_with_head **head);
template<>
void delete_end_node<sym_lin_with_head> (sym_lin_with_head **head);
template<>
void delete_all_node<sym_lin_with_head> (sym_lin_with_head **head);
//=============================================================================
unidir_cyc_no_head *create_unidir_cyc_no_head () {
    return nullptr;
}
template <>
int count_node<unidir_cyc_no_head> (unidir_cyc_no_head *head) {
    int capacity = 0;
    unidir_cyc_no_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<unidir_cyc_no_head> (unidir_cyc_no_head *head);
template<>
void insert_begin_node<unidir_cyc_no_head> (unidir_cyc_no_head **head, int data, int key);
template<>
void insert_end_node<unidir_cyc_no_head> (unidir_cyc_no_head **head, int data, int key);
template<>
void delete_begin_node<unidir_cyc_no_head> (unidir_cyc_no_head **head);
template<>
void delete_end_node<unidir_cyc_no_head> (unidir_cyc_no_head **head);
template<>
void delete_all_node<unidir_cyc_no_head> (unidir_cyc_no_head **head);
//=============================================================================
unidir_cyc_with_head *create_unidir_cyc_with_head () {
    return nullptr;
}

template <>
int count_node<unidir_cyc_with_head> (unidir_cyc_with_head *head) {
    int capacity = 0;
    unidir_cyc_with_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<unidir_cyc_with_head> (unidir_cyc_with_head *head);
template<>
void insert_begin_node<unidir_cyc_with_head> (unidir_cyc_with_head **head, int data, int key);
template<>
void insert_end_node<unidir_cyc_with_head> (unidir_cyc_with_head **head, int data, int key);
template<>
void delete_begin_node<unidir_cyc_with_head> (unidir_cyc_with_head **head);
template<>
void delete_end_node<unidir_cyc_with_head> (unidir_cyc_with_head **head);
template<>
void delete_all_node<unidir_cyc_with_head> (unidir_cyc_with_head **head);
//=============================================================================
sym_cyc_no_head *create_sym_cyc_no_head () {
    return nullptr;
}

template <>
int count_node<sym_cyc_no_head> (sym_cyc_no_head *head) {
    int capacity = 0;
    sym_cyc_no_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<sym_cyc_no_head> (sym_cyc_no_head *head);
template <>
void insert_begin_node<sym_cyc_no_head> (sym_cyc_no_head **head, int data, int key);
template <>
void insert_end_node<sym_cyc_no_head> (sym_cyc_no_head **head, int data, int key);
template<>
void delete_begin_node<sym_cyc_no_head> (sym_cyc_no_head **head);
template<>
void delete_end_node<sym_cyc_no_head> (sym_cyc_no_head **head);
template<>
void delete_all_node<sym_cyc_no_head> (sym_cyc_no_head **head);
//=============================================================================
sym_cyc_with_head *create_sym_cyc_with_head () {
    return nullptr;
}

template <>
int count_node<sym_cyc_with_head> (sym_cyc_with_head *head) {
    int capacity = 0;
    sym_cyc_with_head *current = head;
    while (current != nullptr) {
        current = current->next;
        capacity++;
    }
    return capacity;
}

template <>
void print_node<sym_cyc_with_head> (sym_cyc_with_head *head);
template <>
void insert_begin_node<sym_cyc_with_head> (sym_cyc_with_head **head, int data, int key);
template <>
void insert_end_node<sym_cyc_with_head> (sym_cyc_with_head **head, int data, int key);
template<>
void delete_begin_node<sym_cyc_with_head> (sym_cyc_with_head **head);
template<>
void delete_end_node<sym_cyc_with_head> (sym_cyc_with_head **head);
template<>
void delete_all_node<sym_cyc_with_head> (sym_cyc_with_head **head);




