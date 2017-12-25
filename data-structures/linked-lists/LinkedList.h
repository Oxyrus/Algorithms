#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

template <class T>
class Node {
public:
  T Data;
  Node *Next;

  Node(const T &data): Data(data) {
    Next = nullptr;
  }
};

template <class T>
class LinkedList {
public:
  Node<T> *Head;
  Node<T> *Tail;

  LinkedList() {
    Head = nullptr;
    Tail = nullptr;
  }

  void Insert(const T &data);
  void Print();
};

template <class T>
void LinkedList<T>::Insert(const T &data) {
  Node<T> *aux = new Node<T>(data);
  if (Head == nullptr) {
    Head = aux;
    Tail = aux;
  }
  else {
    Tail->Next = aux;
    Tail = aux;
  }
}

template <class T>
void LinkedList<T>::Print() {
  if (Head == nullptr) {
    std::cout << "Empty linked list" << std::endl;
  }
  else {
    Node<T> *aux = Head;
    while (aux != nullptr) {
      std::cout << aux->Data << std::endl;
      aux = aux->Next;
    }
  }
}

#endif
