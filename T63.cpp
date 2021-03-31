#include <iostream>
#include <map>

using namespace std;

//2.multimap容器学习。
int main63() {
    //1.key可以重复 2.key重复的数据可以分组 3.key会排序  4.value不会排序
    multimap<int, string> multimapVar;
    multimapVar.insert(make_pair(10, "十个1"));
    multimapVar.insert(make_pair(10, "十个2"));
    multimapVar.insert(make_pair(10, "十个3"));

    multimapVar.insert(make_pair(12, "十二个1"));
    multimapVar.insert(make_pair(12, "十二个2"));
    multimapVar.insert(make_pair(12, "十二个3"));

    multimapVar.insert(make_pair(11, "十一个1"));
    multimapVar.insert(make_pair(11, "十一个2"));
    multimapVar.insert(make_pair(11, "十一个3"));


//    multimap<int,string>::iterator
    for (auto it = multimapVar.begin(); it != multimapVar.end(); it++) {
        cout << "item key=" << it->first << ",value=" << it->second << endl;
    }

    //核心功能是分组
    int result;
    cout << "请输入你要查询的key，为int类型：" << endl;
    cin >> result;
    multimap<int, string>::iterator iteratorVar = multimapVar.find(result);

    while (iteratorVar != multimapVar.end()) {
        cout << iteratorVar->first << " , value=" << iteratorVar->second << endl;
        iteratorVar++;

        if (iteratorVar->first != result) {
            break;//循环结束
        }

        if (iteratorVar == multimapVar.end()) {
            break;
        }
    }


    return 0;
}
