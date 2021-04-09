//TODO 智能指针有循环依赖的问题

//TODO weak_ptr使用
#include <iostream>
#include <memory>

using namespace std;

class Fish4;

class Fish3 {
public:
    weak_ptr<Fish4> fish4;//Fish4 智能指针  没有引用计数  无法+1
public:
    ~Fish3() {
        cout << "Fish3 析构函数" << endl;
    }
};

class Fish4 {
public:
    weak_ptr<Fish3> fish3;//Fish3 智能指针  没有引用计数  无法+1
public:
    ~Fish4() {
        cout << "Fish4 析构函数" << endl;
    }
};

int main89() {
    Fish3 *fish3 = new Fish3();
    Fish4 *fish4 = new Fish4();
    shared_ptr<Fish3> sharedPtr1(fish3); //引用内部+1
    shared_ptr<Fish4> sharedPtr2(fish4);

    cout << "前 sharedPtr1 count=" << sharedPtr1.use_count() << endl;
    cout << "前 sharedPtr2 count=" << sharedPtr2.use_count() << endl;

    //给fish1的成员连梁fish2只能指针赋值
    fish3->fish4 = sharedPtr2;//引用内部+1
    fish4->fish3 = sharedPtr1;

    cout << "后 sharedPtr1 count=" << sharedPtr1.use_count() << endl;
    cout << "后 sharedPtr2 count=" << sharedPtr2.use_count() << endl;
    return 0;
}