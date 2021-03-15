#include <iostream>
#include <string.h>

using namespace std;


/**
 * 指针常量 常量指针 常量指针常量
 * @return
 */
int main() {
//    const * char  常量指针
//    strcpy()

//  常量
    int number = 9;
    int number2 = 8;

//  常量指针    const = 常量  int *= 指针
    const int *numberP = &number;
//  不允许修改【常量指针】存放地址所对应的值
//  *numberP = 100;
//  允许修改【常量指针】存放的地址
    numberP = &number2;


//  指针常量    int *= 指针   const = 常量
    int *const numberP2 = &number2;
//  允许修改【指针常量】存放地址所对应的值
    *numberP2 = 100;
//  不允许修改【指针常量】存放的地址
//  numberP2 = &number2;


//   常量指针常量
    const int *const numberP3 = &number;
//   不允许修改任何值

    return 0;
}

