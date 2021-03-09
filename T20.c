#include <stdio.h>

//枚举类 int 类型
enum CommontType {
    TEXT = 10,
    TEXT_IMAGE,
    IMAGE
};

//创建时取名
typedef enum {
    AUDIO = 10,
    VIDEO
} AV;

typedef enum CommontType ComontType;

int main20() {
    //Clion写法
    enum CommontType commontType1 = TEXT;
    enum CommontType commontType2 = TEXT_IMAGE;
    enum CommontType commontType3 = IMAGE;
    //VS写法
//    CommontType commontType = TEXT;
    AV av = AUDIO;
    AV av2 = VIDEO;

    printf("print %d, %d , %d \n", commontType1, commontType2, commontType3);
    //解决差异化
    ComontType comontType2 = TEXT;
}