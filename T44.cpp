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

    //   运算符重载定义
//    Derry operator+(Derry derry1) {
//        int x = this->getX() + derry1.getX();
//        int y = this->getY() + derry1.getY();
//        Derry der(x, y);
//        return der;
//    }

//    运算符重载定义  常量引用不允许修改，只读模式
//    const 关键字的解释
//    &性能的提高，如果没有& 运行 + 会构建新的副本，浪费性能
//    如果加了&  引用是给这块内存空间取一个别名而已
    Derry operator+(const Derry &derry1) {
        int x = this->getX() + derry1.x;
        int y = this->getY() + derry1.y;
        Derry der(x, y);
        return der;
    }

    //运算符- 重载
    Derry operator-(const Derry &derry1) {
        int x = this->getX() - derry1.x;
        int y = this->getY() - derry1.y;
        Derry der(x, y);
        return der;
    }

    //++对象 运算符 重载
    void operator++() { //++对象
        this->x = this->x + 1;
        this->y = this->y + 1;
    }

    //对象++ 运算符 重载
    void operator++(int) { //对象++
        this->x = this->x + 1;
        this->y = this->y + 1;
    }

    //istream 输入系统的
    //ostream 输出系统的
    friend void operator<<(ostream &_START, Derry derry) {
        _START << "start output" << derry.x << "!" << derry.y << " end " << endl;
    }


    friend ostream & operator>>(ostream &_START, Derry derry) {
        _START << "start2 output" << derry.x << "!" << derry.y << " end " << endl;
        return _START;
    }
};


/**
 * 类里运算符重载
 * @return
 */
int main() {
    //对象1 + 对象2  C++默认不支持  Java不支持 Kotlin也不支持

    // Kotlin/C++ 可以通过运算符重载 + 实现

    Derry derry(1000, 200);
    Derry derry1(515, 321);
//   运算符重载解决
    Derry derry2 = derry + derry1;
    cout << "derry  x=" << derry2.getX() << " y = " << derry2.getY() << endl;

    Derry derry3 = derry - derry1;
    cout << "derry3  x=" << derry3.getX() << " y = " << derry3.getY() << endl;

    Derry derry4(1, 2);
    derry4++;
    ++derry4;


    cout << endl;//换行
    cout << derry4;

    return 0;
}