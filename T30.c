#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main30() {
    char *filename = "/Users/jian/Documents/development/test3.txt";
    char *filenameEncode = "/Users/jian/Documents/development/test4.txt";

    //密钥
    char *pwd = "123456";
    FILE *file = fopen(filename, "rb");//r 读取文件
    FILE *fileEncode = fopen(filenameEncode, "wb");//w 创建文件
    if (!file || !fileEncode) {
        printf("文件打开失败");
        exit(0);
    }

    int c;
    int index = 0;
    int pwd_len = strlen(pwd);
    while ((c = fgetc(file)) != EOF) {
        char item = pwd[index % pwd_len];
        printf(" item %c \n", item);
        fputc(c ^ item, fileEncode);
        index++;
    }

    fclose(file);
    fclose(fileEncode);
    return 0;
}