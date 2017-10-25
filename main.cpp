#include <iostream>
#include "data-structures/lists/List.h"

int main() {
    auto *list = new ds::List();

    list->Insert(1);
    list->Insert(2);
    list->Insert(3);
    list->Print();

    ds::Node *res = list->Search(2);
    int *val = &res->Value;
    std::cout << list->Search(2) << std::endl;
    std::cout << *val << std::endl;

    return 0;
}