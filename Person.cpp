#define _CRT_SECURE_NO_WARNINGS // strcpy���лᱨ��

#include "Person.h"
#include <iostream>
#include <string.h>

using namespace std;

Person::Person() {
    cout << "�ղ������캯��" << endl;
}

Person::Person(char *name) : Person(name, age) {
    cout << "һ���������캯�� this : " << this << endl;
}

Person::Person(char *name, int age) {
    cout << "�����������캯�� this : " << this << endl;
    this->name = static_cast<char *>(malloc(sizeof(char *) * 10));
    strcpy(this->name, name);
    this->age = age;
}

Person::~Person() {
    cout << "��������ִ�� this : " << this << endl;
    free(this->name);
    this->name = NULL;
}

Person::Person(const Person &person) {
    cout << "�������캯��ִ�� person=" << &person << "   this =  " << this << endl;
//  ��ǳ������ �µ�ַname���ɵ�ַnameָ��ͬһ���ռ䣬������ظ�free�����⣬��������
    this->name = person.name;
    this->age = person.age;
//    &person �ɵ�ַ  this->nameΪ�µ�ַ
//    &person �ɵ�ַ  this->ageΪ�µ�ַ
//  ������� �ɵ�ַname���µ�ַname������ָ��һ���ڴ�ռ䡣
//    this->name = static_cast<char *>(malloc(sizeof(char *) * 10));
//    strcpy(this->name,person.name);
}