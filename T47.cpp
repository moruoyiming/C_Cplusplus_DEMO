//C++多继承
//Java语言不允许多继承，多继承有歧义。

#include <iostream>

using namespace std;

class BaseActivity {
public:
    void onCreate() {
        cout << "BaseActivity onCreate" << endl;
    }

    void onStart() {
        cout << "BaseActivity onStart" << endl;
    }

    void show() {
        cout << "BaseActivity show" << endl;
    }
};

class BaseActivity2 {
public:
    void onCreate() {
        cout << "BaseActivity2 onCreate" << endl;
    }

    void onStart() {
        cout << "BaseActivity2 onStart" << endl;
    }


    void show() {
        cout << "BaseActivity2 show" << endl;
    }
};

class BaseActivity3 {
public:
    void onCreate() {
        cout << "BaseActivity3 onCreate" << endl;
    }

    void onStart() {
        cout << "BaseActivity3 onStart" << endl;
    }


    void show() {
        cout << "BaseActivity3 show" << endl;
    }

};

//子类继承三个父类
class MainActivity : public BaseActivity, public BaseActivity2, public BaseActivity3 {

public:
    void onCreate() {
        cout << "MainActivity onCreate" << endl;
    }

    void onStart() {
        cout << "MainActivity onStart" << endl;
    }

    void show(){
        cout << "MainActivity show" << endl;
    }

};

int main() {
    MainActivity mainActivity;
    mainActivity.onCreate();
    mainActivity.onStart();
    //函数歧义
//    mainActivity.show();
//   解决方案一: 明确指定父类::
    mainActivity.BaseActivity::show();
//   解决方案二: 子类覆写父类的show函数
    mainActivity.show();
//   解决方案三: 虚基类  虚继承的范畴 virtual修饰
//   virtual public BaseActivity
    return 0;
}