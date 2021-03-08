#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

struct Person {
    char *name;//字符指针  直接赋值
//    char *[]  字符数组   需要使用strcpy 赋值
    int age;
    char sex;
} ppp = {"Derry", 33, 'M'};

/**
 * 结构体
 * @return
 */
int main15() {
    printf("name:%s , age:%d , sex:%c",ppp.name,ppp.age,ppp.sex);
//    strcpy(ppp.name,"Hello World");
    printf("name:%s , age:%d , sex:%c",ppp.name,ppp.age,ppp.sex);
    return 0;
}
