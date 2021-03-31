#include <iostream>
#include <map>

using namespace std;

//1.map容器学习。
//2.multimap容器学习。
//3.C++内部源码的仿函数。
//4.多元谓词仿函数回顾操练。
int main62() {
    cout << "1.map容器学习" << endl;
    //注意：map会对key进行排序 默认key不能重复
    map<int, string> mapVar;
    //添加数据
    //第一种方式
    mapVar.insert(pair<int, string>(1, "一"));
    //第二种方式
    mapVar.insert(make_pair(2, "贰"));
    //第三种方式
    mapVar.insert(map<int, string>::value_type(3, "叁"));

    //上面三种方式key不能重复
    //思考：既然会对key进行排序，那么key是不能重复的(会插入失败)

    //第四种方式  mapVar[key] = Value;
    mapVar[4] = "四";
    mapVar[4] = "肆";//第四种方式覆盖/替换(常用方式)
    //迭代器遍历map<int, string>::iterator
    for (auto it = mapVar.begin(); it != mapVar.end(); it++) {
        cout << " item key=" << it->first << ",value=" << it->second.c_str() << endl;
    }

    // 如何判断插入成功失败
    std::pair<map<int, string>::iterator, bool> result = mapVar.insert(map<int, string>::value_type(3, "叁"));
    if (result.second) {
        cout << "插入成功" << endl;
    } else {
        cout << "插入失败" << endl;
    }
    for (result.first == mapVar.begin(); result.first != mapVar.end(); result.first++) {
        cout << " item key=" << result.first->first << ",value=" << result.first->second << endl;
    }

    // 删除 、查找、操作
    map<int, string>::iterator findResult = mapVar.find(3);
    if (findResult != mapVar.end()) {
        cout << "find item key=" << findResult->first << " , value=" << findResult->second.c_str() << endl;
    } else {
        cout << "no find item " << endl;
    }

    return 0;
}

