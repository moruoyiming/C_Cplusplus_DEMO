//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <unistd.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//
////本功能实现的是 ps axu |grep bash
////通过调用 ps 和 grep命令 ,然后分别将他们的输出 和 输入的文件描述符改变. 从终端改入到管道中.
//int main22(int argc,char *argv[])
//{
//    int fd[2];
//    //创建管道
//    //fd[0]为读端  fd[1]为写端
//    int ret = pipe(fd);
//    if(ret == -1){
//        perror("pipe error");
//        exit(1);
//    }
//    pid_t pid = fork();
//    if(pid == -1){
//        perror("fork error");
//        exit(1);
//    }
//    //父进程 ps aux  子进程执行 后半段  grep "bash"
//    if(pid > 0){
//        //父进程写入管道, 关闭读端
//        close(fd[0]);
//        //文件描述符的重定向
//        //stdout_fileno指向到 管道的写端
//        dup2(fd[1], STDOUT_FILENO);
//        //执行ps aux
//        execlp("ps", "ps", "aux", NULL);
//        perror("execlp");
//        exit(1);
//    }else if(pid == 0){
//        //子进程
//        //子进程做的是读管道操作,关闭写端
//        close(fd[1]);
//        dup2(fd[0], STDIN_FILENO);
//        execlp("grep", "grep", "bash", "--color=auto", NULL);
//    }
//
//    printf("pipe[0]= %d\n", fd[0]);
//    printf("pipe[1]= %d\n", fd[1]);
//
//    close(fd[0]);
//    close(fd[1]);
//
//    return 0;
//}
