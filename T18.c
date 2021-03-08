#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Cat3 {
    char name[10];
    int age;
};

/**
 * 结构体数组
 * @return
 */
int main18() {

    struct Cat3 cat[4] = {
            {.name ="小黄", .age =1},
            {.name ="小黑", .age =2},
            {.name ="小红", .age =3},
            {.name ="小紫", .age =4},
    };
    struct Cat3 cat3 = {"小白", .age = 5};
    *(cat + 3) = cat3;
    printf("name:%s ,age:%d \n", cat[3].name, cat[3].age);


    struct Cat3 *cat2 = malloc(sizeof(struct Cat3) * 4);
    strcpy(cat2->name, "小奶猫");
    cat2->age = 12;
    printf("name:%s ,age:%d \n", cat2->name, cat2->age);

    cat2 += 3;
    strcpy(cat2->name, "小奶猫3");
    cat2->age = 123;
    printf("name:%s ,age:%d \n", cat2->name, cat2->age);
    free(cat2);
    cat2 = NULL;
    return 0;
}