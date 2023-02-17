//
// Created by MINt K on 17/2/2023.
//

#include "main.h"

int main(int argc, char ** argv) {
    printf("Hello C :\n");
    printSomething();
    loop();
    return 0;
}

int printSomething() {
    // 字符串
    printf("输出: %s\n", "输出的字符串");
    // 输出 整数 小数 带符号的正负数 格式化输出
    printf("输出: %d %f %+d %-5d\n", 20, 3.1415926, 20, 20);
    // 控制小数位数输出
    printf("输出: %.4f\n", 3.1415926);
    // 控制字符串输出位数
    printf("输出: %.5s\n", "hello, worlds");

    return 0;
}

int loop() {
    // for 循环从1加到10
    for(int x = 0; x <= 10; x++) {
        printf("现在的值是: %d\n", x);
    }
    // while 循环直到值到10为止
    int result = 0;
    while(result <= 10) {
        printf("现在result的值: %d\n", result);
        result++;
    }
    return 0;
}
