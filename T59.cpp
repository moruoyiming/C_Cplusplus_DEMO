#include <iostream>

using namespace std;

#include <list>

//list的学习 Java：ArrayList内部：采用Object[]数组，C++ list内部：采用链表
int main59() {
    list<int> lists;
    lists.push_front(1111);
    lists.push_front(2222);
    lists.push_front(3333);
    lists.push_front(4444);
    lists.push_back(5555);
    lists.insert(lists.begin(), 6666);
    lists.back() = 7777;
    //不能通过角标遍历/修改list<int>::iterator
    for (auto it = lists.begin(); it != lists.end(); it++) {
        cout << "item =" << *it << endl;
    }
    //删除
    lists.erase(lists.begin());
    return 0;
}