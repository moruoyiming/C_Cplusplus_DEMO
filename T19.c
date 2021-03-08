#include <stdio.h>
#include <stdlib.h>

struct Workder_ {
    char name[10];
    int age;
    char sex;
};
//VS的写法 typedef Worker_
typedef struct Workder_ Workder_;//给结构体取别名
//结构体指针
typedef struct Workder_ *Workder;//给结构体指针取别名

//匿名结构体别名
typedef struct {
    char name[10];
    int age;
    char sex;
};


//为什么typedef 取一个和结构体一样得名字  为了兼容问题

int main19() {
    Workder workder = malloc(sizeof(Workder_));

    return 0;
};