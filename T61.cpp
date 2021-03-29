#include <iostream>
//set 内部：红黑树结构，会对存入的数据进行排序，不允许元素相同
#include <set>

using namespace std;

class Mat {
public:
    string name;
    int age;

    Mat(string name, int age) : name(name), age(age) {

    }
};

//C++源码，没有对象比较功能【系统源码谓词，做不到对象比较功能】
//      operator()(const _Tp& __x, const _Tp& __y) const { return __x < __y; }
//set容器，引出函数谓词  谓词【涉及对象的排序】

//【自定义谓词】

bool doCompareAction(const Mat &__x, const Mat &__y) {
    return __x.age < __y.age;
};

struct doCompareAction2 {
    bool operator()(const Mat &__x, const Mat &__y) const {
        return __x.age > __y.age;
    }
};

int main() {
//    set<Mat> setVar;
//    set<Mat,less<Mat>> setVar;
    set<Mat, doCompareAction2> setVar;
    Mat m1("Jin", 12);
    Mat m2("Rui", 22);
    Mat m3("Lin", 32);

    setVar.insert(m1);
    setVar.insert(m2);
    setVar.insert(m3);
//    set<MathL>::iterator
//    name string  c__str() ----> char *
    for (auto it = setVar.begin(); it != setVar.end(); it++) {
        cout << "item = " << it->name.c_str() << endl;
    }


    return 0;
}