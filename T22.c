#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 文件写操作
 * @return
 */
int main22() {
//   fopen开发文件 参数一 文件路径  参数二 操作类型   返回值 FILE 结构体
//   File * fopen(const char *, const char *);
    char *filename = "/Users/jian/Documents/development/test.txt";
    FILE *fp;
    fp = fopen(filename, "w");
    if (!fp) {
        printf("The file <%s> can not be opened.\n", fp);//打开操作不成功
    }
    fputs("sdfadf", fp);
    //关闭文件
    fclose(fp);

    return 0;
}