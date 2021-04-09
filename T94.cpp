//TODO 四大类型转换  static_cast;  指针相关的操作 可以用static_cast 编译期
#include <iostream>

using namespace std;

class FuClass {
public:
    void show() {
        cout << "FuClass show" << endl;
    }
};

class ZiClass :public FuClass {
public:
    void show() {
        cout << "ZiClass show" << endl;
    }
};

int main94() {
    int n = 88;
    void *pVoid = &n;
    int *number = static_cast<int *>(pVoid);
    cout << "number=" << *number << endl;

    FuClass *fuClass = new FuClass();
    fuClass->show();
    //static_cast 转换 看左边
    ZiClass *ziClass = static_cast<ZiClass *>(fuClass);
    ziClass->show();

    delete fuClass;//回收规则： 一定是谁new了，就调用delete谁。

    return 0;
}