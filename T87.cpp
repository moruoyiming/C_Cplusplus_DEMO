//1.智能指针的各种使用。
//2.手写智能指针。
//3.四种类型转换。
//4.nullptr。
#include <iostream>
#include <memory>//只能指针的头文件引用

using namespace std;

class Fish{
public:
    ~Fish(){
        cout<<"Fish 析构函数" << endl;
    }
};
// 智能指针：
int main87(){
    Fish *fish =  new Fish();//堆区开辟
//    delete fish;
//  智能指针帮助释放堆区开辟的内存
    shared_ptr<Fish> sharedPtr(fish);//栈区开辟sharedPtr +1 引用计数
    return 0;
}// 原理：栈区开辟sharedPtr +1 引用计数。当函数弹栈，会释放所有的栈成员 sharedPtr 析构函数-1 当等于0时直接释放fish。