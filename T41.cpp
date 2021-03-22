#include <iostream>
#include <stdarg.h>

using namespace std;

class Person1 {
private:
    int age = 0;

public:
    Person1(int age) {
        this->age = age;
    }

    int getAge() {
        return age;
    }

    //声明友元函数，指有声明没有实现
    friend void updateAge(Person1 *person1, int age);
};

//友元函数的实现，可以访问所有私有成员
void updateAge(Person1 *person1, int age) {
    //无法修改私有变量  -》 友元函数概念
    person1->age = age;
}



/**
 * 友元函数
 * @return
 */
int main41() {
    Person1 person1 = Person1(9);
    updateAge(&person1, 32);
    return 0;
}

