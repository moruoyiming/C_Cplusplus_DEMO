#include <iostream>
#include <map>
#include <set>//STL包
#include <algorithm>

using namespace std;

//自定义仿函数
class showActionObjs {
public:
    int count = 0;

    void _count() {
        cout << "本次输出次数是：" << this->count << endl;
    }

    void operator()(int content) {
        cout << "仿函数" << content << "count=" << count << endl;
        count++;
    }
};

int main66() {
    set<int> setVar;
    setVar.insert(10);
    setVar.insert(20);
    setVar.insert(30);
    setVar.insert(40);
    setVar.insert(50);
    //仿函数
    showActionObjs s;
    s = for_each(setVar.begin(), setVar.end(), s);
    s._count();
    return 0;
}