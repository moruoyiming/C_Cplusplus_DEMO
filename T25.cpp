#include <iostream>
#include <string.h>

using namespace std;

/**
 * 指针取地址
 * @param number1
 * @param number2
 */
void numberChange(int *number1, int *number2) {
    cout << "main n1 地址:" << &number1 << "n2地址:" << &number2 << endl;
    int temp = 0;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void numberChange2(int &number1, int &number2) {
    cout << "main n1 地址:" << &number1 << "n2地址:" << &number2 << endl;
    //如果不采用引用 ，main 函数 和 本函数 内存地址不一样
    //如果采用引用，内存地址一样
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

void insertStudent(Student student) { //常量引用  const Student & student
    strcpy(student.name, "慕容复");
}

//void insertStudent2(const Student & student) { //常量引用  const Student & student
//    strcpy(student.name,"慕容复");
//}

int main25() {
    printf("降龙十八掌\n");
    //操作符重载
    cout << "擒龙功" << endl;

    // 常量

    int number1 = 10;
    int number2 = 20;
    cout << "main n1 地址:" << &number1 << "n2地址:" << &number2 << endl;
    numberChange(&number1, &number2);
    //    numberChange2(number1, number2);
    cout << "n1:" << number1 << "n2:" << number2 << endl;



    //引用

    int n1 = 999;
    int n2 = n1;//值传递  引用地址不同
    cout << "n1:" << &n1 << " n2:" << &n2 << endl;
    int n3 = 999;
    int &n4 = n3;//引用变化 ，引用地址相同
    int &n6 = n3;
    cout << "n3:" << &n3 << " n4:" << &n4 << endl;
    n6 = 9527;
    cout << "n3:" << &n3 << " n4:" << &n4 << " n6:" << &n6 << endl;


    //常量引用
    //    插入数据库 Student得信息给插入数据库
    Student student = {"乔峰", 23};
    insertStudent(student);

    // 非 0 即 true
    bool isOk = 0;

    //当方法出现多个满足条件的函数就会产生二义性
    add(100, 222);
    add(100, 222, 333);
    return 0;
}