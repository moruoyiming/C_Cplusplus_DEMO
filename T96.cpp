//TODO 四大类型转换 reinterpret_cast 强制类型转换 比 static_cast要强大，
// static_cast能做的事情reinterpret_cast强制类型转换都可以，同时附加新功能
#include <iostream>

using namespace std;


class DerryPlayer {

public:
    void show() {
        cout << "DerryPlayer" << endl;
    }

};

int main() {
//    reinterpret_cast<type>(expression)
    DerryPlayer *derryPlayer = new DerryPlayer();
//    long  player = static_cast<long>(derryPlayer);
//  将对象变成数值
    long player = reinterpret_cast<long>(derryPlayer);
//  将是指变成对象
    DerryPlayer *derryPlayer1 = reinterpret_cast<DerryPlayer *>(player);
    return 0;
}
