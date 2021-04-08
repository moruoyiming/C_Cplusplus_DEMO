//Pthreads线程 三种情况分析
#include <iostream>
#include <pthread.h>
#include <unistd.h>
// 第一种情况 main函数只要结束，不等异步线程。
// 第二种情况 开发过程中，不要让main函数睡眠的方式，等待异步线程。
// 第三种情况 main函数一直等待

//C++服务器开发，线程是非常要求高
//C++分离线程和非分离线程区别，应用场景？
//分离线程：各个线程都自己运行自己的，例如：main函数结束，全部结束，不会等待异步线程【多线程情况下场景】
//非分离线程：线程有协作的能力，例如：main函数线程会等待异步线程执行完成后，我在执行后面main函数的代码【协作，顺序执行】
using namespace std;

//自定义
void *runTask(void *pVoid) {
    int number = *static_cast<int *> (pVoid);
    cout << "异步线程执行" << number << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "run:" << i << endl;
        sleep(1);
    }
    return 0;
}

int main84() {
    int number = 999;
    //第一版
    pthread_t pthreadID;
    pthread_create(&pthreadID, 0, runTask, &number);
    //第二版 为了演示
//    sleep(3); //main 函数只等待 异步线程
    //第三版 异步线程在执行的过程中，我们的main函数 相当于阻塞在这里不动了，只有异步线程执行完成后，我才开始执行join后面的代码
    pthread_join(pthreadID, 0);
    cout << "main 函数弹栈" << number << endl;
    return 0;
}