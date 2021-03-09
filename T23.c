#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * 文件拷贝操作
 * @return
 */
int main23() {
//   fopen开发文件 参数一 文件路径  参数二 操作类型   返回值 FILE 结构体
//   File * fopen(const char *, const char *);
    char *filenamesrc = "/Users/jian/Documents/development/test.txt";
    char *filenamedes = "/Users/jian/Documents/development/test2.txt";
    FILE *fp = fopen(filenamesrc, "rb");
    FILE *fp2 = fopen(filenamedes, "wb");
    if (!fp || !fp2) {
        printf("The file <%s> can not be opened.\n", fp);//打开操作不成功
    }
    int buffer[514];
    int length;
    while ((length = fread(buffer, sizeof(int), 514, fp)) != 0) {
        fwrite(buffer, sizeof(int), length, fp2);
    }
    //关闭文件
    fclose(fp);
    fclose(fp2);
    return 0;
}