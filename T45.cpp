//括号运算符   数组 系统源码把此括号[i]重载   系统重载后的样子*(arr+i)

#include <iostream>

using namespace std;

class ArrayList {
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
void printfArrayClass(ArrayList arrayList) {
    for (int i = 0; i < arrayList.getSize(); ++i) {

    }
}

int main() {

    ArrayList arrayList;
    arrayList.set(1, 123);


    return 0;
}
