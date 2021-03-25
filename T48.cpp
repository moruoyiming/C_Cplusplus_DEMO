//C++ 属性初始化方式
#include <iostream>

using namespace std;

class Plant {
protected:
    //注意：string 是std 命名空间里面的成员，C++ 源码是这种写法std::string
    //原理：string 其实就是对char*的封装
    string name;
    int age;

public:
    Plant(string name, int age) : name(name), age(age) {

    }
};

class Vegetables {
private:
    string name;
public:
    Vegetables(string name) : name(name) {

    }
};

class FLower : public Plant {
private:
    //如果定义的是对象成员，必须这样初始化(构造函数的后面：对象成员(内容))
    Vegetables vegetables;//对象成员

public:
    FLower(string name, int age, Vegetables vegetables, string vegetableName)
            : Plant(name, age) //既然继承了弗雷就必须给父类构造函数初始化
            ,
              vegetables(vegetableName)//第三种方式,对象(string内容) 直接初始化vegetables对象 -->调用到构造函数
//              vegetables(vegetables)//第二种方式,编译阶段认可的，对象=对象 对象直接赋值
    {
//        this->vegetables = vegetables //第一种方式（对象=对象）编译阶段不认可，无法检测到你是否真的给vegetables对象成员初始化

    }

};

int main48() {
    Vegetables yangcong("C++");
    FLower flower("Derry", 12, yangcong, "C++课程");
    return 0;
}