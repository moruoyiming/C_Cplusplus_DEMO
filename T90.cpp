//TODO unique_ptr使用   智能指针   独占式智能指针
#include <iostream>
#include <memory>

using namespace std;

class Fish5 {
};

int main90() {
    Fish5 *fish5 = new Fish5();
    Fish5 *fish6 = new Fish5();
    unique_ptr<Fish5> uniquePtr(fish5);
    //严格禁止
//    unique_ptr<Fish5> uniquePtr2 = uniquePtr; unique不允许，因为式独占的
    return 0;
}
