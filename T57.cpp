#include <iostream>

using namespace std;

#include <queue>//队列支持(内部：链表/数组)

//queue队列学习  先进先出
int main57() {
    cout << "queue队列学习" << endl;

    queue<int> queueVar;
    queueVar.push(1111);
    queueVar.push(2222);
    queueVar.push(3333);
    queueVar.push(4444);

    cout << "queueVar size=" << queueVar.size() << endl;
    cout << "queueVar first=" << queueVar.front() << endl;
    queueVar.front() = 3232;
    cout << "queueVar first=" << queueVar.front() << endl;
    //遍历
    while (!queueVar.empty()) {
        int top = queueVar.front();
        cout << "item = " << top << endl;
        queueVar.pop();//弹栈
    }
    return 0;
}
