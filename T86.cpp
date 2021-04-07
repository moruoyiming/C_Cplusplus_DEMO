//TODO C++ 条件变量+互斥锁 == Java版本的(notify 与 wait操作)

#include <iostream>
#include "sage_queue_tool.h"

using namespace std;

SafeQueueClass<int> sq;

void *getMethod(void *pVoid) {
    while (true) {
        printf("getMethod\n");
        int value;
        sq.get(value);
        printf("消费者get 得到的数据是%d\n", value);
        if (-1 == value) {
            printf("消费者 get 全部执行完毕");
            break;
        }
    }
    return 0;
}

void *setMethod(void *pVoid) {
    while (true) {
        printf("setMethod\n");
        printf("请输入要生成的信息：\n");
        int value;
        cin >> value;
        sq.add(value);
        if (-1 == value) {
            sq.add(value);
            printf("生产者set 全部执行完毕");
            break;
        }
    }
    return 0;
}


int main86() {
    pthread_t pthreadGet;
    pthread_create(&pthreadGet,0,getMethod,0);
    pthread_t pthreadSet;
    pthread_create(&pthreadSet,0,setMethod,0);
    pthread_join(pthreadGet,0);

    pthread_join(pthreadSet,0);
    return 0;
}
