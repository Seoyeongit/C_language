#include <stdio.h>

int main(void) {
    
    int num, i = 2;

    printf("양의 정수 입력: ");
    scnaf("%d", &num);

    printf("입력 받은 정수 %d 보다 작은 짝수 : ", num);

    while( i < num ) {
        printf("%d", i);
        i += 2; // i = i + 2;
       
    }

    
    return 0;
} 