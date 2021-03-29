#include <iostream>

using namespace std;

//set 内部：红黑树结构，会对存入的数据进行排序，不允许元素相同
#include <set>

//set容器，引出函数谓词
int main60() {
    set<int> setVar;
    //隐式代码 set<int,less<int>> setVar;

    //添加参数，不需要使用迭代器，也不需要指定位置
    setVar.insert(1111);
    setVar.insert(3333);
    setVar.insert(2222);
    setVar.insert(4444);

    //重复插入，并不会报错   std::pair<iterator,bool>
    pair<set<int, less<int>>::iterator, bool> res = setVar.insert(3222);

    //res.first 获取第一个元素
    //res.second 获取第二个元素
    bool insert_success = res.second;
    if (insert_success) {
        cout << "插入成功" << endl;
        for (res.first; res.first != setVar.end(); res.first++) {
            cout << " *res.first=" << *res.first << endl;
        }
    } else {
        cout << "插入失败" << endl;
    }

    //遍历
    for (auto it = setVar.begin(); it != setVar.end(); it++) {
        cout << " *it=" << *it<< endl;
    }

    return 0;
}
