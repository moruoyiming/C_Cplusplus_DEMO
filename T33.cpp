#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;

/**
 * 拷贝构造函数
 * @return
 */
int main33(){

    // = 号的意义， 隐式代码  引出拷贝构造函数
    Student student = {"jiaji",32};
    Student student2 = student;
    cout << "student = " << &student << endl;
    cout << "student2= " << &student2 << endl;
    //地址不同， 值相同
    cout << "student2 name = " << student2.getName() <<"   age =  "<<student2.getAge()<< endl;
    //对象  对象一 = 对象二， 默认拷贝构造函数;

    // 覆盖拷贝函数
    Student stu1("ligui",123);
    Student stu2 = stu1;
    cout << "student2 name = " << stu2.getName() <<"   age =  "<<stu2.getAge()<< endl;

    //指针类型对象赋值，不会调用拷贝构造函数  栈上指针变化。指针指向
    Student * student3 = new Student("muyecha",333);
    Student * student4 = student3;//指针指向发生变话，值不发生变化
    cout << "student4 name = " << student4->getName() <<"   age =  "<<student4->getAge()<< endl;
    student4->setAge(442);
    student4->setName("yeerniang");
    cout << "student3 name = " << student3->getName() <<"   age =  "<<student3->getAge()<< endl;
    return 0;
}

