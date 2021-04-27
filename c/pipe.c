#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>


int main222(int argc, char *argv[]) {
    int pipefd[2];
    char buf[100];
    int ret = 0;
    pid_t fp;

    ret = pipe(pipefd);
    if(0 != ret)
    {
        perror("pipe"),exit(0);
    }
    fp = fork();
    if(fp < 0)
    {
        perror("fork"),exit(0);
    }
    else if(0 < fp)
    {
        printf("this is in the father process,write a string to the pipe...\n");
        char str[] = "hi,my child,i am your father";
        write(pipefd[1],str,sizeof(str));
        sleep(1);
        close(pipefd[0]);
        close(pipefd[1]);
    }
    else
    {
        printf("this is in the child process,read a string from the pipe...\n");
        read(pipefd[0],buf,sizeof(buf));
        printf("read : %s\n",buf);
        sleep(1);
        close(pipefd[0]);
        close(pipefd[1]);
    }
    waitpid(fp,NULL,0);
    return 0;
}