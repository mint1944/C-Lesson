//
// Created by MINt K on 22/2/2023.
//

#ifndef STRUCTLINK_FIXED__STRUCTLINK_H
#define STRUCTLINK_FIXED__STRUCTLINK_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list List;
typedef struct node Node;
typedef List * ListPtr;
typedef Node * NodePtr;
typedef Node * NodePosition;

struct list {
    NodePtr head;
    NodePtr tail;
};

struct node {
    char * productID;
    NodePtr next;
};

int init(ListPtr l);
ListPtr createList(void);
int addNode(ListPtr l, NodePosition insertPosition, char * productID);
int deleteNode(ListPtr l, char * productID);
int editNode(ListPtr l, char * productID, char * newWord);
NodePtr findNode(ListPtr l, char * productID);
NodePtr getHead(ListPtr l);
NodePtr getTail(ListPtr l);

#endif //STRUCTLINK_FIXED__STRUCTLINK_H
