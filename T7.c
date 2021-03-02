#include <stdio.h>
#include <stdlib.h>

//动态分配的使用场景
int main7() {
    //静态分配的内存空间大小，无法修改，如果不需要动态修改空间大小，可以使用栈区
//    int arr [6];
    int num;
    printf("请输入数的个数：");
    scanf("%d",&num);
    //动态开辟 用户输入的值 空间的大小
    int *arr = malloc(sizeof(int) * num);
    int print_num;
    //循环接收
    for (int i = 0; i < num; ++i) {

        printf("请输入第%d个的值：", i);

        scanf("%d",&print_num);

        arr[i] = print_num;
        printf("每个元素的值%d,每个元素的地址%p\n", *(arr + i), arr + i);
    }
    for(int i =0;i< num;++i){
        printf("输出元素的结果是%d\n",arr[i]);//aar[i]隐式 *(arr+i)
    }

    getchar();
    return 0;
}