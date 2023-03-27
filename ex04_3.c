#include <stdio.h>
// OR연산자
int main(void) {
    int num1 = 15;      // 00000000 00000000 00000000 00001111
    int num2 = 20;      // 00000000 00000000 00000000 00010100
    int sum = num1 | num2;

    // 둘 중 하나라도 1이면 1, 둘 다 1일 때 1
    printf("OR 연산 결과  %d\n", sum);
    
    return 0;
}