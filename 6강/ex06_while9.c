#include <stdio.h>

int main(void) {
    int sum = 0, num = 1;

    // num이 0이 아닐 때, 
    while (num != 0){

        printf("정수 입력 (0 to quit): ");
        
        scanf("%d", &num);

        sum += num;
    }
    printf("입력 받은 정수의 합 : %d \n", sum);
    

    return 0;
} 