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

#define VALUE_I 9527
#define VALUE_S "AAA"
#define VALUE_F 545.3f

//宏函数
#define SHOW(V) cout<< V <<endl;//参数列表无需类型 返回值 看不到
#define ADD(n1, n2) n1+n2;
#define CHEN(n1, n2) n1*n2;

//复杂宏函数
#define LOGIN(V)
//if(V==1){
//cout <<"满足"<<endl
//}else{
//cout <<"满足"<<endl
//}//这个是结尾不用加\

//宏函数
// 优点
//1. 文本替换，不会造成函数的调用开销(开辟栈空间，行参压栈，函数弹栈释放)
// 缺点
//1. 会导致代码体积增大

int main98() {


//#if 1
//    cout<<"真"<<endl;
//#elif
//    cout <<"假"<<endl;
//#endif
//    cout <<"结束if"<<endl;

//#ifdef DEBUG
//    cout<<"测试化境"<<endl;
//#else RELEASE
//    cout<<"正式化境"<<endl;
//#endif


    int i = VALUE_I;   //预处理阶段，宏会直接完成文本替换工作，替换后的样子：int i =9527；
    string s = VALUE_S;
    float f = VALUE_F;

    SHOW(8);
    SHOW(8.8f);
    int r = ADD(23, 32);
    cout << r << endl;

    LOGIN(0);
    return 0;
};