#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 随机数
 * @return
 */
int main3(void) {
    int i;
    time_t t;
    srand((unsigned) time(&t));
    printf("Ten randome numbers from 0 to 90 \n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", rand() % 100);
    }
    return 0;
}

