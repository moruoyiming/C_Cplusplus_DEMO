#include <iostream>
#include "Person.h"

using namespace std;


Person getPerson(char *name) {
    Person person(name);

    cout << "getPerson������" << &person << endl;

    return person;
}


int main() {
//    �����������캯�� this : 0x65feb8
//    һ���������캯�� this : 0x65feb8
//    getPerson������0x65feb8
//    �������캯��ִ�� person=0x65feb8   this =  0x65feb0
//    main ������0x65feb8 person1 0x65feb0
//    ��������ִ�� this : 0x65feb4
//    ��������ִ�� this : 0x65febc

//    �����µ�ַ�����µ�ַ��main������person == �µ�ַ
//    =getPerson("������") ��ִ�п������캯�� ���ɵ�ַ�������µ�ַ
    Person person = getPerson("������");
    Person perons1 = person;
    cout << "main ������" << &person << " person1 " << &perons1 << endl;
    getchar();

// ִ������
// 1. main������ջ
// 2. getPerson();
// 3. getPerson()������ջ
// 4. Person person(name)
// 5. Person(char *name, int age)//�����������캯����ջ
// 6. Person(char *name)//һ���������캯����ջ
// 7. Person perons1 = person;
// 8. �������캯��ִ�� person=0x65feb8   this =  0x65feb0
// 9. main ������0x65feb8 person1 0x65feb0
// 10.  ��������ִ�� this : 0x65feb0
// 11.  ��������ִ�� this : 0x65feb8

//main ������ջ���ظ��ͷ��µ�ַ�ռ�ᱨ���漰���
//main ������ջ���ͷ�һ���µ�ַ�����ͷ�һ�ξɵ�ַҲ�ᱨ��
//�������캯�����ɵ�ַ�µ�ַ��ָ��ͬһ���ڴ�ռ�

// ���
    return 0;
}
