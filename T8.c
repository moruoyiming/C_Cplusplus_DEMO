#include <stdio.h>
#include <stdlib.h>

/**
 * relloc 使用
 * 静态开辟内存 申请的是栈区，动态开辟内存 申请的是堆区
 * @return
 */
int main8(void) {
    int num;
    printf("请输入数的个数：\n");
    scanf("%d", &num);
    int *arr = (int *) malloc(sizeof(int) * num);
    for (int i = 0; i < num; ++i) {
        arr[i] = (i + 1001);
    }
    printf("开辟的内存地址：%p\n", arr);
    for (int i = 0; i < num; ++i) {
        printf("开辟内存的指针的值是：%d，内存地址：%p \n", arr[i], arr + i);
    }
    printf("请输入增加的数个数：\n");
    int num2;
    scanf("%d", &num2);
    //原来的大小4+新增加的大小4  = 总和
    int *new_arr = (int *) realloc(arr, sizeof(int) * (num + num2));
    if (new_arr) {
        int j = num;
        for (; j < num + num2; j++) {
            arr[j] = j + 1001;
        }
        printf("新开辟内存指针%p \n", new_arr);
        for (int i = 0; i < num + num2; i++) {
            printf("新元素的值：%d，元素地址：%p \n", arr[i], arr + i);
        }
    }
    if (new_arr) {
        free(new_arr);
        //不置NULL 就是悬空指针
        new_arr = NULL;
    }

    return 0;
}