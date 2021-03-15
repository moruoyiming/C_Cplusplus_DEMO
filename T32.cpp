#include <iostream>
#include "Student.h"

using namespace std;


/**
 * 构造函数详解
 * @return
 */
int main32() {

    //堆区开辟空间
    Student *student = new Student();
    Student *student2 = new Student("有参数构造函数");
    student->setAge(232);
    student->getAge();
    cout << "student age:" << student->getAge() << endl;
    student2->getName();
    cout << "student2 name:" << student2->getName() << endl;
    //栈区开辟空间
    Student *student3 = new Student("有参数构造函数", 23);
    cout << "name:" << student3->getName() << ",age:" << student3->getAge() << endl;
    delete student3;//析构函数执行
    delete student2;
    delete student;
//    free(student3)  new 对象此方式不规范
//  malloc 构造函数不执行
    return 0;
};

