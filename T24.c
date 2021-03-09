#include <stdio.h>
#include <stdlib.h>
/**
 * 读取文件的大小
 * @return
 */
int main24() {
    char *filename = "/Users/jian/Documents/development/test.txt";
    FILE *file = fopen(filename, "rb");
    if (!file) {
        printf("文件打开失败");
        exit(0);
    }
    //给file指针赋值，挪动的记录信息
    fseek(file, 0, SEEK_END);
    //读取刚刚给file赋值的信息
    long file_size = ftell(file);
    printf("%s文件的字节大小是:%d \n",filename,file_size);
    fclose(file);
    return 0;
}