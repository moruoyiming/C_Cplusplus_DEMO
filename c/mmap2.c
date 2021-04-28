//#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
//#include <fcntl.h>
//#include <sys/mman.h>
//#include <sys/wait.h>
//
//int var = 100;
//
//int main(void)
//{
//    int *p;
//    pid_t pid;
//
//    p = (int *)mmap(NULL, 400, PROT_READ|PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);//fd没有传-1即可
//    if(p == MAP_FAILED){		//注意:不是p == NULL
//        perror("mmap error");
//        exit(1);
//    }
//
//    pid = fork();				//创建子进程
//    if(pid == 0){
//        *p = 2000;
//        var = 1000;
//        printf("child, *p = %d, var = %d\n", *p, var);
//    } else {
//        sleep(1);
//        printf("parent, *p = %d, var = %d\n", *p, var);
//        wait(NULL);
//
//        int ret = munmap(p, 400);				//释放映射区
//        if (ret == -1) {
//            perror("munmap error");
//            exit(1);
//        }
//    }
//
//    return 0;
//}
