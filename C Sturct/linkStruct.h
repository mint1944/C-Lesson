//
// Created by MINt K on 17/2/2023.
//

#ifndef C_LESSON_LINKSTRUCT_H
#define C_LESSON_LINKSTRUCT_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list List;
typedef List * ListPtr;
typedef struct node Node;
typedef Node * NodePtr;

ListPtr createList();
int addNode(ListPtr l, NodePtr nodePos, char * Message);

struct list{
    NodePtr head;
    NodePtr tail;
};

struct node {
    char * nodeMessage;
    NodePtr nextNode;
};

ListPtr createList() {
    ListPtr l = (List *) malloc(sizeof(List));

    if(l != NULL) {
        l = NULL;
    }

    return l;
}

int addNode(ListPtr l, NodePtr nodePos, char * Message) {
    NodePtr node = (Node*) malloc(sizeof(Node));
    if(node == NULL) {
        printf("节点创建错误 :(\n");
        exit(1);
    }

    node->nodeMessage = Message;

    if(nodePos == NULL) {
        printf("当前链表不存在节点, 将此节点设置为头部 :)\n");
        l->head = node;
    } else {
        node->nextNode = nodePos->nextNode;
        nodePos->nextNode = node;
    }
    if(l->tail == nodePos) {
        l->tail = node;
    }

    return 0;
}




#endif //C_LESSON_LINKSTRUCT_H
