#include "ind_funcs.h"

// 1. Включить новый элемент после i-го по номеру элемента.
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
    std::cin >> data >> key;
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
    std::cin >> data >> key;
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
    std::cin >> data >> key;
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
    std::cin >> data >> key;
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
    std::cin >> data >> key;
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
    std::cin >> data >> key;
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
    std::cin >> data >> key;
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
    std::cin >> data >> key;
    auto* node = new sym_cyc_with_head;
    node->key = key;
    node->data = data;
    node->next = current->next;
    node->prev = current;
    current->next->prev = node;
    current->next = node;
}

// 2. Включить новый элемент после элемента с заданным ключом
template<>
void include_after_the_key<undir_lin_no_head>(undir_lin_no_head** head, int key) {
    undir_lin_no_head* current = *head;
    int new_key, new_data;
    while (current != nullptr) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new undir_lin_no_head(new_key, new_data, current->next);
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

template<>
void include_after_the_key<undir_lin_with_head>(undir_lin_with_head** head, int key) {
    undir_lin_with_head* current = (*head)->next;
    int new_key, new_data;
    while (current != nullptr) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new undir_lin_with_head(new_key, new_data, current->next);
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

template<>
void include_after_the_key<sym_lin_no_head>(sym_lin_no_head** head, int key) {
    sym_lin_no_head* current = *head;
    int new_key, new_data;
    while (current != nullptr) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new sym_lin_no_head(new_key, new_data, current->next, current);
            if (current->next != nullptr) {
                current->next->prev = new_node;
            }
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

template<>
void include_after_the_key<sym_lin_with_head>(sym_lin_with_head** head, int key) {
    sym_lin_with_head* current = (*head)->next;
    int new_key, new_data;
    while (current != *head) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new sym_lin_with_head(new_key,new_data, current->next, current);
            current->next->prev = new_node;
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

template<>
void include_after_the_key<unidir_cyc_no_head>(unidir_cyc_no_head** head, int key) {
    if (*head == nullptr) return;
    unidir_cyc_no_head* current = *head;
    int new_key, new_data;
    bool flag = true;
    while (current != *head || flag) {
        flag = false;
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new unidir_cyc_no_head(new_key, new_data, current->next);
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

template<>
void include_after_the_key<unidir_cyc_with_head>(unidir_cyc_with_head** head, int key) {
    unidir_cyc_with_head* current = (*head)->next;
    int new_key, new_data;
    while (current != *head) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new unidir_cyc_with_head(new_key, new_data, current->next);
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

template<>
void include_after_the_key<sym_cyc_no_head>(sym_cyc_no_head** head, int key) {
    if (*head == nullptr) return;
    sym_cyc_no_head* current = *head;
    int new_key, new_data;
    bool flag = true;
    while (current != *head || flag) {
        flag = false;
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new sym_cyc_no_head(new_key, new_data, current->next, current);
            current->next->prev = new_node;
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

template<>
void include_after_the_key<sym_cyc_with_head>(sym_cyc_with_head** head, int key) {
    sym_cyc_with_head* current = (*head)->next;
    int new_key, new_data;
    while (current != *head) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto* new_node = new sym_cyc_with_head(new_key,new_data, current->next,current);
            current->next->prev = new_node;
            current->next = new_node;
            return;
        }
        current = current->next;
    }
}

// 6. Включить новый элемент вместо элемента с соответствующим ключом.
template<>
void include_instead_the_key<undir_lin_no_head>(undir_lin_no_head **head, int key) {
    undir_lin_no_head *current = *head, *prev = nullptr;
    int new_key, new_data;
    while (current != nullptr) {
        if (current->key == key) {
            std::cin >> new_key;
            std::cin >> new_data;
            auto *new_node = new undir_lin_no_head{new_key, new_data, current->next};
            if (prev == nullptr)
                *head = new_node;
            else
                prev->next = new_node;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

template<>
void include_instead_the_key<undir_lin_with_head>(undir_lin_with_head **head, int key) {
    undir_lin_with_head *current = (*head)->next, *prev = *head;
    int new_key, new_data;
    while (current != nullptr) {
        if (current->key == key) {
            std::cin >> new_key;
            std::cin >> new_data;
            auto *new_node = new undir_lin_with_head{new_key, new_data, current->next};
            prev->next = new_node;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

template<>
void include_instead_the_key<sym_lin_no_head>(sym_lin_no_head **head, int key) {
    sym_lin_no_head *current = *head;
    int new_key, new_data;
    while (current != nullptr) {
        if (current->key == key) {
            std::cin >> new_key;
            std::cin >> new_data;
            auto *new_node = new sym_lin_no_head(new_key, new_data, current->next, current->prev);
            if (current->prev)
                current->prev->next = new_node;
            else
                *head = new_node;
            if (current->next)
                current->next->prev = new_node;
            delete current;
            return;
        }
        current = current->next;
    }
}

template<>
void include_instead_the_key<sym_lin_with_head>(sym_lin_with_head **head, int key) {
    sym_lin_with_head *current = (*head)->next;
    int new_key, new_data;
    while (current != *head) {
        if (current->key == key) {
            std::cin >> new_key;
            std::cin >> new_data;
            auto *new_node = new sym_lin_with_head(new_key, new_data, current->next, current->prev);
            current->prev->next = new_node;
            current->next->prev = new_node;
            delete current;
            return;
        }
        current = current->next;
    }
}

template<>
void include_instead_the_key<unidir_cyc_no_head>(unidir_cyc_no_head **head, int key) {
    if (*head == nullptr) return;
    unidir_cyc_no_head *current = *head, *prev = nullptr;
    bool flag = true;
    int new_key, new_data;
    while (current != *head || flag) {
        flag = false;
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto *new_node = new unidir_cyc_no_head{new_key, new_data, current->next};
            if (prev == nullptr) {
                new_node->next = current->next;
                *head = new_node;
                unidir_cyc_no_head *last = new_node;
                while (last->next != current)
                    last = last->next;
                last->next = new_node;
            } else {
                prev->next = new_node;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

template<>
void include_instead_the_key<unidir_cyc_with_head>(unidir_cyc_with_head **head, int key) {
    unidir_cyc_with_head *current = (*head)->next, *prev = *head;
    int new_key, new_data;
    while (current != *head) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto *new_node = new unidir_cyc_with_head{new_key, new_data, current->next};
            prev->next = new_node;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

template<>
void include_instead_the_key<sym_cyc_no_head>(sym_cyc_no_head **head, int key) {
    if (*head == nullptr) return;
    sym_cyc_no_head *current = *head;
    bool flag = true;
    int new_key, new_data;
    while (current != *head || flag) {
        flag = false;
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto *new_node = new sym_cyc_no_head{new_key, new_data, current->next, current->prev};
            current->prev->next = new_node;
            current->next->prev = new_node;
            if (current == *head) *head = new_node;
            delete current;
            return;
        }
        current = current->next;
    }
}

template<>
void include_instead_the_key<sym_cyc_with_head>(sym_cyc_with_head **head, int key) {
    sym_cyc_with_head *current = (*head)->next;
    int new_key, new_data;
    while (current != *head) {
        if (current->key == key) {
            std::cin >> new_key >> new_data;
            auto *new_node = new sym_cyc_with_head{new_key, new_data, current->next, current->prev};
            current->prev->next = new_node;
            current->next->prev = new_node;
            delete current;
            return;
        }
        current = current->next;
    }
}




