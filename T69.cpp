#include <iostream>

#include <set>
#include <algorithm>

using namespace std;

//预定义函数 C++内置函数
int main69() {
    //C++提供部分预定义函数
    plus<int> add_func;
    int r = add_func(1, 3);
    cout << r << endl;

    plus<string> add_func2;
    string r2 = add_func2("AAAAAA", "BBBBBB");
    cout << r2 << endl;
    return 0;
}