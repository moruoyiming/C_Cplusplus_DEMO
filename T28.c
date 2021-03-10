#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 文件的加解密
 * @return
 */
int main() {

    char *filename = "/Users/jian/Documents/development/testEncode.txt";
    char *filenameEncode = "/Users/jian/Documents/development/test2.txt";

    FILE *file = fopen(filename, "rb");//r 读取文件
    FILE *fileEncode = fopen(filenameEncode, "wb");//w 创建文件
    if (!file || !fileEncode) {
        printf("文件打开失败");
        exit(0);
    }
    //加密解密思路
    //加密 == 破坏文件
    //解密 == 还原文件

    //TODO 加密的想法
    //10 异或 ^ 5 数据变为 1111

    //TODO 解密的想法
    //获取 1111数据 通过 异或 ^ 5 操作 得到原始数据10

    int c;
    //fgetc 返回值 EOF = end fo file
    while (c = fgetc(file) != EOF) {
        //加密操作
        fputc(c ^ 5, fileEncode);
    }

    fclose(file);
    fclose(fileEncode);
    return 0;
}
