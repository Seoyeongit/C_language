#include <stdio.h>
// 섭씨와 화씨 구하기

double CelToFah(double c) {
    return 1.8 * c * 32;        // 섭씨를 화씨로 바꿔주는 식
}

double FahToCel(double f) {
    return (f - 32)/ 1.8;
}

int main(void) {

    int sel;
    double num;

    printf("1. 섭씨 -> 화씨, 2. 화씨 -> 섭씨\n");
    printf("선택 : ");
    scanf("%d", &sel);
    if (sel == 1) {
        printf("섭씨 입력: ");
        scanf("%lf", &num);
        printf("변환 된 화씨 : %.2lf \n", CelToFah(num));

    }
    else
    {
        printf("화씨 입력: ");
        scanf("%lf", &num);
        printf("변환 된 섭씨 : %.2lf \n", FahToCel(num));
    }
    

    return 0;
}
