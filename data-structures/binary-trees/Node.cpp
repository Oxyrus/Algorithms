//
// Created by Oxyrus on 10/22/17.
//

#include <iostream>
#include "Node.h"

namespace ds {
    BTree::BTree() {
        Root = nullptr;
    }

    BTree::~BTree() {
        DestroyTree();
    }

    void BTree::DestroyTree(Node *leaf) {
        if (leaf != nullptr) {
            DestroyTree(leaf->Left);
            DestroyTree(leaf->Right);
            delete leaf;
        }
    }

    void BTree::DestroyTree() {
        DestroyTree(Root);
    }

    void BTree::Insert(int key, Node *leaf) {
        if (key < leaf->Value) {
            if (leaf->Left != nullptr) {
                Insert(key, leaf->Left);
            }
            else {
                leaf->Left = new Node(key);
            }
        }
        else if (key >= leaf->Value) {
            if (leaf->Right != nullptr) {
                Insert(key, leaf->Right);
            }
            else {
                leaf->Right = new Node(key);
            }
        }
    }

    void BTree::Insert(int key) {
        if (Root != nullptr) {
            Insert(key, Root);
        }
        else {
            Root = new Node(key);
        }
    }

    Node *BTree::Search(int key, Node *leaf) {
        if (leaf != nullptr) {
            if (key == leaf->Value) {
                return leaf;
            }
            if (key < leaf->Value) {
                return Search(key, leaf->Left);
            }
            else {
                return Search(key, leaf->Right);
            }
        }
        else {
            return nullptr;
        }
    }

    Node *BTree::Search(int key) {
        return Search(key, Root);
    }

    void BTree::InOrder(Node *leaf) {
        if (leaf != nullptr) {
            InOrder(leaf->Left);
            std::cout << leaf->Value << " ";
            InOrder(leaf->Right);
        }
    }

    void BTree::InOrder() {
        InOrder(Root);
        std::cout << "\n";
    }

    void BTree::PostOrder(Node *leaf) {
        if (leaf != nullptr) {
            PostOrder(leaf->Left);
            PostOrder(leaf->Right);
            std::cout << leaf->Value << " ";
        }
    }

    void BTree::PostOrder() {
        PostOrder(Root);
        std::cout << "\n";
    }

    void BTree::PreOrder(Node *leaf) {
        if (leaf != nullptr) {
            std::cout << leaf->Value << " ";
            PreOrder(leaf->Left);
            PreOrder(leaf->Right);
        }
    }

    void BTree::PreOrder() {
        PreOrder(Root);
        std::cout << "\n";
    }
};
