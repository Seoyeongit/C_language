#include <stdio.h>

int main(void) {
    int num1 = 15;      // 특별한 선어이 없으면 10진수
    int num2 = 0xA3;    // 0x 으로 시작하면 16진수
    int num3 = 035;     // 0으로 시작하면 8진수

    printf("15의 10진수 정수: %d\n", num1);
    printf("0xA3의 10진수 정수: %d\n", num2);
    printf("035의 10진수 정수: %d\n", num3);

    return 0;
}