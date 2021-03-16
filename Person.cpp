#define _CRT_SECURE_NO_WARNINGS // strcpy运行会报错

#include "Person.h"
#include <iostream>
#include <string.h>

using namespace std;

Person::Person() {
    cout << "空参数构造函数" << endl;
}

Person::Person(char *name) : Person(name, age) {
    cout << "一个参数构造函数 this : " << this << endl;
}

Person::Person(char *name, int age) {
    cout << "二个参数构造函数 this : " << this << endl;
    this->name = static_cast<char *>(malloc(sizeof(char *) * 10));
    strcpy(this->name, name);
    this->age = age;
}

Person::~Person() {
    cout << "析构函数执行 this : " << this << endl;
    free(this->name);
    this->name = NULL;
}

Person::Person(const Person &person) {
    cout << "拷贝构造函数执行 person=" << &person << "   this =  " << this << endl;
//  【浅拷贝】 新地址name，旧地址name指向同一个空间，会造成重复free的问题，引发崩溃
    this->name = person.name;
    this->age = person.age;
//    &person 旧地址  this->name为新地址
//    &person 旧地址  this->age为新地址
//  【深拷贝】 旧地址name，新地址name会重新指向一个内存空间。
//    this->name = static_cast<char *>(malloc(sizeof(char *) * 10));
//    strcpy(this->name,person.name);
}