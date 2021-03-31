#include <iostream>
#include <set>

using namespace std;
//c++ 源码 type name _Compare = std::less less内置的仿函数，根据内置仿函数去写自定义
//bool operator()(const _Tp& __x, const _Tp& __y) const     二元谓词

class CompareObjectClass {
public:
    bool operator()(const string &__x, const string &__y) const {//（const 指针 const）  常量指针常量 = 只读
        return __x > __y;
    };
};


//C++内部源码的仿函数
int main67() {
//    set<string, less<string>> setVar;
    set<string, CompareObjectClass> setVar;
    setVar.insert(setVar.begin(), "AAAAAA");
    setVar.insert(setVar.begin(), "BBBBBB");
    setVar.insert(setVar.begin(), "CCCCCC");


    for (set<string>::iterator it = setVar.begin(); it != setVar.end(); it++) {
        cout << "item is = " << *it << endl;
    }
    return 0;
};