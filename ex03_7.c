#include <stdio.h>

int main(void) {
    
    int num1, num2;
    printf("정수 2개 입력: ");
    // scanf : 엔터 또는 스페이스로 입력, 마지막 입력값은 꼭 엔터로 끝내주기
    scanf("%d %d", &num1, &num2);

    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    

    return 0;
}