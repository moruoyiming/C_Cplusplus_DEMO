#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * �ַ������� ƴ�� ����
 * @return
 */
int main() {
    char *text = "Hello World";
    char *subtext = "W";
    char *temp = strstr(text, subtext);
    if (temp) {
        printf("ƥ�䵽�ַ��� %s\n", temp);
    } else {
        printf("δƥ�䵽�ַ��� ");
    }
    int pop = temp - text;
    printf("temp length %d ad is %p\n", strlen(temp),temp);
    printf("text length %d ad is %p\n",  strlen(text),text);
    printf("ָ��λ�� %d \n", pop);


    char *list[25];
    char *str1 = "==C++==", *str2 = "==�ɵ�==", *str3 = "==JAVA==";
    strcpy(list, str1);
    strcat(list, str2);
    strcat(list, str3);
    printf("list is  %s \n", list);

    char *A = "Asdfsdssd";
    char *B = "f";
    int pop2 = A - B ;
    printf("temp length %d ad is %p\n", strlen(A),A);
    printf("text length %d ad is %p\n",  strlen(B),B);
    printf("ָ��λ�� %d \n", pop2);

    return 0;
}