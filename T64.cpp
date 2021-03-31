#include <iostream>
#include <map>
#include <set>//STL包
#include <algorithm>//算法包

using namespace std;

//谓词前戏
//谓词====仿函数
//第一版：为什么叫仿函数 （空谓词，一元谓词，二元谓词，三元谓词）
class ComPareObject {
public:
    void operator()() {//重写了括号运算符
        cout << "仿函数" << endl;

    }
    void operator()(int age,string name) {//重写了括号运算符
        cout << "二元谓词" << endl;

    }
};

//普通函数
void func2() {
    cout << "普通函数" << endl;
}

int main64() {

    ComPareObject comPareObject;
    comPareObject();
    comPareObject(232,"DSfasdf");
    func2();
    return 0;
}
