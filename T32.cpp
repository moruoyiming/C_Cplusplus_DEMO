#include <iostream>
#include "Student.h"

using namespace std;


/**
 * ���캯�����
 * @return
 */
int main32() {

    //�������ٿռ�
    Student *student = new Student();
    Student *student2 = new Student("�в������캯��");
    student->setAge(232);
    student->getAge();
    cout << "student age:" << student->getAge() << endl;
    student2->getName();
    cout << "student2 name:" << student2->getName() << endl;
    //ջ�����ٿռ�
    Student *student3 = new Student("�в������캯��", 23);
    cout << "name:" << student3->getName() << ",age:" << student3->getAge() << endl;
    delete student3;//��������ִ��
    delete student2;
    delete student;
//    free(student3)  new ����˷�ʽ���淶
//  malloc ���캯����ִ��
    return 0;
};

