#include <iostream>
#include "Person.h"

using namespace std;


/**
 * 深拷贝  浅拷贝
 * @return
 */
int main35() {

    // 1.情况分析 栈上分配内存，弹栈
    Person man;
    Person woman;
    cout << " man " << &man << " woman " << &woman << endl;
//    空参数构造函数
//    空参数构造函数
//    man 0x7ffeee755580 woman 0x7ffeee755570

    // 2.情况分析
    Person kid;
    Person old = kid; //触发拷贝构造函数
    cout << " kid " << &kid << " old " << &old << endl;
//    空参数构造函数
//    kid 0x7ffee7b8b560 old 0x7ffee7b8b550

    getchar();//停留
    return 0;
}