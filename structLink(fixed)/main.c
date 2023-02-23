#include "structLink.h"

int main(int argc, char ** argv) {
    ListPtr l = createList();
    addNode(l, getTail(l), "7934276345");
    addNode(l, getTail(l), "7934276345");
    addNode(l, getTail(l), "7934276345");
    addNode(l, getTail(l), "7934276345");
    addNode(l, getTail(l), "7934276345");
    free(l);
    return 0;
}