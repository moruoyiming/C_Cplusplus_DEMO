//纯虚函数 （Java版抽象类）
#include <iostream>
//C++抽象类 相当于Java的抽象类

using namespace std;

//抽象类/纯虚函数 分为1.普通函数 2.抽象函数/纯虚函数
class BaseActivity {
private:
    void setContentView(string layoutResId) {
        cout << "XmlResourceParser解析布局文件信息 反射=" << layoutResId << endl;
    };
public:
    //1.普通函数
    void onCreate() {
        setContentView(getLayoutID());
        initView();
        initData();
        initListener();
    };

    //2.抽象函数/纯虚函数
//    virtual string getLayoutID();//虚函数
    virtual string getLayoutID() = 0;//纯虚函数

    virtual void initView() = 0;

    virtual void initData() = 0;

    virtual void initListener() = 0;
};

class MainActivity : public BaseActivity {


public:

    virtual string getLayoutID() {
        return "R.layout.activity_main";
    }

    void initView() {
        cout << "initView" << endl;
    };

    void initData() {
        cout << "initData" << endl;
    };

    void initListener() {
        cout << "initListener" << endl;
    }
};

int main51() {

    //抽象类 绝不能实例化
    MainActivity homeActivity;
    homeActivity.onCreate();

    return 0;
}

