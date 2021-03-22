#include "Dog.h"
#include <iostream>

using namespace std;
//实现 静态属性【不需要增加static关键字】
int Dog::id = 787;

//实现 构造函数
Dog::Dog() {
    cout << "无参构造函数" << endl;
}

Dog::Dog(char *name) {
    cout << "一个参数构造函数" << endl;
}


Dog::Dog(char *name, int age) {
    cout << "二个参数构造函数" << endl;
}

//实现 普通函数
void Dog::setAge(int age) {
    this->age = age;
    cout << "setAge age= " << age << endl;
}

void Dog::setName(char *name) {
    this->name = name;
    cout << "setName name= " << name << endl;
}

char *Dog::getName() {
    return this->name;
}

int Dog::getAge() {
    return this->age;
}

//实现 析构函数
Dog::~Dog() {
    cout << "析构函数" << endl;
}

//实现 静态函数【不需要增加static关键字】
void Dog::changeAge(int age) {
    cout << "changeAge age=" << age << endl;
}

//实现 友元函数【不需要关键字/对象::】只需要保证函数名(参数)
void changeName(Dog *dog, char *name) {
    dog->setName(name);
    cout << "changeName name=" << name << endl;
}

//常量指针常量  只读
void Dog::showPigInfo() const {
    cout << "showPigInfo name =" << name << ",age = " << age << endl;
}