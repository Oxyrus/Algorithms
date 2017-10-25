//
// Created by Oxyrus on 10/24/17.
//

#ifndef ALGORITHMS_LIST_H
#define ALGORITHMS_LIST_H

namespace ds {
    struct Node {
        int Value;
        Node *Next;

        explicit Node(int value) : Value(value){
            Next = nullptr;
        }
    };

    struct List {
    public:
        Node *First;

        List() {
            First = nullptr;
        }

        void Print();
        void Insert(int value);
        Node *Search(int value);
    private:
        void Print(Node *node);
        void Insert(int value, Node *node);
        Node *Search(int value, Node *node);
    };
}

#endif //ALGORITHMS_LIST_H
