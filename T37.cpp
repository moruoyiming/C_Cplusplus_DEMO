#include <iostream>
#include <stdarg.h>//可变参数

using namespace std;


void sum(int count, ...) {

    //参数 ： 可变参数开始的动作vp
    va_list vp;

    //开启阶段 向vp存信息
    //参数一：可变参数开始的动作vp
    //参数二：内部需要一个 存储地址用的参考值，如果没有第二个参数，内部无法处理存放参数信息
    va_start(vp, count);

//    //获取数据
//    int number = va_arg(vp, int);
//    cout << " number = " << number << endl;
//    number = va_arg(vp, int);
//    cout << " number = " << number << endl;

    //循环获取数据
    for (int i = 0; i < count; i++) {
        int r = va_arg(vp, int);
        cout << " number = " << r << endl;
    }

    //关闭阶段
    va_end(vp);
}


/**
 * 可变参数
 * @return
 */
int main37() {
    sum(3, 12, 12);
    return 0;
}