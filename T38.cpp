#include <iostream>

using namespace std;

class Dog1 {
public:
    char *name;
    int age;
//    这样声明编译失败
//    外部声明，构造函数中初始化，运行时崩溃
//    static int id = 9;

//    Dog() {
//        id = 9;
//    }

    //静态函数不能调用非静态函数
    static void update() {
        id = 19;
    }

//====================正确实现===================
    //1.先声明
    static int id;


};

//2.再实现
int Dog1::id = 9;

/**
 * static 静态关键字
 * 1.可以直接通过类名:: 静态成员(字段/函数)
 * 2.静态的属性必须要初始化，然后再实现
 * 3.静态的函数只能取操作静态的属性和方法
 * @return
 */
int main38() {
    Dog1 dog;
    cout << " number = " << Dog1::id << endl;
    Dog1::update();//类名::调用静态函数
    cout << " number = " << Dog1::id << endl;
    return 0;
}

