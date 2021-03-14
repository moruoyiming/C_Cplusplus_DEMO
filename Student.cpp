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

char *Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}


//无参构造函数
Student::Student() {
    cout << "无参数构造函数" << endl;
}

Student::Student(char *name) {
    cout << "一个参数构造函数" << endl;
    this->name = name;
}

Student::Student(char *name, int age) {
    cout << "二个参数构造函数" << endl;
    this->name = name;
}

//析构函数 Student对象得临终遗言  Student对象回收，做释放操作； JAVA finalize   KT 需要另外集成帮助类，主动调用
Student::~Student() {
    cout << "析构函数执行" << endl;
    //释放 堆区开辟得成员   -> NULL 避免悬空指针
}


// 覆盖拷贝函数
Student::Student(const Student &student) {//常量引用：只读，不允许修改
    cout << " 拷贝构造函数 " << endl;
    this->name = student.name;
    this->age = student.age;

}