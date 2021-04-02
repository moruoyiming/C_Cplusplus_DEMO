#include <iostream>

#include <set>

using namespace std;

//1.C++的函数适配器
//2.C++算法包内置源码全面研究
//3.C++算法包全面使用
int main() {

    set<string, less<string>> setVar;
    setVar.insert("AAAAAAA");
    setVar.insert("BBBBBBB");
    setVar.insert("CCCCCCC");

    for (set<string>::iterator it = setVar.begin(); it != setVar.end(); it++) {
        cout << " item=" << *it << endl;
    }
    return 0;
}