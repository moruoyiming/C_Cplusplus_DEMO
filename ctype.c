//
// Created by 菅瑞霖 on 2021/2/25.
//
#include "ctype.h"
#include "stdio.h"

int mainss() {


    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';
    // isalnum 该函数检查所传的字符是否是字母和数字。
    if (isalnum(var1)) {
        printf("var1 = |%c| 是字母数字\n", var1);
    } else {
        printf("var1 = |%c| 不是字母数字\n", var1);
    }
    if (isalnum(var2)) {
        printf("var2 = |%c| 是字母数字\n", var2);
    } else {
        printf("var2 = |%c| 不是字母数字\n", var2);
    }
    if (isalnum(var3)) {
        printf("var3 = |%c| 是字母数字\n", var3);
    } else {
        printf("var3 = |%c| 不是字母数字\n", var3);
    }
    if (isalnum(var4)) {
        printf("var4 = |%c| 是字母数字\n", var4);
    } else {
        printf("var4 = |%c| 不是字母数字\n", var4);
    }

    // isalpha 该函数检查所传的字符是否是字母。
    if (isalpha(var1)) {
        printf("var1 = |%c| 是一个字母\n", var1);
    } else {
        printf("var1 = |%c| 不是一个字母\n", var1);
    }
    if (isalpha(var2)) {
        printf("var2 = |%c| 是一个字母\n", var2);
    } else {
        printf("var2 = |%c| 不是一个字母\n", var2);
    }
    if (isalpha(var3)) {
        printf("var3 = |%c| 是一个字母\n", var3);
    } else {
        printf("var3 = |%c| 不是一个字母\n", var3);
    }
    if (isalpha(var4)) {
        printf("var4 = |%c| 是一个字母\n", var4);
    } else {
        printf("var4 = |%c| 不是一个字母\n", var4);
    }

    // iscntrl 该函数检查所传的字符是否是控制字符。
    int i = 0, j = 0;
    char str1[] = "all \a about \t programming";
    char str2[] = "w3cschool \n tutorials";

    /* 输出字符串直到控制字符 \a */
    while (!iscntrl(str1[i])) {
        putchar(str1[i]);
        i++;
    }

    /* 输出字符串直到控制字符 \n */
    while (!iscntrl(str2[j])) {
        putchar(str2[j]);
        j++;
    }

//    isdigit 该函数检查所传的字符是否是十进制数字。
    int var11 = 'h';
    int var22 = '2';

    if (isdigit(var11)) {
        printf("var11 = |%c| 是一个数字\n", var11);
    } else {
        printf("var11 = |%c| 不是一个数字\n", var11);
    }
    if (isdigit(var22)) {
        printf("var22 = |%c| 是一个数字\n", var22);
    } else {
        printf("var22 = |%c| 不是一个数字\n", var22);
    }
}

