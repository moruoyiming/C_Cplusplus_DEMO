#include <iostream>
#include <string.h>

using namespace std;

/**
 * ָ��ȡ��ַ
 * @param number1
 * @param number2
 */
void numberChange(int *number1, int *number2) {
    cout << "main n1 ��ַ:" << &number1 << "n2��ַ:" << &number2 << endl;
    int temp = 0;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void numberChange2(int &number1, int &number2) {
    cout << "main n1 ��ַ:" << &number1 << "n2��ַ:" << &number2 << endl;
    //������������� ��main ���� �� ������ �ڴ��ַ��һ��
    //����������ã��ڴ��ַһ��
    int temp = 0;
    temp = number1;
    number1 = number2;
    number2 = temp;
}

int add(int number1, int number2) {
    return number1 + number2;
}

int add(int number1, int number2, int number3) {
    return number1 + number2;
}

int add(int number1, int number2, int number3, int number4) {
    return number1 + number2;
}

//int add(int number1 = 100, int number2 = 200, int number3 = 300, int number4 = 400, int number5 = 500) {
//    return number1 + number2;
//}

typedef struct {
    char name[20];
    int age;

} Student;

void insertStudent(Student student) { //��������  const Student & student
    strcpy(student.name, "Ľ�ݸ�");
}

//void insertStudent2(const Student & student) { //��������  const Student & student
//    strcpy(student.name,"Ľ�ݸ�");
//}

int main() {
    printf("����ʮ����\n");
    //����������
    cout << "������" << endl;

    // ����

    int number1 = 10;
    int number2 = 20;
    cout << "main n1 ��ַ:" << &number1 << "n2��ַ:" << &number2 << endl;
    numberChange(&number1, &number2);
//    numberChange2(number1, number2);
    cout << "n1:" << number1 << "n2:" << number2 << endl;



    //����

    int n1 = 999;
    int n2 = n1;//ֵ����  ���õ�ַ��ͬ
    cout << "n1:" << &n1 << " n2:" << &n2 << endl;
    int n3 = 999;
    int &n4 = n3;//���ñ仯 �����õ�ַ��ͬ
    int &n6 = n3;
    cout << "n3:" << &n3 << " n4:" << &n4 << endl;
    n6 = 9527;
    cout << "n3:" << &n3 << " n4:" << &n4 << " n6:" << &n6 << endl;


    //��������
//    �������ݿ� Student����Ϣ���������ݿ�
    Student student = {"�Ƿ�", 23};
    insertStudent(student);

    // �� 0 �� true
    bool isOk = 0;

    //���������ֶ�����������ĺ����ͻ����������
    add(100, 222);
    add(100, 222, 333);
    return 0;
}