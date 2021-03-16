#include <iostream>
#include "Person.h"

using namespace std;


Person getPerson(char *name) {
    Person person(name);

    cout << "getPerson函数：" << &person << endl;

    return person;
}


int main() {
//    二个参数构造函数 this : 0x65feb8
//    一个参数构造函数 this : 0x65feb8
//    getPerson函数：0x65feb8
//    拷贝构造函数执行 person=0x65feb8   this =  0x65feb0
//    main 函数：0x65feb8 person1 0x65feb0
//    析构函数执行 this : 0x65feb4
//    析构函数执行 this : 0x65febc

//    构建新地址，把新地址给main函数的person == 新地址
//    =getPerson("屠龙刀") 先执行拷贝构造函数 将旧地址拷贝给新地址
    Person person = getPerson("屠龙刀");
    Person perons1 = person;
    cout << "main 函数：" << &person << " person1 " << &perons1 << endl;
    getchar();

// 执行流程
// 1. main函数进栈
// 2. getPerson();
// 3. getPerson()函数进栈
// 4. Person person(name)
// 5. Person(char *name, int age)//两个参数构造函数进栈
// 6. Person(char *name)//一个参数构造函数进栈
// 7. Person perons1 = person;
// 8. 拷贝构造函数执行 person=0x65feb8   this =  0x65feb0
// 9. main 函数：0x65feb8 person1 0x65feb0
// 10.  析构函数执行 this : 0x65feb0
// 11.  析构函数执行 this : 0x65feb8

//main 函数弹栈，重复释放新地址空间会报错，涉及深拷贝
//main 函数弹栈，释放一次新地址，在释放一次旧地址也会报错
//拷贝构造函数，旧地址新地址，指向同一块内存空间

// 深拷贝
    return 0;
}
