#include <stdio.h>
// NOR연산자
int main(void) {
    int num1 = 15;      // 00000000 00000000 00000000 00001111
    int num2 = 20;      // 00000000 00000000 00000000 00010100
    int sum = num1 ^ num2;

    // 2진수에서의 덧셈, 1,0일때만 1, 0,0 1,1일때는 0
    printf("NOR 연산 결과 : %d\n", sum);
    
    return 0;
}