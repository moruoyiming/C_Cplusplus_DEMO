//回调   模拟登录接口
#include <iostream>

using namespace std;

//登录成功的bean
class SuccessBean {
public:
    string username;
    string userpwd;

    SuccessBean(string username, string userpwd) : username(username), userpwd(userpwd) {

    }

};

//登录响应的接口  成功/错误
class ILoginResponse {
public:
    //登录成功
    virtual void loginSuccess(int code, string message, SuccessBean successBean) = 0;

    //登录失败
    virtual void loginFailed(int code, string message) = 0;
};

//登录响应接口实现
class ILoginResponseImpl : public ILoginResponse {
public:
    //登录成功
    void loginSuccess(int code, string message, SuccessBean successBean) {
        cout << "loginSuccess code=" << code << "message=" << message << ",username=" << successBean.username
             << ",pwd=" << successBean.userpwd << endl;
    };

    //登录失败
    void loginFailed(int code, string message) {
        cout << "loginFailed code=" << code << ",message=" << message << endl;
    };
};

//登录API动作
void loginAction(string username, string userpwd, ILoginResponse &loginResponse) {
    if (username.empty() || userpwd.empty()) {
        cout << "用户名或密码为空 " << endl;
        return;
    }

    if ("Derry" == username && "123" == userpwd) {
        loginResponse.loginSuccess(200, "登录成功", SuccessBean(username, userpwd));
    } else {
        loginResponse.loginFailed(400, "登录失败");
    }
}


int main53() {
    //抽象类型IloginResponse的对象不能被实例化
    //1.它不是Java的接口，C++也没有接口，它只是像接口而已
    //2.它也不是抽象类，C++也没有抽象类，他只是像抽象类而已
    //3.它是纯虚函数的类，此类决定不准你实例化，无论堆区还是栈区
    string username;
    cout << "请输入用户名:" << endl;
    cin >> username;

    string pwd;
    cout << "请输入密码:" << endl;
    cin >> pwd;

    ILoginResponseImpl loginResponse;
    loginAction(username, pwd, loginResponse);
    return 0;
}