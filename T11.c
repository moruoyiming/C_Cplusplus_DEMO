#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main11() {

    //�ַ���ת��
    char *num = "13543";
    int result = atoi(num);
    if (result) {
        printf(" num is result %d \n", result);
    }
    int length = strlen(num);
    if (result) {
        printf(" num is length %d \n", length);
    }
    //�ַ����Ƚ�

    char *str1 = "Hello";
    char *str2 = "World";

    int result2 = strcmp(str1, str2);
    if (!result2) {// 0 �������  ���� 0 �����
        printf(" result2 is  ��� %d \n", result2);
    }else{
        printf(" result2 is  ����� %d \n", result2);
    }
    return 0;
}