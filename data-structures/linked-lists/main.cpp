#include "LinkedList.h"

int main() {
  LinkedList<int> ll;
  ll.Print();

  ll.Insert(1);
  ll.Insert(2);
  ll.Insert(3);
  ll.Print();

  return 0;
}
