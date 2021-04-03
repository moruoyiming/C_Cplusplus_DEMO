//TODO copy 算法包里的 copy容器1元素到容器2
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main79() {

    vector<int> vectorVar1;
    vectorVar1.push_back(100);
    vectorVar1.push_back(200);
    vectorVar1.push_back(300);
    vectorVar1.push_back(400);
    vectorVar1.push_back(500);
    vectorVar1.push_back(600);
    vectorVar1.push_back(700);

    vector<int> result;
    result.resize(vectorVar1.size());
    copy(vectorVar1.begin(), vectorVar1.end(), result.begin());
    for (auto it = result.begin(); it != result.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}