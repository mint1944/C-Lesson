//
// Created by MINt K on 17/2/2023.
//

#include "linkStruct.h"

int main(int argc, char ** argv) {
    ListPtr l = createList();
    addNode(l, NULL, "Hello");
    return 0;
}