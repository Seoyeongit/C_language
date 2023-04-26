#include <stdio.h>

int main(void) {
    int sum = 0, num = 0, i = 0;

    // 5번째 까지 정수 입력할 수 있도록 하기
    while ( i < 5 ) {
        while(num <= 0) {
            printf("양의 정수 입력(%d번째)", i+1);
            scanf("%d", &num);
        }

        sum += sum;
        num = 0, i++;
    }

    printf("합계 : %d \n", sum);
    return 0;
} 