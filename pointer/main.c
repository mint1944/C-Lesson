#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nameStruct NS;
typedef NS * NSP;

struct nameStruct {
    char nstr[20];
    int age;
    double height;
    double weight;
    char tag[20];
};

int main() {
    // 分配内存和使用自动内存
    char * myName = "myName";
    char myNameNoPointer[7] = "myName";
    printf("myName的地址是: %p myName的大小: %d byte\n", myName, sizeof(myName));
    printf("myNameNoPointer的地址是: %p myNameNoPointer的大小: %d byte\n", myNameNoPointer, sizeof(myNameNoPointer));
    char * newName = "myNewName";
    char ** TnewName = &newName;
    printf("newName内存地址: %p 内容: %s TnewName内存地址: %p 内容: %s\n", newName, newName, TnewName, *TnewName);
    // malloc 和 free C99不支持strcpy(str1, str2)函数
    NSP stack = (NS*) malloc(sizeof(NS));
    strcpy(stack->nstr, "HuaSongJin");
    strcpy(stack->tag, "MINt");
    stack->age = 21;
    stack->height = 182.51;
    stack->weight = 105.23;
    printf("名字: %s\n网名: %s\n年龄: %d\n身高: %.2fCm\n重量: %.2fKg\n", stack->nstr, stack->tag, stack->age, stack->height, stack->weight);
    printf("释放内存中...\n");
    free(stack);
    printf("内存释放成功 :)\n");
    return 0;
}
