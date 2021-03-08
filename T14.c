//
// Created by 菅瑞霖 on 2021/3/8.
//
#include <stdio.h>

int main14() {
    int a[] = {6, 4, 8, 3, 1, 2, 9, 7, 0, 5};
    int result = a[*(a+*(a+4))];
    //*(a+4)  =  1
    //*(a+1) = 2   a=4
    printf("result的值是：%d \n ",result);
    printf("*(a+4) = %d \n",*(a+4));// 1
    printf("*(a+*(a+4)) = %d \n",*(a+1));// 指向 1  的值  4
    printf("a[*(a+*(a+4))] = %d \n",a[*(a+*(a+4))]); //a[4]  = 1
    return 0;
}