#include <iostream>

using namespace std;

#include <queue>

//优先级队列学习
//priority_queue<int> 内部对vector有一定封装
int main58() {

    //优先级队列，默认做了 从大到小排列顺序
    cout << "优先级队列学习" << endl;
    priority_queue<int, vector<int>, greater<int>> priorityQueue;
    //隐式代码  priority_queue<int,vector<int>,less<int>> priorityQueue;
    //vector<int>
    //less<int> return __x<__y 上一个元素和当前元素比较，返回ture false  从大到小
    //greater<int> return __x>__y 上一个元素和当前元素比较，返回ture false  从小到大
    priorityQueue.push(1111);
    priorityQueue.push(3333);
    priorityQueue.push(2222);
    priorityQueue.push(4444);
    cout << "first=" << priorityQueue.top() << endl;

    //遍历循环
    while (!priorityQueue.empty()) {
        cout << "item=" << priorityQueue.top() << endl;
        priorityQueue.pop();
    }

    return 0;
}
