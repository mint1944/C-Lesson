//
// Created by MINt K on 21/2/2023.
//

#include "linkStruct.h"

int init(ListPtr l) {
    l = NULL;
    return 0;
}

ListPtr createList(void) {
    ListPtr l = (List*) malloc(sizeof(List));
    if(l != NULL) {
        init(l);
        printf("正在初始化链表\n");
    }
    printf("链表初始化成功 :)\n");
    return l;
}

int addNode(ListPtr l, Position p, nodeMessage Message) {
    NodePtr node = (Node*) malloc(sizeof(Node));
    if(node == NULL) {
        printf("节点初始化失败 :(\n");
        printf("程序退出\n");
        exit(1);
    }
    printf("节点创建成功 :)\n");
    node->message = Message;
    if(l->head == NULL && p == NULL) {
        printf("链表为空,将此节点设为头节点\n");
        l->head = node;
        printf("设置成功 :)\n");
    } else {
        printf("链表中存在其他节点,将此节点插入到中间\n");
        node->next = p->next;
        p->next = node;
        printf("插入成功 :)\n");
    }
    if(l->tail == p) {
        printf("插入的节点是最后一个节点,将此节点设置为尾节点\n");
        l->tail = node;
        printf("设置成功 :)\n");
    }
    printf("节点添加成功 :)\n");
    return 0;
}

int deleteNode(ListPtr l, nodeMessage delMessage) {
    NodePtr node, prev;
    for(node = l->head, prev = NULL; node != NULL; prev = node, node = node->next) {
        if(node->message == delMessage) {
            printf("已找到要删除的节点\n");
            break;
        } else {
            printf("未找到要删除的节点\n");
            exit(1);
        }
    }
    prev->next = node->next;
    free(node);
    printf("节点也删除 :)\n");

    return 0;
}

int editNode(ListPtr l, nodeMessage originalMessage, nodeMessage newMessage) {

    return 0;
}

NodePtr findNode(ListPtr l, nodeMessage findMessage) {
    NodePtr node;
    for(node = l->head; node != NULL; node = node->next) {
        if (node->message == findMessage) {
            printf("已找到要节点\n");
            break;
        }
    }
    if(node->message == findMessage) {
        printf("节点内容为: %s\n", node->message);
    } else {
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

int printAllNode(ListPtr l) {
    printf("开始输出内容\n");
    for(NodePtr node = l->head; node != NULL; node = node->next) {
        printf("节点内容: %s\n", node->message);
    }
    printf("输出完成\n");
    return 0;
}
