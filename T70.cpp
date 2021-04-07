#include <iostream>

#include <set>
#include <algorithm>

using namespace std;

//template<class Arg1, class Arg2, class Result>
//struct _LIBCPP_TEMPLATE_VIS binary_function2 {
//    typedef Arg1 first_argument_type;
//    typedef Arg2 second_argument_type;
//    typedef Result result_type;
//};

template<typename T>
struct plus_d {
    T operator()(const T &x, const T &y) {
        return x + y;
    }

};


//手写预定义函数
int main70() {
//
//    plus_d<int> add_func;
//    int r = add_func(1, 3);
//    cout << r << endl;
//
//    plus_d<string> add_func2;
//    string r2 = add_func2("AAAAAA", "BBBBBB");
//    cout << r2 << endl;
    return 0;
}
