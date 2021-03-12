#include <iostream>
#include "Student.h"

using namespace std;


/**
 * 构造函数详解
 * @return
 */
int main() {

    //堆区开辟空间
    Student * student = new Student();
    Student * student2 = new Student("有参数构造函数");
    student->setAge(232);
    student->getAge();
    cout << "student age:"<< student->getAge()  << endl;
    student2->getName();
    cout << "student2 name:"<<  student2->getName()  << endl;
    //栈区开辟空间
    Student student3;
    return 0;
};

