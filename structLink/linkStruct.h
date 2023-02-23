//
// Created by MINt K on 21/2/2023.
//

#ifndef STRUCTLINK_LINKSTRUCT_H
#define STRUCTLINK_LINKSTRUCT_H

#include <stdio.h>
#include <stdlib.h>

typedef char * nodeMessage; // 节点消息
typedef struct list List; // 链表结构体
typedef struct node Node; // 节点结构体
typedef List * ListPtr; // 链表指针
typedef Node * NodePtr; // 节点指针
typedef Node * Position; // 节点位置指针

int init(ListPtr l); // 初始化链表
ListPtr createList(void); // 创建链表
int addNode(ListPtr l, Position p, nodeMessage Message); // 添加链表节点
int deleteNode(ListPtr l, nodeMessage delMessage); // 删除链表节点
int editNode(ListPtr l, nodeMessage originalMessage, nodeMessage newMessage); // 编辑链表节点
NodePtr findNode(ListPtr l, nodeMessage findMessage); // 查找链表节点
NodePtr getHead(ListPtr l); // 返回头结点
NodePtr getTail(ListPtr l); // 返回尾节点
int printAllNode(ListPtr l); // 输出所有节点内容

struct list {
    NodePtr head;
    NodePtr tail;
};

struct node {
    nodeMessage message;
    NodePtr next;
};

#endif //STRUCTLINK_LINKSTRUCT_H
