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
     * int * const 指针常量【地址不能修改，地址对应的值能修改】
     * const int * 常量指针【地址能修改，地址对应的值不能修改】
     */
    void change(){
        this->age=78;
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

