//虚继承 二义性
#include <iostream>

using namespace std;

//祖父类
class Object {
public:
    string info;
};

//父类
class Base1 : virtual public Object {

};

//父类
class Base2 : virtual public Object {

};

//子类

class Main1 : public Base1, public Base2 {

};

int main49() {
    Object object;//在栈区开辟空间，就会又一个this指针，假设指针是1000H 会有指向的能力
    Base1 base1;//在栈区开辟空间，就会又一个this指针，假设指针是2000H 会有指向的能力
    Base2 base2;//在栈区开辟空间，就会又一个this指针，假设指针是3000H 会有指向的能力
    Main1 main1;//在栈区开辟空间，就会又一个this指针，假设指针是4000H 会有指向的能力
    object.info = "AAAA";
    base1.info = "BBBB";
    base2.info = "CCCC";
    main1.info = "DDDD";

    cout << object.info << endl;
    cout << base1.info << endl;
    cout << base2.info << endl;
    cout << main1.info << endl;

    return 0;
}