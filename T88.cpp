//TODO 智能指针有循环依赖的问题
#include <iostream>
#include <memory>

using namespace std;

class Fish2;

class Fish1 {
public:
    shared_ptr<Fish2> fish2; //Fish2 智能指针  有引用计数+1
public:
    ~Fish1() {
        cout << "Fish1 析构函数" << endl;
    }
};

class Fish2 {
public:
    shared_ptr<Fish1> fish1;//Fish1 智能指针  有引用计数+1
public:
    ~Fish2() {
        cout << "Fish2 析构函数" << endl;
    }
};

int main88() {
    Fish1 *fish1 = new Fish1();
    Fish2 *fish2 = new Fish2();
    shared_ptr<Fish1> sharedPtr1(fish1); //引用内部+1
    shared_ptr<Fish2> sharedPtr2(fish2);

    cout << "前 sharedPtr1 count=" << sharedPtr1.use_count() << endl;
    cout << "前 sharedPtr2 count=" << sharedPtr2.use_count() << endl;

    //给fish1的成员连梁fish2只能指针赋值
    fish1->fish2 = sharedPtr2;//引用内部+1
    fish2->fish1 = sharedPtr1;

    cout << "后 sharedPtr1 count=" << sharedPtr1.use_count() << endl;
    cout << "后 sharedPtr2 count=" << sharedPtr2.use_count() << endl;
    return 0;
}