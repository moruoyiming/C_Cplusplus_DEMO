#include <iostream>
#include <stdarg.h>

using namespace std;

class Worker {
public:
    char *name;
    int age = NULL;

    Worker() {

    }

    Worker(char *name, int age) {

    }

    /**
     * 原理 为什么可以修改age
     * 默认持有隐式this(Worker * const this 指针常量)
     * int * const 指针常量【地址不能修改，地址对应的值能修改】
     * const int * 常量指针【地址能修改，地址对应的值不能修改】
     */
    void change() {
        this->age = 78;
        this->name = "HHH";
    }

    //默认现在： this 等价于 const Worker * const 常量指针常量
    void changeAction() const {//地址不能修改，地址对应的值不能修改
//        this->age=78;
//        this->name = "HHH";
//        this = 0x464646;
    }

    //const  类型 * const 常量指针常量
    void showInfo() const {
        //只读
        cout << "age:" << age << endl;
    }

};

/**
 * const 修饰
 * @return
 */
int main() {

    cout << "dsfasdf" << endl;
    return 0;
}

