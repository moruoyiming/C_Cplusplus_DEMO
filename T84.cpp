//Pthreads线程 三种情况分析
#include <iostream>
#include <pthread.h>
#include <unistd.h>
// 第一种情况
// 第二种情况
// 第三种情况

//C++服务器开发，线程是非常要求高
//C++分离线程和非分离线程区别，应用场景？
//分离线程：各个线程都自己运行自己的，例如：main函数结束，全部结束，不会等待异步线程【多线程情况下场景】
//非分离线程：线程
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

int main() {
    int number = 999;
    pthread_t pthreadID;
    pthread_create(&pthreadID, 0, runTask, &number);
//    sleep(3); //main 函数
    pthread_join(pthreadID,0);
    cout << "main 函数弹栈" << number << endl;
    return 0;
}