//C++多态 (虚函数)
// 静态多态【编译器确定调用哪个函数】
// 动态多态【程序在运行期间才能确定调用函数的真实对象】

// Java语言默认支持多态
// C++默认关闭多态，怎么开启多态？虚函数【在父类上给函数增加virtual关键字】

#include <iostream>

using namespace std;

class BaseActivity {
public:
    //虚函数 实现C++多态功能
    virtual void onStart() {
        cout << "BaseActivity onStart" << endl;
    }
};

class HomeActivity : public BaseActivity {
public:
    void onStart() {//重写父类函数
        cout << "HomeActivity onStart" << endl;
    }
};

class LoginActivity : public BaseActivity {
public:
    void onStart() {
        cout << "LoginActivity onStart" << endl;
    }
};

//在此函数体现多态，根据传入参数执行
void startToActivity(BaseActivity *baseActivity) {
    baseActivity->onStart();
}


void add1(int number1, int number2) {

}

void add1(float number1, float number2) {

}

int main50() {
    //TODO 第一版本
    HomeActivity *homeActivity = new HomeActivity();

    LoginActivity *loginActivity = new LoginActivity();

    startToActivity(homeActivity);

    startToActivity(loginActivity);

    if (homeActivity || loginActivity) {
        delete homeActivity;
        delete loginActivity;
    }
    cout << endl;
    //TODO 第二版本
    BaseActivity *activity1 = new HomeActivity();

    BaseActivity *activity2 = new LoginActivity();

    startToActivity(activity1);

    startToActivity(activity2);

    if (activity1 || activity2) {
        delete activity1;
        delete activity2;
    }

    cout << endl;
    //TODO 第三版本
    //在父类函数上增加virtual变为虚函数，实现C++多态功能
    //什么是多态？ 父类引用指向子类对象，同一个方法有不同实现，重写和重载


    //静态多态，方法重载
    add1(100, 200);
    add1(10.1f, 23.33f);

    return 0;
}