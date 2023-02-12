//
//  main.c
//  Stdio Lesson
//
//  Created by MINt K on 12/2/2023.
//

#include <stdio.h> // 标准输入输出库

int main(int argc, const char * argv[]) {
    // 在控制台输出文字
    // 使用printf进行输出
    printf("输出的文字 :) \n");
    
    // 在控制台输出文字变量
    char text[30] = "变量存储的文字";
    printf("控制台输出的文字: %s\n", text);
    printf("内存地址: 0x%p\n", &text);
    
    // 变量
    int integer = 10;
    char charater = 'A';
    char charaterStr[10] = "10101010";
    double doubleNumber = 10.21412421;
    float floatNumber = 20.12213124;
    
    // 定量
    const int intergerC = 11;
    const char charaterC = 'B';
    const char charaterStrC[10] = "2020202";
    double doubleNumberC = 30.24124213213;
    float floatNumberC = 40.12321512421;
    
    // 输出变量和定量
    printf("整数: %d 字符: %c 字符串: %s 浮点数1: %f 浮点数2: %f \n", integer, charater, charaterStr, doubleNumber, floatNumber);
    
    
    return 0;
}
