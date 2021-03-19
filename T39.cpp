#include <iostream>

using namespace std;


class Animals {

public:
    char *name;
    int age;
public:
    static int id;//先声明

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

    //默认的构造函数，栈区开辟空间，暴露地址 == this 指针
};

int Animals::id = 100;//再实现

/**
 * c++ this原理
 * @return
 */
int main39() {
    //常规使用
    Animals animal;
    animal.setName("王德发");
    animal.setAge(2323);
    animal.id = 880;
    cout << "name="<<animal.getName() << " , age =" << animal.getAge() << endl;

    Animals tom;
    tom.setName("TOM");
    tom.setAge(100);
    tom.id = 980;

    cout << "name="<<tom.getName() << " , age =" << tom.getAge() << endl;
    Animals jry;
    jry.setName("JRY");
    jry.setAge(1231);
    jry.id =1000;

    cout << "name="<<jry.getName() << " , age =" << jry.getAge() << endl;

//    静态区共享同一区域
    cout << "animal id "<<animal.id << endl;
    cout << "tom id "<<tom.id << endl;
    cout << "jry id "<<jry.id << endl;
    cout << "Animals id "<<Animals::id << endl;
//    delete animal;
    return 0;
}//main 函数弹栈会执行隐式代码 （delete）

