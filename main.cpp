#include <iostream>



#define LENGTH = 10
#define WIDTH = 5
//函数定义
int func();

int main() {
    std::cout << "Hello, World!" << std::endl;
    int i = 200;
    double j = 3000;
    long m = 4000;
    char a = 'ada';
    printf("what is %d \n", i);
    printf("what is %lf \n", j);
    printf("what is %d\n", m);
    printf("what is %c\n", a);
    int k = 3000;
    int *l = &k;
    printf("what is %d , %d \n", k, &k);
    *l = 4000;
    printf("what is %d , %d \n", k, &k);
    printf(" int sizeof is %d \n", sizeof(int));
    printf(" double sizeof is %d \n", sizeof(double));

    int size = func();
    printf("size is %d \n", size);
    return 0;
}

int func() {
    int a;
    int b;
    a = 100;
    b = 234;

    return a + b;
}
