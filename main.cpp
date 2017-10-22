#include "data-structures/binary-trees/Node.h"

int main() {
    auto *tree = new ds::BTree();

    tree->Insert(10);
    tree->Insert(6);
    tree->Insert(14);
    tree->Insert(3);

    tree->PreOrder();
    tree->InOrder();
    tree->PostOrder();

    delete tree;

    return 0;
}