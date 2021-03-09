#include <iostream>

using namespace std;
//Student.h  头文件 只写声明 不写实现

class Student {
private:
    char *name;
    int age;

public:
    void setAge(int age);

    void setName(char *name);

    char * getName();

    int getAge();
};
