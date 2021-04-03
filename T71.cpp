//1.C++的函数适配器
//2.C++算法包内置源码全面研究
//3.C++算法包全面使用
#include <iostream>

#include <set>
#include <algorithm>

using namespace std;

//1.C++的函数适配器 第一版
int main71() {

    set<string, less<string>> setVar;
    setVar.insert("AAAAAAA");
    setVar.insert("BBBBBBB");
    setVar.insert("CCCCCCC");

    for (set<string>::iterator it = setVar.begin(); it != setVar.end(); it++) {
        cout << " item=" << *it << endl;
    }

    //equal_to 比较
    set<string, less<string>>::iterator it
            // 解决问题，equal_to 需要传入两个参数，使用函数适配器解决
//            = find_if(setVar.begin(), setVar.end(), equal_to<string>(""),"CCC");//第三个参数 自定义仿函数

//bind2nd 的作用
//使用函数适配器后，就能够将CCCCCCC 传递给equal_to中的第二个参数位置
//setVar.begin() setVar.end() 会把中间元素取出，放到equal_to中的第一个参数位置
            = find_if(setVar.begin(), setVar.end(), bind2nd(equal_to<string>(), "CCCCCCC"));
    if (it != setVar.end()) {
        cout << "查找到了" << endl;
    } else {
        cout << "未找到" << endl;
    }
    return 0;
}