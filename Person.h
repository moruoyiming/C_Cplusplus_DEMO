//
// Created by ������ on 2021/3/15.
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

    //Ĭ�ϰ���һ���������캯�� ��ʽ
    Person(const Person &person);
};
