//模版函数 (Java版泛型) C++没有泛型，C++模版函数非常类似于Java的泛型
#include <iostream>

using namespace std;

//void addAction(int n1, int n2) {
//    cout << "addAction(int n1, int n2):" << n1 + n2 << endl;
//}
//
//void addAction(float n1, float n2) {
//    cout << "addAction(float n1, float n2):" << n1 + n2 << endl;
//}

//模版函数 == Java的泛型解决此问题
template<typename T>
void addAction(T n1, T n2) {
    cout << "addAction(T n1, T n2)：" << n1 + n2 << endl;
}

int main() {
    addAction(1, 2);
    addAction(23.2f, 23.12f);
    addAction(23, 123);
    return 0;
}