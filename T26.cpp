#include "Student.h"

/**
 *  对象创建
 * @return
 */
int main() {
    //规范写法  头文件.h  .hpp    实现文件.cpp
    std::cout << 1 << std::endl;


    // 栈上开辟
    Student student;
    student.setAge(15);
    student.setName("Hell World");
    cout << "name:" << student.getName() << " age: " << student.getAge() << endl;

    // 堆上开辟
    Student *student1 = new Student();
    student1->setName("Java虚拟机");
    student1->setAge(1230);
    cout << "name:" << student1->getName() << " age: " << student1->getAge() << endl;
    delete student1;
    student1 = NULL;

    return 0;
}
