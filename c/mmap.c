//#include<stdlib.h>
//#include<string.h>
//#include<sys/types.h>
//#include<sys/stat.h>
//#include<unistd.h>
//#include<fcntl.h>
//#include<sys/mman.h>
//
//#include<stdio.h>
//
//int main(){
//
//    int fd=-1;
//    int ret=-1;
//    void *addr=NULL;
//
//    //打开文件
//    fd=open("test",O_RDWR);
//    if(-1==fd){
//        perror("open");
//        return 1;
//    }
//    //映射到内存
//    addr=mmap(NULL,1024,PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);
//    if(addr==MAP_FAILED){
//        perror("mmap");
//        return 1;
//    }
//    printf("mmap success\n");
//    //关闭文件
//    close(fd);
//    //写文件
//    memcpy(addr,"abc123",6);
//    //断开映射
//    munmap(addr,1024);
//    return 0;
//}
