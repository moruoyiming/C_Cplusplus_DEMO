//TODO for_each 算法包中的遍历操作

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class __F {

public:
    void operator()(int __first) {
        cout << "自定义 一元谓词" << __first << endl;
    }
};

//for_each使用
int main72() {

    vector<int> vectorVar;
    vectorVar.insert(vectorVar.begin(), 1000);
    vectorVar.insert(vectorVar.begin(), 2000);
    vectorVar.insert(vectorVar.begin(), 3000);
    vectorVar.insert(vectorVar.begin(), 4000);
    vectorVar.insert(vectorVar.begin(), 5000);
    //for_each使用
    for_each(vectorVar.begin(), vectorVar.end(), __F());

    return 0;
}