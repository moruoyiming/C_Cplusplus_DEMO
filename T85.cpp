//TODO C++互斥锁 = JAVA版本(synchronized) 多线程操作的安全 持有内置锁
#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <queue>

using namespace std;


queue<int> queueData;//定义一个全局的队列 用于存储/获取

pthread_mutex_t mutex;//定义一个互斥锁，注意：此互斥锁，不能有野指针

void *task(void *pVoid) {
    pthread_mutex_lock(&mutex);//锁住
    //此区域内 代码安全
    cout << "异步线程-当前线程的 ID=" << *static_cast<int *>(pVoid) << endl;
    if (!queueData.empty()) {
        printf("异步线程-获取队列的数据%d\n", queueData.front());
        queueData.pop();//把数据弹出去，删除的意思
    } else {
        printf("异步线程-队列中没有数据\n");
    }
    sleep(1);
    pthread_mutex_unlock(&mutex);//解锁
    return 0;
}

int main85() {
    //初始化 互斥锁
    pthread_mutex_init(&mutex, NULL);
    //给队列手动增加数据
    for (int i = 10001; i < 10026; ++i) {
        queueData.push(i);
    }

    //一次性定义十个线程
    pthread_t pthreadIdArray[10];
    for (int i = 0; i < 10; i++) {
        pthread_create(&pthreadIdArray[i], 0, task, &i);
    }
    sleep(10);
    //销毁 互斥锁
    pthread_mutex_destroy(&mutex);
    return 0;
}