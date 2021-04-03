//TODO random_shuffle 算法包里的 随机打乱元素的顺序
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main78() {

    vector<int> vectorVar1;
    vectorVar1.push_back(100);
    vectorVar1.push_back(20);
    vectorVar1.push_back(330);
    vectorVar1.push_back(420);

    sort(vectorVar1.begin(), vectorVar1.end(), less<int>());
    random_shuffle(vectorVar1.begin(), vectorVar1.end());

    for (auto it = vectorVar1.begin(); it != vectorVar1.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}