#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Cat2 {
    char name[10];
    int age;
};

int main17() {
    struct Cat2 *cat2 = malloc(sizeof(struct Cat2));
    strcpy(cat2->name, "金色猫");
    cat2->age = 10;
    printf("name:%s ,age:%d \n", cat2->name, cat2->age);
    if (cat2) {
        free(cat2);
        cat2 = NULL;
    }
    return 0;
}