//threads线程

#include <iostream>
#include <thread> //C++ 11 后出现自带Thread
#include <unistd.h>

using namespace std;

void run(int number){
    for (int i = 0; i < 10; ++i) {
        cout <<"number="<<number << endl;
        sleep(1);
    }
}

//vs 没有pthread
//mingw 没有pthread
int main82(){
//    thread thread1(run,100);
//    sleep(3);
    thread thread2(run,100);
    thread2.join();
    return 0;
}