#include <iostream>
#include <stdarg.h>//可变参数

using namespace std;

void sum(int count, ...) {
    va_list vp;//可变参数的动作
    //参数 ： 可变参数开始的动作vp

    //开启阶段 向vp存信息
    va_start(vp, count);


    //获取数据
    int number = va_arg(vp, int);
    cout << " number = " << number << endl;
    number = va_arg(vp, int);
    cout << " number = " << number << endl;

    //关闭阶段
    va_end(vp);
}


/**
 * 可变参数
 * @return
 */
int main() {
    sum(200, 12, 12);
    return 0;
}