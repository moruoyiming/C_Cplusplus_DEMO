//TODO sort 算法包里的 排序
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main77() {

    vector<int> vectorVar1;
    vectorVar1.push_back(100);
    vectorVar1.push_back(20);
    vectorVar1.push_back(330);
    vectorVar1.push_back(420);

    sort(vectorVar1.begin(), vectorVar1.end(), less<int>());

    for (auto it = vectorVar1.begin(); it != vectorVar1.end(); it++) {
        cout << "item " << *it << endl;
    }

    return 0;
}
