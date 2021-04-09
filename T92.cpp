#include <iostream>
#include <memory>
#include "CustomPtr.h"

using namespace std;


class Cat2 {
public:
    ~Cat2() {
        cout << "析构函数释放" << endl;
    }
};

//TODO 智能指针内置的
void action() {
    Cat2 *cat1 = new Cat2();
    Cat2 *cat2 = new Cat2();
    //第一种情况
//    shared_ptr<Cat2> sharedPtr1(cat1);
//    shared_ptr<Cat2> sharedPtr2(cat2);
//    //第二种情况
    shared_ptr<Cat2> sharedPtr1(cat1);
    shared_ptr<Cat2> sharedPtr2 = sharedPtr1;

    cout << "智能指针内置的 sharedPtr1 count=" << sharedPtr1.use_count() << endl;
    cout << "智能指针内置的 sharedPtr2 count=" << sharedPtr2.use_count() << endl;
}

//TODO 手写的智能指针
void action2() {
    Cat2 *cat1 = new Cat2();
    Cat2 *cat2 = new Cat2();
    //第一种情况
//    Ptr<Cat2> sharedPtr1(cat1);
//    Ptr<Cat2> sharedPtr2(cat2);
    //第二种情况
//    Ptr<Cat2> sharedPtr1(cat1);
//    Ptr<Cat2> sharedPtr2 = sharedPtr1;
    //第三种情况
    //情况一
//    Ptr<Cat2> sharedPtr1(cat1);//构建对象
//    Ptr<Cat2> sharedPtr2;//也会构建对象，此对象指向了object 与 count 必须释放。
//    //在写下面代码之前，必须释放sharedPtr2的所有object count
//    //sharedPtr2完全释放干净后，才可以赋值sharedPtr2 = sharedPtr1；
//    sharedPtr2 = sharedPtr1;
    //情况二
    Ptr<Cat2> sharedPtr1(cat1);//构建对象
    //cat2 成为野对象（没有被智能指针管理的对象 称为野对象）
    Ptr<Cat2> sharedPtr2(cat2);
    //在写下面代码之前，必须释放sharedPtr2的所有object count
    //sharedPtr2完全释放干净后，才可以赋值sharedPtr2 = sharedPtr1；
    sharedPtr2 = sharedPtr1;
    cout << "手写的智能指针 sharedPtr1 count=" << sharedPtr1.use_count() << endl;
    cout << "手写的智能指针 sharedPtr2 count=" << sharedPtr2.use_count() << endl;
}

int main92() {

    cout << "========下面是C++内置智能指针========" << endl;
    action();
    cout << endl;
    cout << "========下面是C++自定义智能指针========" << endl;
    action2();
    return 0;
}