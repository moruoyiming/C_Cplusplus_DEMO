//TODO 四大类型转换 dynamic_cast 子父类多态运行期转换 必须要加虚函数
#include <iostream>

using namespace std;

class FuClasss {
public:
    //动态转换必须让父类成为虚函数
    virtual void show() {
        cout << "FuClass show" << endl;
    }
};

class ZiClasss : public FuClasss {
public:
    void show() {
        cout << "ZiClass show" << endl;
    }
};

int main95() {
    //动态类型转换的时候，在运行期由于fuClass是new 父类的，已成定局，就不能转换成子类。
//    FuClasss *fuClasss = new FuClasss();//转换失败
    FuClasss *fuClasss = new ZiClasss();//转换成功
    ZiClasss *ziClasss = dynamic_cast<ZiClasss *>(fuClasss);
    //动态转换是有返回值的  如果是null转换失败
    if (ziClasss) {
        cout << "恭喜 转换成功 ";
        ziClasss->show();
    } else {
        cout << "恭喜 转换失败" << endl;
    }


    return 0;
}
