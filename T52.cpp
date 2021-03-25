//全纯虚函数(Java版接口) 虚函数 纯虚函数 全纯虚函数
#include <iostream>

using namespace std;

class Programmer {
    int _id;
    string name;
    int age;
};

//此类所有的函数，都是纯虚函数，相当于Java的接口
class IProgrammer_DB {
public:
    virtual void insertProgrammer(Programmer programmer) = 0;

    virtual void updateProgrammer(int _id, Programmer programmer) = 0;

    virtual void deleteProgrammer(int _id) = 0;

    virtual Programmer queryProgrammer(Programmer programmer) = 0;

};

//实现类
class Programmer_DB : IProgrammer_DB {
public:
    void insertProgrammer(Programmer programmer) {
        cout << " insertProgrammer " << endl;
    }

    void updateProgrammer(int _id, Programmer programmer) {
        cout << " updateProgrammer " << endl;
    }

    void deleteProgrammer(int _id) {
        cout << " deleteProgrammer " << endl;
    }

    Programmer queryProgrammer(Programmer programmer) {
        cout << " queryProgrammer " << endl;
    }
};

int main52() {
    Programmer programmer;
    Programmer_DB programmerDb;
    programmerDb.insertProgrammer(programmer);
    return 0;
}