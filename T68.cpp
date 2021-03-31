#include <iostream>
#include <set>//set存入对象 崩溃，set会自动排序 ，对象没法排序，所以崩溃。解决方案：自定义仿函数解决
#include <vector>//存入对象

using namespace std;

class Man {
private:
    string name;
    int size;
public:
    Man(string name, int size) : name(name), size(size) {

    };

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return this->name;
    }

    Man(const Man &man) {
        this->name = man.name;//浅拷贝
        cout << "Man拷贝构造函数执行" << endl;
    }

    ~Man() {
        cout << "Man析构函数执行" << endl;
    }


};

//多元谓词仿函数回顾操练
//专业C++开发，知识补充：对象存入容器后，对象的生命周期
int main68() {

    //Java:把对象存入添加到集合
    //C++:调用拷贝构造函数，存进去的是另外一个新的对象
    vector<Man> vectorVar;

    //两次拷贝构造函数  三次析构函数
    Man derry("Derry", 12);// 一次析构
    vectorVar.insert(vectorVar.begin(), derry);//一次拷贝 一次析构
    derry.setName("Kevin");

    Man newMan = vectorVar.front();//一次拷贝  一次析构
    cout << "newMan="<<newMan.getName() << endl;
    return 0;
}