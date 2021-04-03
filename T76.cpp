//TODO merge 算法包里的 合并两个容器
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main76() {
    vector<int> vectorVar1;
    vectorVar1.push_back(10);
    vectorVar1.push_back(20);
    vectorVar1.push_back(30);
    vectorVar1.push_back(40);

    vector<int> vectorVar2;
    vectorVar2.push_back(50);
    vectorVar2.push_back(60);
    vectorVar2.push_back(70);
    vectorVar2.push_back(80);

    vector<int> result;
    result.resize(vectorVar1.size() + vectorVar2.size());
    merge(vectorVar1.begin(), vectorVar1.end(), vectorVar2.begin(), vectorVar2.end(), result.begin());

    for (auto it = result.begin(); it != result.end(); it++) {
        cout << " merge " << *it << endl;
    }
    return 0;
}
