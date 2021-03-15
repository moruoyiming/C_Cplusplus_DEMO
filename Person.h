//
// Created by 菅瑞霖 on 2021/3/15.
//

#ifndef NDK_DEMO_PERSON_H
#define NDK_DEMO_PERSON_H

#endif //NDK_DEMO_PERSON_H

class Person {
public:
    int age;
    char *name;


    Person();

    Person(char *name);

    Person(char *name, int age);

    ~Person();

    //默认包含一个拷贝构造函数 隐式
    Person(const Person &person);
};
