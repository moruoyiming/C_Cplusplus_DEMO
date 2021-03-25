//C++ 属性初始化方式
#include <iostream>

using namespace std;

class Plant{
protected:
    //注意：string 是std 命名空间里面的成员，C++ 源码是这种写法std::string
    //原理：string 其实就是对char*的封装
    string name;
};

int main() {
    return 0;
}