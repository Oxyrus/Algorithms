//
// Created by Oxyrus on 10/22/17.
//

#ifndef ALGORITHMS_NODE_H
#define ALGORITHMS_NODE_H

namespace ds {
    struct Node {
        int Value;
        Node *Left;
        Node *Right;

        explicit Node(int key) : Value(key) {
            Left = nullptr;
            Right = nullptr;
        }
    };

    struct BTree {
    public:
        BTree();
        ~BTree();

        void Insert(int key);
        Node *Search(int key);
        void DestroyTree();
        void InOrder();
        void PostOrder();
        void PreOrder();
        int MultiplesOfN(int n);

    private:
        void DestroyTree(Node *leaf);
        void Insert(int key, Node *leaf);
        Node *Search(int key, Node *leaf);
        void InOrder(Node *leaf);
        void PostOrder(Node *leaf);
        void PreOrder(Node *leaf);
        int MultiplesOfN(Node *leaf, int n);

        Node *Root;
    };
};

#endif //ALGORITHMS_NODE_H
