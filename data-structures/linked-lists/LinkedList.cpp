#include <iostream>
#include "LinkedList.h"

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
