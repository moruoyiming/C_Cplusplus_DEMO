#include <stdio.h>
//方法进栈
void staticAction() {
    int arr[5];
    int i = 0;
    for (i = 0; i < 5; i++) {
        arr[i] = i;
        printf("arr[i]=%d   ,  *(arr+1)=%d \n", arr[i], *(arr + i));
    }
}
//方法出栈  释放栈上内存

/**
 * 内存静态开辟
 * @return
 */
int main5(void) {
//    int arr[10 * 1024 * 1024];//10M  int占 4个字节  10M*4 = 40M
    //栈内存：  栈平均大小分配在2M
    //堆内存：  堆平均大小分配在40M
    staticAction();
    return 0;
}

