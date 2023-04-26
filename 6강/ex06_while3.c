#include <stdio.h>


int main(void) {
    int num;

    printf("횟수 입력 : ");

    scanf("%d", &num);

    while (num >= 1) {
        printf("%d: hello world!\n", num);
        num--;
        
    }

    return 0;
    
}