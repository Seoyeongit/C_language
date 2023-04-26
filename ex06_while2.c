#include <stdio.h>

// 구구단 3단을 출력하는 프로그램 작성
int main(void) {
    int i = 3, num = 1;

    printf("3단 구구단 출력\n");

    while (num <= 9) {
        printf("%d * %d = %d\n", i, num, i*num);
        num++;
    }

    return 0;
    
}