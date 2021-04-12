//TODO 预处理器不是编译器，预处理器主要完成文本替换的操作，预处理器都是用#xxx的写法，并不是注释；
#include <iostream>
#include "T98.h"
using namespace std;
// #include 导入头文件
// #if  if判断操作
// #elif else if
// #else else
// #endif 结束if

// #define 定义一个宏
// #ifdef 如果定义了这个宏
// #ifndef 如果没定义这个宏
// #undef 取消宏定义
int main() {


//#if 1
//    cout<<"真"<<endl;
//#elif
//    cout <<"假"<<endl;
//#endif
//    cout <<"结束if"<<endl;

#ifdef DEBUG
    cout<<"测试化境"<<endl;
#else RELEASE
    cout<<"正式化境"<<endl;
#endif


    return 0;
};