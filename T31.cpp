#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
//----------------------------------------------------
//自定义命名空间
namespace derry {
    int age = 33;
    char *name = "derry";

    void show() {
        cout << "name:" << name << ", age:" << age << endl;
    };
}
//声明在类外层，所有方法使用
using namespace derry;
//----------------------------------------------------
namespace derry2 {
    int age = 33;
    char *name = "derry";

    void show() {
        cout << "name:" << name << ", age:" << age << endl;
    };
}
using namespace derry2;
//----------------------------------------------------
//命名空间嵌套
namespace derry3 {
    void show3() {
        cout << "show3" << endl;
    }

    namespace derry4 {
        void show4() {
            cout << "show4" << endl;
        }
    }

}

using namespace derry3;
//----------------------------------------------------
/**
 * NDK重要函数
 * @return
 */
int main31() {
    std::cout << "九阳神功" << std::endl;
    //局部声明使用
//----------------------------------------------------
//    using namespace derry;
    int ageValue = derry::age;
    char *nameValue = derry::name;
    derry::show();


//----------------------------------------------------
    int ageValue2 = derry2::age;
    char *nameValue2 = derry2::name;
    derry2::show();

    derry3::show3();

    derry4::show4();

//    命名空间多层嵌套声明
//    using namespace derry3::derry4;

//----------------------------------------------------
    return 0;
}