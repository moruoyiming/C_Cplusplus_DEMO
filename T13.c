#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void substrAction1(char *result, char *str, int start, int end) {
    char *temp = str;
    int count = 0;
    while (*temp) {
        if (count >= start && count < end) {
            *result = *temp;
            result++;
        }
        temp++;
        count++;
    }
}

void substrAction2(char **result, char *str, int start, int end) {
    char *temp = str;
    char resultArr[end - start];//栈空间分配内存，出栈会回收
//    char *resultArr = malloc(end - start);//堆区开辟
    int count = 0;
    for (int i = start; i < end; ++i) {
        printf(" count %d temp+i %p\n", count, temp + i);
        resultArr[count] = *(temp + i);// *(temp+i)  取出Derry 给数组容器
        count++;
    }
    //取出二级指针的一级指针
    *result = resultArr;
    printf("%s \n", resultArr);
}

void substrAction3(char *result, char *str, int start, int end) {
    for (int i = start; i < end; ++i) {
        *(result++) = *(str + i);
    }
}

void substrAction4(char *result, char *str, int start, int end) {
    /**
     * 参数1 我最终是copy 到result容器里面
     * 参数2 直接从r开始，一级指针挪动
     * 参数3 从r开始挪动
     */
    strncpy(result, str + start, end - start);
}

/**
 * 作业 字符串截取
 * @return
 */
int main13() {
    char *str = "Derry is";
    char *result;//char * 不需要结尾符\0
//    substrAction1(result, str, 2, 5);
//    substrAction2(&result, str, 2, 5);
//    substrAction3(result, str, 2, 5);
    substrAction4(result, str, 2, 5);

    printf("main 截取的内容是：%s \n", result);
    if (result) {
        free(result);
        result = NULL;
    }

//    char * result1="ABCDEFG"; 会报错 因为不允许修改常量值
//    char * result1=NULL;会报错 因为不允许修改NULL值
//    substrAction3(result, str, 2, 5);
//    printf("main 截取的内容是：%s \n", result);


    return 0;
}