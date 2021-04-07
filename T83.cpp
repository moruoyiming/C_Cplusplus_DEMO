//Pthreads线程

#include <iostream>
#include <pthread.h>

using namespace std;

//自定义
void *customPthreadTask(void *pVoid) {
    int number = *static_cast<int *> (pVoid);
    cout << "异步线程执行" << number << endl;
    return 0;
}

int main83() {
    int number = 9527;
    pthread_t pthreadID;//线程ID，每个线程 都需要有的线程ID
    /**
     * pthread_t *th 线程ID
     * const pthread_attr_t *attr 线程属性
     * void *(* func)(void *) 函数指针的规则
     * void *arg 给函数指针传递的内容， void*可以传递任何内容
     */
    pthread_create(&pthreadID, 0, customPthreadTask, &number);
    cout << "main函数弹栈" << number << endl;
    return 0;
}