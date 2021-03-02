#include <stdio.h>

int getLength(char *string) {
    int count = 0;
    while (*string) {
        string ++;
        count ++;
    }
    return count;
}

int main10() {
    char string[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    int length = getLength(string);
    printf(" string length is %d \n", length);

    int array[]  = {12,2312,312,31,23123,1231,2};
    int length2 = sizeof(array)/ sizeof(int);
    printf(" array length is %d \n",length2);

    return 0;
}