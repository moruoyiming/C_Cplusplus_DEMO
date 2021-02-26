#include <stdio.h>

//函数指针
void add(int a, int b) {
    printf("method add %d \n", a + b);
}

void sub(int a, int b) {
    printf("method sub %d \n", a - b);
}

void oprate(void(*method)(int, int), int num, int num2) {
    method(num, num2);
}


//* 取出内存地址的值
int main() {

    //多级指针
    int num = 100;
    int *num_p = &num;
    printf("num value is %d ,&num is %p ,num_p is %p ,*num_p is %d \n", num, &num, num_p, *num_p);
    int **num_p_p = &num_p;
    printf("num value is %d ,&num is %p ,num_p is %p ,*num_p_p is %d , num_p_p is %p ,**num_p_p is %d \n", num, &num,
           num_p,
           *num_p, num_p_p, **num_p_p);
    int ***num_p_p_p = &num_p_p;
    printf("num value is %d ,&num is %p ,num_p is %p ,*num_p_p is %d , num_p_p is %p ,**num_p_p is %d ,num_p_p_p is %p ,***num_p_p_p is %d \n",
           num, &num,
           num_p,
           *num_p, num_p_p, **num_p_p, num_p_p_p, ***num_p_p_p);

    printf("***num_p_p_p is %d 地址是%p,*num_p_p is %d  地址是%p ,*num_p is %d 地址是%p \n", ***num_p_p_p, &(***num_p_p_p),
           **num_p_p, &(**num_p_p), *num_p, &(*num_p));


    //数组指针
    int array[] = {15, 20, 123, 135};
    int *array_p = &array;
    printf(" array ad is %p \n", array);
    printf(" &array ad is %p \n", &array);
    printf(" array_p ad is %p \n", array_p);

    printf(" *array_p ad is %d \n", *array_p);
    printf(" array[0] ad is %d \n", array[0]);
    printf(" array_p[0] ad is %d \n", array_p[0]);
    int i = 0;
    for (i = 0; i < 4; i++) {
        printf("for i = %d , array[i] = %d \n", i, array[i]);
        printf("for i = %d , array_p = %d \n", i, *array_p++);
    }
    printf("int sizeof is %d ,array sizeof is %d \n",sizeof(int),sizeof(array));

    //函数指针
    oprate(add,20,10);
    oprate(sub,200,31);
    printf("add is %p \n",add);
    printf("add is %p \n",&add);

    return 0;
}