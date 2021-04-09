//TODO 四大类型转换  const_cast;
#include <iostream>

using namespace std;


class Pesonss {
public:
    string name = "default";
};

int main3() {

    const Pesonss *p1 = new Pesonss();
//    p1->name = "Derry";  //报错：常量指针 不能修改值
    Pesonss *p2 = const_cast<Pesonss *>(p1);//转成非常量指针
    p2->name = "Derry";
    cout << "p2->name=" << p2->name << endl;
    return 0;
}