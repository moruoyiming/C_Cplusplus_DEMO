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

//无参构造函数
Student::Student(){
    cout << "无参数构造函数" << endl;
}

Student::Student(char * name) {
    cout << "一个参数构造函数" << endl;
    this->name = name;
}