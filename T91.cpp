#include <iostream>
#include <memory>

using namespace std;


class Cat {
};

//TODO 手写智能指针
int main91() {
    Cat *yellow = new Cat();
    Cat *black = new Cat();

    shared_ptr<Cat> sharedPtr(yellow);// 引用计数 +1

    //第一种情况  调用拷贝构造函数
    //shard_ptr 智能指针的特性
    //sharedPtr 指向yellow 对象 引用计数+1 ，sharedPtr2也指向yellow对象 应用计数再+1。
    shared_ptr<Cat> sharedPtr2 = sharedPtr;// 引用计数 +1  原因：调用了拷贝构造函数。不会调用构造函数。

    //第二种情况
    //不会调用拷贝构造函数，属于普通赋值
    shared_ptr<Cat> sharedPtr3;// 先执行构造函数开辟对象，然后在赋值
    // 给sharedPtr3对象从新赋值
    sharedPtr3 = sharedPtr;//自定义操作符重载



    cout << "count=" << sharedPtr.use_count() << endl;
    return 0;
}//main函数弹栈  sharedPtr 栈成员  -->析构函数 引用计数 -1 -->等于0 就释放对象