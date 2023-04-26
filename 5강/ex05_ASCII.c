#include <stdio.h>

int main(void) {
    char a;

    printf("아스키 문자 입력: ");
    sacnf("%c", &a);
    printf("아스키 코드 값: %d \n", a);



   
    return 0;
}
