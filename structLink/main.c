//
// Created by MINt K on 21/2/2023.
//

#include "linkStruct.h"

int main(int argc, char ** argv) {
    ListPtr l = createList();
    addNode(l, getHead(l), "1");
    addNode(l, getTail(l), "2");
    addNode(l, getTail(l), "3");
    addNode(l, getTail(l), "4");
    addNode(l, getTail(l), "5");
    printAllNode(l);
    findNode(l, "2");
    return 0;
}