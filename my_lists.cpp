#include "my_lists.h"
// 1. Работа с однонаправленным линейным списком без головного элемента.
template <>
undir_lin_no_head *create_list <undir_lin_no_head>(){
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
        std::cout << "k:" << current->key << " d:" << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
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
        delete *head;
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
// 2. Работа с однонаправленным линейным списком с головным элементом.

template <>
undir_lin_with_head *create_list <undir_lin_with_head>() {
    return new undir_lin_with_head(0, 0, nullptr); // Головной элемент с нулевыми данными
}

template <>
int count_node<undir_lin_with_head>(undir_lin_with_head *head) {
    int capacity = 0;
    undir_lin_with_head *current = head->next;
    while (current) {
        capacity++;
        current = current->next;
    }
    return capacity;
}

template <>
void print_node<undir_lin_with_head>(undir_lin_with_head *head) {
    undir_lin_with_head *current = head->next;
    std::cout << "HEAD -> ";
    while (current) {
        std::cout << "k:" << current->key << " d:" << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}

template <>
void insert_begin_node<undir_lin_with_head>(undir_lin_with_head **head, int data, int key) {
    auto *node = new undir_lin_with_head(data, key, (*head)->next);
    (*head)->next = node;
}

template <>
void insert_end_node<undir_lin_with_head>(undir_lin_with_head **head, int data, int key) {
    auto *node = new undir_lin_with_head(data, key, nullptr);
    if (!(*head)->next) {
        (*head)->next = node;
        return;
    }
    undir_lin_with_head *current = (*head)->next;
    while (current->next)
        current = current->next;
    current->next = node;
}

template <>
void delete_begin_node<undir_lin_with_head>(undir_lin_with_head **head) {
    if (!(*head)->next)
        return;
    undir_lin_with_head *temp = (*head)->next;
    (*head)->next = temp->next;
    delete temp;
}

template <>
void delete_end_node<undir_lin_with_head>(undir_lin_with_head **head) {
    if (!(*head)->next)
        return;
    undir_lin_with_head *current = (*head)->next;
    undir_lin_with_head *prev = nullptr;
    while (current->next) {
        prev = current;
        current = current->next;
    }
    if (!prev)
        (*head)->next = nullptr;
     else
        prev->next = nullptr;
    delete current;
}

template <>
void delete_all_node<undir_lin_with_head>(undir_lin_with_head **head) {
    undir_lin_with_head *current = (*head)->next;
    while (current != nullptr) {
        undir_lin_with_head *temp = current;
        current = current->next;
        delete temp;
    }
    (*head)->next = nullptr;
}

//=============================================================================
// 3. Работа с симметричным линейным списком без головного элемента.

template <>
sym_lin_no_head *create_list <sym_lin_no_head>() {
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
void print_node<sym_lin_no_head> (sym_lin_no_head *head) {
    sym_lin_no_head *current = head;
    std::cout << "NULL <-> ";
    while (current != nullptr) {
        std::cout << "k:" << current->key << " d:" << current->data << " <-> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}

template<>
void insert_begin_node<sym_lin_no_head> (sym_lin_no_head **head, int data, int key) {
    auto *node = new sym_lin_no_head();
    node->data = data;
    node->key = key;
    node->prev = nullptr;
    node->next = *head;
    if (*head != nullptr)
        (*head)->prev = node;
    *head = node;
}

template<>
void insert_end_node<sym_lin_no_head> (sym_lin_no_head **head, int data, int key) {
    auto *node = new sym_lin_no_head();
    node->data = data;
    node->key = key;
    node->next = nullptr;
    if (*head == nullptr) {
        *head = node;
        node->prev = nullptr;
    } else {
        sym_lin_no_head *current = *head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = node;
        node->prev = current;
    }
}

template <>
void delete_begin_node<sym_lin_no_head>(sym_lin_no_head **head) {
    if (*head == nullptr)
        return;
    sym_lin_no_head *current = *head;
    *head = (*head)->next;
    if (*head != nullptr)
        (*head)->prev = nullptr;
    delete current;
}

template<>
void delete_end_node<sym_lin_no_head> (sym_lin_no_head **head) {
    if (*head == nullptr)
        return;
    if ((*head)->next == nullptr) {
        delete *head;
        *head = nullptr;
        return;
    }
    sym_lin_no_head *current = *head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}

template<>
void delete_all_node<sym_lin_no_head> (sym_lin_no_head **head) {
    sym_lin_no_head *current = *head;
    while (current != nullptr) {
        sym_lin_no_head *temp = current;
        current = current->next;
        delete temp;
    }
    *head = nullptr;
}

//=============================================================================
// 4. Работа с симметричным линейным списком с головным элементом.

template <>
sym_lin_with_head *create_list <sym_lin_with_head>() {
    return new sym_lin_with_head(0, 0, nullptr, nullptr);
}

template <>
int count_node<sym_lin_with_head>(sym_lin_with_head *head) {
    int capacity = 0;
    sym_lin_with_head *current = head->next;
    while (current) {
        capacity++;
        current = current->next;
    }
    return capacity;
}

template <>
void print_node<sym_lin_with_head>(sym_lin_with_head *head) {
    sym_lin_with_head *current = head->next;
    std::cout << "HEAD <-> ";
    while (current) {
        std::cout << "k:" << current->key << " d:" << current->data << " <-> ";
        current = current->next;
    }
    std::cout << "HEAD" << std::endl;
}

template <>
void insert_begin_node<sym_lin_with_head>(sym_lin_with_head **head, int data, int key) {
    auto *node = new sym_lin_with_head(data, key, *head, (*head)->next);
    if ((*head)->next)
        (*head)->next->prev = node;
    (*head)->next = node;
}

template <>
void insert_end_node<sym_lin_with_head>(sym_lin_with_head **head, int data, int key) {
    auto *node = new sym_lin_with_head(data, key, nullptr, nullptr);
    if (!(*head)->next) {
        (*head)->next = node;
        node->prev = *head;
        return;
    }
    sym_lin_with_head *current = (*head)->next;
    while (current->next)
        current = current->next;
    current->next = node;
    node->prev = current;
}

template <>
void delete_begin_node<sym_lin_with_head>(sym_lin_with_head **head) {
    if (!(*head)->next)
        return;
    sym_lin_with_head *temp = (*head)->next;
    (*head)->next = temp->next;
    if (temp->next)
        temp->next->prev = *head;
    delete temp;
}

template <>
void delete_end_node<sym_lin_with_head>(sym_lin_with_head **head) {
    if (!(*head)->next)
        return;
    sym_lin_with_head *current = (*head)->next;
    while (current->next)
        current = current->next;
    if (current->prev)
        current->prev->next = nullptr;
    delete current;
}

template <>
void delete_all_node<sym_lin_with_head>(sym_lin_with_head **head) {
    sym_lin_with_head *current = (*head)->next;
    while (current) {
        sym_lin_with_head *temp = current;
        current = current->next;
        delete temp;
    }
    (*head)->next = nullptr;
}

//=============================================================================
// 5. Работа с однонаправленным циклическим списком без головного элемента.

template <>
unidir_cyc_no_head *create_list <unidir_cyc_no_head> () {
    return nullptr;
}

template <>
int count_node<unidir_cyc_no_head>(unidir_cyc_no_head *head) {
    if (!head) return 0;
    int count = 1;
    unidir_cyc_no_head *current = head->next;
    while (current != head) {
        count++;
        current = current->next;
    }
    return count;
}

template <>
void print_node<unidir_cyc_no_head>(unidir_cyc_no_head *head) {
    if (!head) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    unidir_cyc_no_head *current = head;
    std::cout << "START -> ";
    while (true) {
        std::cout << "k:" << current->key << " d:" << current->data << " -> ";
        current = current->next;
        if (current == head) break;
    }
    std::cout << "HEAD" << std::endl;
}

template <>
void insert_begin_node<unidir_cyc_no_head>(unidir_cyc_no_head **head, int data, int key) {
    unidir_cyc_no_head *node = new unidir_cyc_no_head{key, data, nullptr};
    if (*head == nullptr) {
        node->next = node;
        *head = node;
    } else {
        node->next = *head;
        unidir_cyc_no_head *current = *head;
        while (current->next != *head)
            current = current->next;
        current->next = node;
        *head = node;
    }
}

template <>
void insert_end_node<unidir_cyc_no_head>(unidir_cyc_no_head **head, int data, int key) {
    unidir_cyc_no_head *node = new unidir_cyc_no_head{key, data, nullptr};
    if (*head == nullptr) {
        node->next = node;
        *head = node;
    } else {
        unidir_cyc_no_head *current = *head;
        while (current->next != *head)
            current = current->next;
        current->next = node;
        node->next = *head;
    }
}

template <>
void delete_begin_node<unidir_cyc_no_head>(unidir_cyc_no_head **head) {
    if (*head == nullptr)
        return;
    unidir_cyc_no_head *current = *head;
    while (current->next != *head)
        current = current->next;
    if (*head == current) {
        delete *head;
        *head = nullptr;
    } else {
        unidir_cyc_no_head *temp = *head;
        *head = (*head)->next;
        current->next = *head;
        delete temp;
    }
}

template <>
void delete_end_node<unidir_cyc_no_head>(unidir_cyc_no_head **head) {
    if (*head == nullptr)
        return;
    unidir_cyc_no_head *current = *head;
    unidir_cyc_no_head *prev = nullptr;
    while (current->next != *head) {
        prev = current;
        current = current->next;
    }
    if (prev == nullptr) {
        delete *head;
        *head = nullptr;
    } else {
        prev->next = *head;
        delete current;
    }
}

template<>
void delete_all_node<unidir_cyc_no_head> (unidir_cyc_no_head **head) {
    if (*head == nullptr)
        return;
    unidir_cyc_no_head *current = (*head)->next;
    while (current != *head) {
        unidir_cyc_no_head *temp = current;
        current = current->next;
        delete temp;
    }
    delete *head;
    *head = nullptr;
}

//=============================================================================
// 6. Работа с однонаправленным циклическим списком с головным элементом.

template <>
unidir_cyc_with_head *create_list <unidir_cyc_with_head> () {
    auto *head = new unidir_cyc_with_head(0,0, nullptr);
    head->next = head;
    return head;
}

template <>
int count_node<unidir_cyc_with_head> (unidir_cyc_with_head *head) {
    int capacity = 0;
    unidir_cyc_with_head *current = head->next;
    while (current != head) {
        capacity++;
        current = current->next;
    }
    return capacity;
}

template <>
void print_node<unidir_cyc_with_head> (unidir_cyc_with_head *head) {
    if (head == nullptr || head->next == head) {
        std::cout << "HEAD -> HEAD" << std::endl;
        return;
    }
    std::cout << "HEAD -> ";
    unidir_cyc_with_head *current = head->next;
    while (current != head) {
        std::cout << "k:" << current->key << " d:" << current->data << " -> ";
        current = current->next;
    }
    std::cout << "HEAD" << std::endl;
}

template<>
void insert_begin_node<unidir_cyc_with_head> (unidir_cyc_with_head **head, int data, int key) {
    auto *node = new unidir_cyc_with_head(key, data, nullptr);
    if ((*head)->next == *head) {
        node->next = *head;
        (*head)->next = node;
    } else {
        node->next = (*head)->next;
        (*head)->next = node;
    }
}

template<>
void insert_end_node<unidir_cyc_with_head> (unidir_cyc_with_head **head, int data, int key) {
    auto *node = new unidir_cyc_with_head(key, data, *head);
    if ((*head)->next == nullptr) {
        (*head)->next = node;
        node->next = *head;
    } else {
        unidir_cyc_with_head *current = (*head)->next;
        while (current->next != *head)
            current = current->next;
        current->next = node;
    }
}

template<>
void delete_begin_node<unidir_cyc_with_head> (unidir_cyc_with_head **head) {
    if (!head || (*head)->next == *head)
        return;
    unidir_cyc_with_head *first = (*head)->next;
    (*head)->next = first->next;
    delete first;
}

template<>
void delete_end_node<unidir_cyc_with_head> (unidir_cyc_with_head **head) {
    if ((*head)->next == nullptr)
        return;
    unidir_cyc_with_head *current = (*head)->next;
    unidir_cyc_with_head *prev = nullptr;
    while (current->next != *head) {
        prev = current;
        current = current->next;
    }
    if (prev == nullptr) {
        delete current;
        (*head)->next = nullptr;
    } else {
        prev->next = *head;
        delete current;
    }
}

template<>
void delete_all_node<unidir_cyc_with_head> (unidir_cyc_with_head **head) {
    if ((*head)->next == nullptr)
        return;
    unidir_cyc_with_head *current = (*head)->next;
    while (current != *head) {
        unidir_cyc_with_head *temp = current;
        current = current->next;
        delete temp;
    }
    (*head)->next = nullptr;
}

//=============================================================================
// 7. Работа с симметричным циклическим списком без головного элемента.

template <>
sym_cyc_no_head *create_list <sym_cyc_no_head> () {
    return nullptr;
}

template <>
int count_node<sym_cyc_no_head>(sym_cyc_no_head *head) {
    if (!head) return 0;
    int count = 1;
    sym_cyc_no_head *current = head->next;
    while (current != head) {
        count++;
        current = current->next;
    }
    return count;
}

template <>
void print_node<sym_cyc_no_head>(sym_cyc_no_head *head) {
    if (!head) {
        std::cout << "HEAD <-> HEAD" << std::endl;
        return;
    }
    sym_cyc_no_head *current = head;
    std::cout << "HEAD <-> ";
    while (true) {
        std::cout << "k:" << current->key << " d:" << current->data << " <-> ";
        current = current->next;
        if (current == head) break;
    }
    std::cout << "HEAD" << std::endl;
}

template <>
void insert_begin_node<sym_cyc_no_head>(sym_cyc_no_head **head, int data, int key) {
    auto *node = new sym_cyc_no_head(data, key, nullptr, nullptr);
    if (!*head) {
        node->next = node->prev = node;
        *head = node;
    } else {
        sym_cyc_no_head *tail = (*head)->prev;
        node->next = *head;
        node->prev = tail;
        tail->next = node;
        (*head)->prev = node;
        *head = node;
    }
}

template <>
void insert_end_node<sym_cyc_no_head>(sym_cyc_no_head **head, int data, int key) {
    auto *node = new sym_cyc_no_head(data, key, nullptr, nullptr);
    if (!*head) {
        node->next = node->prev = node;
        *head = node;
    } else {
        sym_cyc_no_head *tail = (*head)->prev;
        node->next = *head;
        node->prev = tail;
        tail->next = node;
        (*head)->prev = node;
    }
}

template <>
void delete_begin_node<sym_cyc_no_head>(sym_cyc_no_head **head) {
    if (!*head) return;
    if ((*head)->next == *head) {
        delete *head;
        *head = nullptr;
        return;
    }
    sym_cyc_no_head *tail = (*head)->prev;
    sym_cyc_no_head *temp = *head;
    *head = (*head)->next;
    (*head)->prev = tail;
    tail->next = *head;
    delete temp;
}

template <>
void delete_end_node<sym_cyc_no_head>(sym_cyc_no_head **head) {
    if (!*head) return;
    if ((*head)->next == *head) {
        delete *head;
        *head = nullptr;
        return;
    }
    sym_cyc_no_head *tail = (*head)->prev;
    sym_cyc_no_head *new_tail = tail->prev;
    new_tail->next = *head;
    (*head)->prev = new_tail;
    delete tail;
}

template <>
void delete_all_node<sym_cyc_no_head>(sym_cyc_no_head **head) {
    if (!*head) return;
    sym_cyc_no_head *current = (*head)->next;
    while (current != *head) {
        sym_cyc_no_head *temp = current;
        current = current->next;
        delete temp;
    }
    delete *head;
    *head = nullptr;
}

//=============================================================================
// 8. Работа с симметричным циклическим списком с головным элементом.

template <>
sym_cyc_with_head *create_list <sym_cyc_with_head> () {
    auto *head = new sym_cyc_with_head(0,0, nullptr, nullptr);
    head->next = head;
    head->prev = head;
    return head;
}

template <>
int count_node<sym_cyc_with_head>(sym_cyc_with_head *head) {
    if (!head || head->next == head) return 0;
    int count = 0;
    sym_cyc_with_head *current = head->next;
    while (current != head) {
        count++;
        current = current->next;
    }
    return count;
}

template <>
void print_node<sym_cyc_with_head>(sym_cyc_with_head *head) {
    if (!head || head->next == head) {
        std::cout << "HEAD <-> HEAD" << std::endl;
        return;
    }
    std::cout << "HEAD <-> ";
    sym_cyc_with_head *current = head->next;
    while (current != head) {
        std::cout << "k:" << current->key << " d:" << current->data << " <-> ";
        current = current->next;
    }
    std::cout << "HEAD" << std::endl;
}

template <>
void insert_begin_node<sym_cyc_with_head>(sym_cyc_with_head **head, int data, int key) {
    auto *node = new sym_cyc_with_head(data, key, *head, (*head)->next);
    (*head)->next->prev = node;
    (*head)->next = node;
}

template <>
void insert_end_node<sym_cyc_with_head>(sym_cyc_with_head **head, int data, int key) {
    auto *node = new sym_cyc_with_head(data, key, (*head)->prev, *head);
    (*head)->prev->next = node;
    (*head)->prev = node;
}

template <>
void delete_begin_node<sym_cyc_with_head>(sym_cyc_with_head **head) {
    if ((*head)->next == *head)
        return;
    sym_cyc_with_head *to_delete = (*head)->next;
    (*head)->next = to_delete->next;
    to_delete->next->prev = *head;
    delete to_delete;
}

template <>
void delete_end_node<sym_cyc_with_head>(sym_cyc_with_head **head) {
    if ((*head)->prev == *head)
        return;
    sym_cyc_with_head *to_delete = (*head)->prev;
    to_delete->prev->next = *head;
    (*head)->prev = to_delete->prev;
    delete to_delete;
}

template <>
void delete_all_node<sym_cyc_with_head>(sym_cyc_with_head **head) {
    if (!head || (*head)->next == *head)
        return;
    sym_cyc_with_head *current = (*head)->next;
    while (current != *head) {
        sym_cyc_with_head *temp = current;
        current = current->next;
        delete temp;
    }
    (*head)->next = *head;
    (*head)->prev = *head;
}