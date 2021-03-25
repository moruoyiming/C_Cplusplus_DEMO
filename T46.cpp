//C++ 对象继承

#include <iostream>

using namespace std;

class Person2 {
public:
    char *name;
    int age;
public:
    void setName(char *name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    char *getName() {
        return this->name;
    }

    int getAge() {
        return this->age;
    }


    Person2(char *name, int age) : name(name) {
        this->age = age;
        cout << "Person构造函数" << endl;
    }

    void print() {
        cout << "print" << this->name << this->age << endl;
    }

};

// 隐式代码  :private Person2
// 私有继承  :在子类里面是可以访问父类的成员，但是在类的外面不行
// 必须公开继承，才可以访问父类的成员
class Student2 : public Person2 {
    //类 默认是私有
public:
    Student2(char *name, int age) : Person2(name, age) {
        cout << "Student2 构造函数 " << this->name << this->age << endl;
    }
};

int main46() {

    Person2 person("张三", 123);
    person.print();
    //公开继承，才可以拿父类的成员
    Student2 stu("李四",3232);
    stu.name = "fasfas";

    // 父类构造函数
    // 子类构造函数
    // 子类析构函数
    // 父类析构函数
    return 0;
}