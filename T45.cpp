//括号运算符   数组 系统源码把此括号[i]重载   系统重载后的样子*(arr+i)

#include <iostream>

using namespace std;

class ArrayClass {
private:
    int size = 0;
    int *arrayValue;
public:
    void set(int index, int value) {
        arrayValue[index] = value;
        size += 1;
    }

    int getSize() {
        return this->size;
    }

    //运算符重载[index]
    int operator[](int index) {
        return this->arrayValue[index];
    }

};

//输出容器的内容
void printfArrayClass(ArrayClass arrayList) {
    cout << "printf value "<<endl;
    for (int i = 0; i < arrayList.getSize(); ++i) {
        cout << "printf value " << arrayList[i] <<endl;
    }
}

int main45() {
    cout << "printf value start"<<endl;
    ArrayClass arrayList;
    arrayList.set(0, 1000);
    arrayList.set(1, 6000);
    arrayList.set(2, 2000);
    arrayList.set(3, 3000);
    arrayList.set(4, 4000);
    cout << "printf value end"<<endl;
    printfArrayClass(arrayList);
    return 0;
}
