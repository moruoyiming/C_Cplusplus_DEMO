#include <iostream>

using namespace std;
//Student.h  头文件 只写声明 不写实现

class Student {
private:
    char *name;
    int age;

public:

    //无参构造函数
    Student();

    Student(char *name);

    Student(char *name, int age);

    void setAge(int age);

    void setName(char *name);

    char *getName();

    int getAge();

    ~Student();

    // 构造函数拷贝
    Student(const Student &student) ;
};
