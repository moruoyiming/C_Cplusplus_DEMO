#include <stdio.h>
#include <stdlib.h>

struct Workder_ {
    char name[10];
    int age;
    char sex;
};
//VS的写法 typedef Worker_
typedef struct Workder_;
typedef struct Workder_ * Workder;

int main() {
    Workder workder = malloc(sizeof(Workder_));

    return 0;
};