#include "Student.h"

//ʵ�ַ���
void Student::setAge(int age) {
    this->age = age;
}

void Student::setName(char *name) {
    //C++ ����ָ�����һ��ָ��
    //����һ��ָ��ó�Ա
    this->name = name;
}

char *Student::getName() {
    return name;
}

int Student::getAge() {
    return age;
}


//�޲ι��캯��
Student::Student() {
    cout << "�޲������캯��" << endl;
}

Student::Student(char *name) {
    cout << "һ���������캯��" << endl;
    this->name = name;
}

Student::Student(char *name, int age) {
    cout << "�����������캯��" << endl;
    this->name = name;
}

//�������� Student�������������  Student������գ����ͷŲ����� JAVA finalize   KT ��Ҫ���⼯�ɰ����࣬��������
Student::~Student() {
    cout << "��������ִ��" << endl;
    //�ͷ� �������ٵó�Ա   -> NULL ��������ָ��
}


// ���ǿ�������
Student::Student(const Student &student) {//�������ã�ֻ�����������޸�
    cout << " �������캯�� " << endl;
    this->name = student.name;
    this->age = student.age;

}