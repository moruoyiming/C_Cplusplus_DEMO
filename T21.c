#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 文件读操作
 * @return
 */
int main21() {
//   fopen开发文件 参数一 文件路径  参数二 操作类型   返回值 FILE 结构体
//   File * fopen(const char *, const char *);
    char *filename = "D:\\project_c\\ndk_demo\\test.txt";
    FILE *fp;
    fp = fopen(filename, "r");
    if (!fp) {
        printf("The file <%s> can not be opened.\n", fp);//打开操作不成功
        exit(0);
    }
    char buffer[10];
    //1.缓存区buffer   2.长度10   3.文件指针变量
    while (fgets(buffer, 10, fp)) {
        printf("%s\n", buffer);
    }
    //关闭文件
    fclose(fp);

    return 0;
}

