//生产者 消费者 工具类  播放器有用

#ifndef NDK_DEMO_SAGE_QUEUE_TOO_H
#define NDK_DEMO_SAGE_QUEUE_TOO_H

#endif //NDK_DEMO_SAGE_QUEUE_TOO_H

#pragma once//防止重复写include的控制

#include <iostream>
#include <string>
#include <queue>

using namespace std;

//定义模板函数

template<typename T>

class SafeQueueClass {
private:
    queue<T> queue;//定义队列
    pthread_mutex_t mutex;//定义互斥锁（不允许有野指针）
    pthread_cond_t cond;//条件变量，为了实现等待/读取等功能（不允许有野指针）
public:
    SafeQueueClass() {
        //初始化 互斥锁
        pthread_mutex_init(&mutex,0);
        //初始化条件变量
        pthread_cond_init(&cond,0);
    }

    ~SafeQueueClass() {
        //回收 互斥锁 条件变量
        pthread_mutex_destroy(&mutex);
        pthread_cond_destroy(&cond);
    }

    //TODO 加入
    void add(T t) {
        pthread_mutex_lock(&mutex);
        queue.push(t);
//        pthread_cond_signal(&cond);//Java notify
        pthread_cond_broadcast(&cond);//notifyAll
        pthread_mutex_unlock(&mutex);
    }

    void get(T &t) {
        pthread_mutex_lock(&mutex);
        while (queue.empty()) {
            cout << "队列为空，等待" << endl;
            pthread_cond_wait(&cond, &mutex);//相当于 Java的wait 等待
        }
        //唤醒
        t = queue.front();
        queue.pop();
        pthread_mutex_unlock(&mutex);
    }

};