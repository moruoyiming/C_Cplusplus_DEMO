#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>


int main() {
    int i = 0;
    pid_t pid;

    for (i = 0; i < 3; i++) {
        pid = fork();
        //这里给break掉 是为了子进程重复创建子进程
        if (pid == 0) {
            break;
        }
    }
    //第一个子进程
    if (i == 0) {
        printf("第一个子进程\n");
    }

    //第二个子进程
    if (i == 1) {
        printf("第二个子进程\n");
    }

    //第三个子进程
    if (i == 2) {
        printf("第三个子进程\n");
    }

    //父进程
    if (i == 3) {
    }

    return 0;
}

