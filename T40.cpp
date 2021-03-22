#include <iostream>
#include <stdarg.h>

using namespace std;

class Worker {
public:
    char *name;
    int age = NULL;

    Worker(){

    }

    Worker(char *name, int age){

    }

    /**
     * 原理 为什么可以修改age
     * 默认持有隐式this(Worker * const this 指针常量)
     * const int * (指针常量代表指针地址不能修改，但是指针地址的值可以修改)
     */
    void change(){
        this->age=78;
    }

};

/**
 * const 修饰
 * @return
 */
int main40() {

    cout << "dsfasdf" << endl;
    return 0;
}

