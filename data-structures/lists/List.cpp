//
// Created by Oxyrus on 10/24/17.
//

#include <iostream>
#include "List.h"

namespace ds {
    void List::Print() {
        if (First != nullptr) {
            Print(First);
        }
        else {
            std::cout << "Empty list" << std::endl;
        }
    }

    void List::Print(Node *node) {
        std::cout << node->Value << std::endl;
        if (node->Next != nullptr) {
            Print(node->Next);
        }
    }

    void List::Insert(int value) {
        if (First == nullptr) {
            First = new Node(value);
        }
        else {
            if (First->Next == nullptr) {
                First->Next = new Node(value);
            } else {
                Insert(value, First->Next);
            }
        }
    }

    void List::Insert(int value, Node *node) {
        if (node->Next == nullptr) {
            node->Next = new Node(value);
        }
        else {
            Insert(value, node->Next);
        }
    }

    Node *List::Search(int value) {
        if (First != nullptr) {
            return Search(value, First);
        }
    }

    Node *List::Search(int value, Node *node) {
        if (node->Value == value) {
            return node;
        }
        else if (node->Next != nullptr) {
            return Search(value, node->Next);
        }
        else {
            return nullptr;
        }
    }
}
