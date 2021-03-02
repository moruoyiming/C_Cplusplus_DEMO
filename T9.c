#include <stdio.h>
/**
 * string 相关
 * @return
 */
int main9(void ){
    char str [] = {'h','e','l','l','o','\0'};// 从静态区 拷贝到栈，可以直接修改栈空间
    printf(" str is  %s ",str);

    char * str2 = "hello";//字符串分配在静态区，直接修改会报错
    str2[2] = 'z';
    printf(" str2 is  %s ",str2);
}

