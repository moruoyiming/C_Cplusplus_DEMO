#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void dynamicAction() {
    //堆区开辟空间 malloc
    int *arr = malloc(10 * 1024);
    printf("arr 地址=%p, arr 地址=%p \n", &arr, arr);
    //释放堆区空间 free
    free(arr);

}

/**
 * 动态分配
 * 在堆区开辟空间 malloc
 * 在栈区声明内存地址
 * @return
 */
int main6(void) {
    while (9) {
        sleep(4);
        dynamicAction();
    }
    return 0;
}