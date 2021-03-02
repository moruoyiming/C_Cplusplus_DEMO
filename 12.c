#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * 字符串查找 拼接 包含
 * @return
 */
int main() {
    char *text = "Hello World";
    char *subtext = "W";
    char *temp = strstr(text, subtext);
    if (temp) {
        printf("匹配到字符串 %s\n", temp);
    } else {
        printf("未匹配到字符串 ");
    }
    int pop = temp - text;
    printf("temp length %d ad is %p\n", strlen(temp),temp);
    printf("text length %d ad is %p\n",  strlen(text),text);
    printf("指针位置 %d \n", pop);


    char *list[25];
    char *str1 = "==C++==", *str2 = "==干到==", *str3 = "==JAVA==";
    strcpy(list, str1);
    strcat(list, str2);
    strcat(list, str3);
    printf("list is  %s \n", list);

    char *A = "Asdfsdssd";
    char *B = "f";
    int pop2 = A - B ;
    printf("temp length %d ad is %p\n", strlen(A),A);
    printf("text length %d ad is %p\n",  strlen(B),B);
    printf("指针位置 %d \n", pop2);

    return 0;
}