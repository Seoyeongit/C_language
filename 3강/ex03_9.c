#include <stdio.h>

int main(void) {
    
    int width, length, height, volume = 0;

    printf("직육면체의 부피를 계산하는 프로그램\n");

    printf("가로 : ");
    scanf("%d", &width);

    printf("세로 : ");
    scanf("%d", &length);

    printf("높이 : ");
    scanf("%d", &height);

    volume = width * length * height;
    printf("부피 : %d\n", volume);    
    return 0;
}