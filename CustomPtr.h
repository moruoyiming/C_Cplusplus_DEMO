//
// Created by 菅瑞霖 on 2021/4/9.
//

#ifndef NDK_DEMO_CUSTOMPTR_H
#define NDK_DEMO_CUSTOMPTR_H

#pragma once

#include <iostream>

using namespace std;

//TODO 手写智能指针
template<typename T>
class Ptr {
private:
    T *object;//用于智能指针指向管理的对象
    int *count;//引用计数
public:
    Ptr() {
        count = new int(1);
        object = 0;
    }

    Ptr(T *t) : object(t) {
        count = new int(1);
    }

    //析构函数
    ~Ptr() {
        //引用计数减1，为0表示可以释放object了
        if (--(*count) == 0) {
            if (object) {
                delete object;
            }
            //归零
            delete count;
            object = 0;
            count = 0;
        }
    }

    //拷贝构造函数
    Ptr(const Ptr<T> &ptr) {
        cout << "拷贝构造函数" << endl;

        // 这个ptr 相当于 shared_ptr<Cat> sharedPtr2 = sharedPtr; 中的sharedPtr
        ++(*ptr.count);

        object = ptr.object;
        count = ptr.count;
    }

    // 自定义=号运算符重载
    Ptr<T> &operator=(const Ptr<T> &ptr) {
        cout << "=号运算符重载" << endl;

        ++(*ptr.count);

        if (--(*count) == 0) {
            if (object) {
                delete object;
            }
            //归零
            delete count;
            object = 0;
        }

        object = ptr.object;
        count = ptr.count;
        return *this;//运算符重载的返回
    }

    int use_count() {
        return *this->count;
    }


};


#endif //NDK_DEMO_CUSTOMPTR_H
