#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cat {
//    char *name;
    char name[10];
    int age;
};
/**
 *  结构体指针
 * @return
 */
int main16() {
    struct Cat cat = {"小野猫", 2};

    struct Cat * catp = &cat;
    catp->age = 12;
    //    catp->name = "小奶猫";
    strcpy(catp->name, "小奶猫咪");
    printf("name:%s , age:%d", catp->name, catp->age);

    return 0;

}