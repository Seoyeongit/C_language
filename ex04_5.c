#include <stdio.h>
// NOT연산자
int main(void) {
    int num1 = 15;      // 00000000 00000000 00000000 00001111
    int num2 = ~num1;   

    // 0 -> 1, 1 -> 0으로 바꿔줌
    printf("NOT 연산 결과 : %d\n", num2);
    
    return 0;
}