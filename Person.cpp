#define _CRT_SECURE_NO_WARNINGS // strcpy运行会报错

#include "Person.h"
#include <iostream>
#include <string.h>

using namespace std;

Person::Person() {
    cout << "空参数构造函数" << endl;
}

Person::Person(char *name) : Person(name, age) {
    cout << "一个参数构造函数" << endl;
}

Person::Person(char *name, int age) {
    cout << "二个参数构造函数" << endl;
    this->name = static_cast<char *>(malloc(sizeof(char *) * 10));
    strcpy(this->name, name);
    this->age = age;
}

Person::~Person() {
    cout << "析构函数执行" << endl;
    free(this->name);
    this->name = NULL;
}

Person::Person(const Person &person) {
    cout << "拷贝构造函数执行 person=" << &person << endl;
    this->name = person.name;
    this->age = person.age;
//    this->name 旧地址  &person为新地址
//    this->age 旧地址  &person为新地址

}