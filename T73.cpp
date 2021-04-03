//TODO transform 算法包中的变化操作
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class __unary_op {
public:
    int operator()(const int __first) {
        return __first + 9;
    }
};

//transform使用
int main73() {

    vector<int> vectorVar;
    vectorVar.insert(vectorVar.begin(), 1000);
    vectorVar.insert(vectorVar.begin(), 2000);
    vectorVar.insert(vectorVar.begin(), 3000);
    vectorVar.insert(vectorVar.begin(), 4000);
    vectorVar.insert(vectorVar.begin(), 5000);
    //第一种方式，类似于RxJava map 变化操作符
    transform(vectorVar.begin(), vectorVar.end(), vectorVar.begin(), __unary_op());
    //遍历操作
    for (vector<int>::iterator it = vectorVar.begin(); it != vectorVar.end(); it++) {
        cout << "第一种方式 item=" << *it << endl;
    }
    //第二种方式，类似于RxJava map 变化操作符
    vector<int> vectorVarResult;//vectorVarResult 大小空间
    vectorVarResult.resize(vectorVar.size());
    transform(vectorVar.begin(), vectorVar.end(), vectorVarResult.begin(), __unary_op());
    //遍历操作
    for (vector<int>::iterator it = vectorVarResult.begin(); it != vectorVarResult.end(); it++) {
        cout << "第二种方式 item=" << *it << endl;
    }

    return 0;
}