#include <iostream>
#include <string.h>
#include "Student.h"

using namespace std;

/**
 * 拷贝构造函数
 * @return
 */
int main(){

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
    return 0;
}

