#include <stdio.h>

int main(void) {
    
    int input, sum = 0, temp, num;

    printf("입력 받을 정수의 갯수:");
    scanf("%d", &input);

    // num에 input 값 미리 저장하기
    num = input; 

    while(input > 0){
        printf("정수 입력 : ");
        scanf("%d", &temp);

        sum += temp;

        input--;
    }
    printf("입력의 평균 : %lf\n", (double) sum / num);

    return 0;
} 