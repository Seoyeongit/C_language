#include <stdio.h>
int main (void) {

    int num;

    printf("정수 입력 : ");
    scanf("%d", &num);

    num = num << 4;
    num = num >> 2;
    printf("%d\n", num);


    return 0;
}