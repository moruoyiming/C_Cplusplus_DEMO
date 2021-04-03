//TODO find find_if 算法包里的  变化操作
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class __pred {

public:
    int number;

    __pred(int number) : number(number){};

    bool operator()(const int value) {
        return number == value;
    }
};


int main74() {

    vector<int> vectorVar;
    vectorVar.insert(vectorVar.begin(), 1000);
    vectorVar.insert(vectorVar.begin(), 2000);
    vectorVar.insert(vectorVar.begin(), 3000);
    vectorVar.insert(vectorVar.begin(), 4000);
    vectorVar.insert(vectorVar.begin(), 5000);

    // find 没有自定义仿函数
//    auto it = find(vectorVar.begin(), vectorVar.end(), 4000);
//    if (it != vectorVar.end()) {
//        cout << "查找到了" << endl;
//    } else {
//        cout << "没有找到" << endl;
//    }

    //find_if 自定义仿函数
    auto it2 = find_if(vectorVar.begin(), vectorVar.end(), __pred(4000));
    if (it2 != vectorVar.end()) {
        cout << "查找到了" << endl;
    } else {
        cout << "没有找到" << endl;
    }

    return 0;
}
