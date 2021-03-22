#include <iostream>

using namespace std;

class Derry {
private:
    int x, y;
public:
    //系统C++源码，大量使用此方式 : x(x), y(y)
    Derry(int x, int y) : x(x), y(y) {}

    //set get  函数
    void setX(int x) {
        this->x = x;
    }

    void setY(int y) {
        this->y = y;
    }

    int getX() {
        return this->x;
    }

    int getY() {
        return this->y;
    }
};

//   运算符重载定义
Derry operator+(Derry derry, Derry derry1) {
    int x = derry.getX() + derry1.getX();
    int y =derry.getY() + derry1.getY();
    Derry der(x,y);
    return der;
}

/**
 * 类外运算符重载
 * @return
 */
int main43() {
    //对象1 + 对象2  C++默认不支持  Java不支持 Kotlin也不支持

    // Kotlin/C++ 可以通过运算符重载 + 实现

    Derry derry(1000, 200);
    Derry derry1(515, 321);
//   运算符重载解决
    Derry derry2 = derry + derry1;
    cout << "derry2 x=" << derry2.getX() <<" y = "<<derry2.getY() << endl;
    return 0;
}