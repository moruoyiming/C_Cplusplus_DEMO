#include <iostream>

using namespace std;
//Student.h  ͷ�ļ� ֻд���� ��дʵ��

class Student {
private:
    char *name;
    int age;

public:

    //�޲ι��캯��
    Student();

    Student(char *name);

    Student(char *name, int age);

    void setAge(int age);

    void setName(char *name);

    char *getName();

    int getAge();

    ~Student();

    // ���ǿ�������
    Student(const Student &student) ;
};
