
#include <stdio.h>
#include <string.h>

/**
 *  字符串拷贝
 * @return
 */
int main4(void) {
    char string[10];
    char *str1 = "abcdefgi";
    strcpy(string, str1);
    printf("%s\n", string);
    return 0;
}
