#include <stdio.h>

//枚举类 int 类型
enum CommontType {
    TEXT = 10,
    TEXT_IMAGE,
    IMAGE
};

typedef enum CommontType ComontType;

int main() {
    //Clion写法
    enum CommontType commontType1 = TEXT;
    enum CommontType commontType2 = TEXT_IMAGE;
    enum CommontType commontType3 = IMAGE;
    //VS写法
//    CommontType commontType = TEXT;

    printf("print %d, %d , %d \n",commontType1,commontType2,commontType3);
    //解决差异化
    ComontType comontType2 = TEXT;
}