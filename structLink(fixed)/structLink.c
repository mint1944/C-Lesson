//
// Created by MINt K on 22/2/2023.
//

#include "structLink.h"

int init(ListPtr l) {
    l = NULL;
    return 0;
}

ListPtr createList(void) {
    ListPtr l = (List*)malloc(sizeof(List));
    //if(l != NULL) {
    //    printf("正在初始化链表...\n");
    //    init(l);
    //    printf("链表初始化成功 :)\n");
    //}
    printf("链表创建成功 :)\n");
    return l;
}

int addNode(ListPtr l, NodePosition insertPosition, char * productID) {
    printf("正在创建节点...\n");
    NodePtr node = (Node*) malloc(sizeof(Node));
    if(node == NULL) {
        printf("节点创建失败 :(\n");
        exit(1);
    }
    printf("节点创建成功 :)\n");
    node->productID = productID;
    printf("节点数据添加成功 :)\n");
    if(insertPosition == NULL) {
        printf("链表内为空,将此节点设置为头节点...\n");
        l->head = node;
        printf("设置成功 :)\n");
    } else {
        printf("链表内有其他节点,将节点插入...\n");
        node->next = insertPosition->next;
        insertPosition->next = node;
        printf("节点插入成功 :)\n");
    }
    if(l->tail == insertPosition) {
        l->tail = node;
        printf("将尾部节点设置成该节点\n");
    }
    printf("节点添加成功\n");

    return 0;
}

int deleteNode(ListPtr l, char * productID) {
    NodePtr node, prev;
    for(node = l->head, prev = NULL; node != NULL; prev = node, node = node->next) {
        if(node->productID == productID) {
            printf("找到要删除的节点...\n");
            break;
        }
    }
    if(node == NULL) {
        printf("未找到要删除的节点 :(\n");
        exit(1);
    }
    printf("正在删除节点...\n");
    prev->next = node->next;
    free(node);
    printf("删除成功 :)\n");

    return 0;
}

int editNode(ListPtr l, char * productID, char * newWord) {
    NodePtr node;
    for(node = l->head; node != NULL; node = node->next) {
        if(node->productID == productID) {
            printf("已找到要编辑的节点\n");
            break;
        }
    }
    if(node == NULL) {
        printf("未找到要编辑的节点 :(\n");
        exit(1);
    }
    printf("正在修改节点内容...\n");
    node->productID = newWord;
    printf("节点修改完成 :)\n");

    return 0;
}

NodePtr findNode(ListPtr l, char * productID) {
    NodePtr node;
    for(node = l->head; node != NULL; node = node->next) {
        if(node->productID == productID) {
            printf("已找到节点\n");
            break;
        }
    }
    if(node == NULL) {
        printf("未找到节点 :(\n");
        exit(1);
    }

    return node;
}

NodePtr getHead(ListPtr l) {
    return l->head;
}

NodePtr getTail(ListPtr l) {
    return l->tail;
}