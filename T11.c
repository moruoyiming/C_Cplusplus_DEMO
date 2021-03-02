#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main11() {

    //字符串转换
    char *num = "13543";
    int result = atoi(num);
    if (result) {
        printf(" num is result %d \n", result);
    }
    int length = strlen(num);
    if (result) {
        printf(" num is length %d \n", length);
    }
    //字符串比较

    char *str1 = "Hello";
    char *str2 = "World";

    int result2 = strcmp(str1, str2);
    if (!result2) {// 0 代表相等  ，非 0 不相等
        printf(" result2 is  相等 %d \n", result2);
    }else{
        printf(" result2 is  不相等 %d \n", result2);
    }
    return 0;
}