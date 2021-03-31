#include <iostream>
#include <map>
#include <set>//STL包
#include <algorithm>//算法包

using namespace std;

//自定义仿函数
class showActionObj {
public:
    void operator()(int content) {
        cout << "自定义仿函数" << content << endl;
    }
};

//简洁方式 (回调函数、一元谓词  不可以成为仿函数)
void showAction(int content){
    cout << "回调函数、一元谓词  不可以成为仿函数" << content << endl;
}



//谓词中戏
int main65() {
    set<int> setVar;
    setVar.insert(10);
    setVar.insert(20);
    setVar.insert(30);
    setVar.insert(40);
    setVar.insert(50);
    //仿函数
    for_each(setVar.begin(), setVar.end(), showActionObj());
    //一元谓词
    for_each(setVar.begin(), setVar.end(), showAction);
    return 0;
}