#include "ind_funcs.h"

// Включить новый элемент после i-го по номеру элемента.
#include <iostream>
using namespace std;

template<>
void include_after_the_ith<undir_lin_no_head>(undir_lin_no_head** head, int i) {
    if (i < 0 || *head == nullptr) return;
    undir_lin_no_head* current = *head;
    int count = 0;
    while (current != nullptr && count < i) {
        current = current->next;
        count++;
    }
    if (current == nullptr) return;
    int data, key;
    cin >> data >> key;
    auto* node = new undir_lin_no_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    current->next = node;
}

template<>
void include_after_the_ith<undir_lin_with_head>(undir_lin_with_head** head, int i) {
    if (i < 0 || (*head)->next == *head) return;

    undir_lin_with_head* current = (*head)->next;
    int count = 0;
    while (current != *head && count < i) {
        current = current->next;
        count++;
    }
    if (current == *head) return;
    int data, key;
    cin >> data >> key;
    auto* node = new undir_lin_with_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    current->next = node;
}

template<>
void include_after_the_ith<sym_lin_no_head>(sym_lin_no_head** head, int i) {
    if (i < 0 || *head == nullptr) return;
    sym_lin_no_head* current = *head;
    int count = 0;
    while (current != nullptr && count < i) {
        current = current->next;
        count++;
    }
    if (current == nullptr) return;
    int data, key;
    cin >> data >> key;
    auto* node = new sym_lin_no_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    node->prev = current;
    if (current->next)
        current->next->prev = node;
    current->next = node;
}

template<>
void include_after_the_ith<sym_lin_with_head>(sym_lin_with_head** head, int i) {
    if (i < 0 || (*head)->next == *head) return;
    sym_lin_with_head* current = (*head)->next;
    int count = 0;
    while (current != *head && count < i) {
        current = current->next;
        count++;
    }
    if (current == *head) return;
    int data, key;
    cin >> data >> key;
    auto* node = new sym_lin_with_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    node->prev = current;
    if (current->next)
        current->next->prev = node;
    current->next = node;
}

template<>
void include_after_the_ith<unidir_cyc_no_head>(unidir_cyc_no_head** head, int i) {
    if (i < 0 || *head == nullptr) return;
    unidir_cyc_no_head* current = *head;
    int count = 0;
    while (current->next != *head && count < i) {
        current = current->next;
        count++;
    }
    if (current == *head) return;
    int data, key;
    cin >> data >> key;
    auto* node = new unidir_cyc_no_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    current->next = node;
}

template<>
void include_after_the_ith<unidir_cyc_with_head>(unidir_cyc_with_head** head, int i) {
    if (i < 0 || (*head)->next == *head) return;
    unidir_cyc_with_head* current = (*head)->next;
    int count = 0;
    while (current != *head && count < i) {
        current = current->next;
        count++;
    }
    if (current == *head) return;
    int data, key;
    cin >> data >> key;
    auto* node = new unidir_cyc_with_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    current->next = node;
}

template<>
void include_after_the_ith<sym_cyc_no_head>(sym_cyc_no_head** head, int i) {
    if (i < 0 || *head == nullptr) return;
    sym_cyc_no_head* current = *head;
    int count = 0;
    while (current->next != *head && count < i) {
        current = current->next;
        count++;
    }
    if (current == *head) return;
    int data, key;
    cin >> data >> key;
    auto* node = new sym_cyc_no_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    node->prev = current;
    current->next->prev = node;
    current->next = node;
}

template<>
void include_after_the_ith<sym_cyc_with_head>(sym_cyc_with_head** head, int i) {
    if (i < 0 || (*head)->next == *head) return;
    sym_cyc_with_head* current = (*head)->next;
    int count = 0;
    while (current != *head && count < i) {
        current = current->next;
        count++;
    }
    if (current == *head) return;
    int data, key;
    cin >> data >> key;
    auto* node = new sym_cyc_with_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    node->prev = current;
    current->next->prev = node;
    current->next = node;
}

// Включить новый элемент после элемента с заданным ключом
template<>
void include_after_the_key <undir_lin_no_head> (undir_lin_no_head **head, int key) {
    undir_lin_no_head *current = *head;
    int data, key;
    while (current != nullptr && current->key != key) {
        current = current->next;
    }
    if (current == nullptr)
        return;
    cin >> key;
    cin >> data;
    auto *node = new undir_lin_no_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    current->next = node;
}

template<>
void include_after_the_key <undir_lin_with_head> (undir_lin_with_head **head, int key) {
    undir_lin_with_head *current = (*head)->next;
    int data, key;
    while (current != nullptr && current->key != key) {
        current = current->next;
    }
    if (current == nullptr)
        return;
    cin >> key;
    cin >> data;
    auto *node = new undir_lin_with_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    current->next = node;
}

template<>
void include_after_the_key <sym_lin_no_head> (sym_lin_no_head **head, int key) {
    sym_lin_no_head *current = (*head)->next;
    int data, key;
    while (current != *head && current->key != key) {
        current = current->next;
    }
    if (current == *head)
        return;
    cin >> key;
    cin >> data;
    auto *node = new sym_lin_no_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    current->next = node;
}

template<>
void include_after_the_key <sym_lin_with_head> (sym_lin_with_head **head, int key) {

}

template<>
void include_after_the_key <unidir_cyc_no_head> (unidir_cyc_no_head **head, int key) {

}

template<>
void include_after_the_key <unidir_cyc_with_head> (unidir_cyc_with_head **head, int key) {

}

template<>
void include_after_the_key <sym_cyc_no_head> (sym_cyc_no_head **head, int key) {

}

template<>
void include_after_the_key <sym_cyc_with_head> (sym_cyc_with_head **head, int key);

// Включить новый элемент перед i-ым по номеру элементом
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

