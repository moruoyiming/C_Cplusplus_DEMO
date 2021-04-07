//1.引用进阶。
//2.C++自带Thread线程。
//3.Pthreads线程。
//4.Pthreads线程-分离线程与非分离线程概念。
//5.Pthreads多线程安全-互斥锁。
#include <iostream>

using namespace std;

int changeNumber(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

//TODO 引用 互换两个数【引用的本质是指针】
int changeNumber2(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main81() {
    int number1 = 100;
    int number2 = 200;
    changeNumber(&number1, &number2);

    changeNumber2(number1, number2);

    cout << number1 << number2 << endl;

    // 左值  右指  引用  引用传递 ，值传递区别
    return 0;
}