#include <iostream>
//1.vector向量学习
//2.stack栈学习
//3.queue队列学习
//4.优先级队列学习
//5.list的学习
//6.set来引出函数谓词
using namespace std;
//Java集合框架 相当于 C++ STL（iostream）  标准模板库  Standard Template Library
// C++设计思路  分包 STL包  算法包 迭代器包
// Java 面向对象思想

// C++ vector向量 容器(内部：封装动态大小的数组作为容器，能够存放任意动态数组)

#include <vector> //引入vector容器支持

int main55() {
    cout << "vector向量学习" << endl;
    vector<int> vector1;
    vector<int> vector2(10);//指定10的空间大小
    vector<int> vector3(10, 0);//有十个值，每个值都是0

    //模版函数 实现
    //插入数据 vector1.begin()
    vector1.insert(vector1.begin(), 3);
    vector1.insert(vector1.begin(), 30);
    vector1.insert(vector1.begin(), 300);
    cout << "vector1.front()=" << vector1.front() << endl;

    vector2.insert(vector2.begin(), 232);
    vector2.insert(vector2.begin(), 333);
    //第一个 front
    cout << "修改前vector2.front()=" << vector2.front() << endl;
    vector2.front() = 4444;
    cout << "修改后vector2.front()=" << vector2.front() << endl;

    //最后一个 back
    cout << "修改前vector2.back()=" << vector2.back() << endl;
    vector2.back() = 1111;
    cout << "修改后vector2.back()=" << vector2.back() << endl;

    //移除第一个元素(内部：通过迭代器的位置，进行移除)
    vector2.erase(vector2.begin());
    //循环迭代(默认从大到小输出)
    for (int i = 0; i < vector1.size(); ++i) {
        cout << "item=" << vector1[i] << endl;
    }

    //迭代器 当指针操作
    //vector<int>::iterator 可以用 auto 替换  Kotlin自带类型推导
    for (auto iteratorVar = vector1.begin(); iteratorVar != vector1.end(); iteratorVar++) {
        cout << "迭代器 item=" << *iteratorVar << endl;
    }
    return 0;
}
