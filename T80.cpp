//TODO replace 算法包里的 替换元素
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vectorVar1;
    vectorVar1.push_back(100);
    vectorVar1.push_back(200);
    vectorVar1.push_back(300);
    vectorVar1.push_back(400);

    replace(vectorVar1.begin(), vectorVar1.end(), 100, 200);

    for (auto it = vectorVar1.begin(); it != vectorVar1.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}