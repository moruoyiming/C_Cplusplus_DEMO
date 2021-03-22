//
// Created by jian on 2021/3/22.
//

#ifndef NDK_DEMO_PIG_H
#define NDK_DEMO_PIG_H

#endif //NDK_DEMO_PIG_H

class Pig {
public:
    char *name;
    int age;

public:

    //构造函数
    Pig(char *name, int age);

    //析构函数
    ~Pig();

    // 构造函数拷贝
    Pig(const Pig &pig);
};