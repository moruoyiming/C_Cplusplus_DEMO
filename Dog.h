//
// Created by 菅瑞霖 on 2021/3/22.
//

#ifndef DOG_H //
#define DOG_H //定义这个宏

class Dog {
private:
    int age;
    char *name;
public:
    //静态成员声明
    static int id;

    //构造函数的声明系列
    Dog();

    Dog(char *);

    Dog(char *, int);

    //析构函数
    ~Dog();

    //拷贝构造函数
    Dog(const Dog &dog);

    //普通函数
    int getAge();

    char *getName();

    void setAge(int age);

    void setName(char *name);

    //常量指针常量  只读
    void showPigInfo() const;

    //静态函数的声明
    static void changeAge(int age);

    //友元函数
    friend void changeName(Dog *dog, char* name);
};


#endif //DOG_H
