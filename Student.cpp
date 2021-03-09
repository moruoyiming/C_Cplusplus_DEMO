#include "Student.h"

//实现方法
void Student::setAge(int age) {
    this->age = age;
}

void Student::setName(char *name) {
    //C++ 对象指向得是一个指针
    //调用一级指针得成员
    this->name = name;
}

char* Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}