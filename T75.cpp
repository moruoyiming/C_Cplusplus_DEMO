//TODO count count_if 算法包里的 统计元素的个数
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main75() {

    vector<int> vectorVar;
    vectorVar.push_back(11);
    vectorVar.push_back(22);
    vectorVar.push_back(11);
    vectorVar.push_back(33);
    vectorVar.push_back(22);
    vectorVar.push_back(11);
    vectorVar.push_back(11);
    vectorVar.push_back(22);
    // count使用 第一种方法
    int number = count(vectorVar.begin(), vectorVar.end(), 22);
    cout << "等于22的个数是:" << number << endl;

    //c++源码 函数适配器 第二种方法
    number = count_if(vectorVar.begin(), vectorVar.end(), bind2nd(less<int>(), 22));
    cout << "小于22的个数是:" << number << endl;

    number = count_if(vectorVar.begin(), vectorVar.end(), bind2nd(greater<int>(), 22));
    cout << "大于22的个数是:" << number << endl;

    number = count_if(vectorVar.begin(), vectorVar.end(), bind2nd(equal_to<int>(), 22));
    cout << "等于22的个数是:" << number << endl;

    return 0;
}
