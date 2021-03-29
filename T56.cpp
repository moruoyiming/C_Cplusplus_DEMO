#include <iostream>

using namespace std;

#include <stack>

//stack栈学习  后进先出，先进后出
int main56() {
    //压栈 (注意：stack无法指定哪个位置去压栈)
    stack<int> stackVar;
    stackVar.push(1111);
    stackVar.push(2222);
    stackVar.push(3333);
    stackVar.push(4444);
    cout << "stackVar size=" << stackVar.size() << endl;
    //遍历 内部没有重载[]运算符
    //迭代器不可以


    //慎用，元素会被清空。因为有弹栈操作
    while (!stackVar.empty()) {
        int top = stackVar.top();
        cout << "item = " << top << endl;
        stackVar.pop();//弹栈
    }


    return 0;
}
