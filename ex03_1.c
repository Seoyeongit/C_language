 #include <stdio.h>

 int main(void) {
    int num1 = 7, num2 = 4;
    int num3 = 3, num4 = 5 , num5 = 7;
    int num6 = 10, num7 = (num6--) + 2;

    // 대입연산자와 산술연산자 예
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d / %d 의 나머지 = %d\n\n", num1, num2, num1 % num2);

    // 복합 대입 연산자
    num3 += 1;
    num4 *= 2;
    num5 %= 5;

    printf("결과 : %d, %d, %d\n\n", num3, num4, num5);

    // 증가, 감소 연산자
    printf("num6 : %d\n", num6);
    printf("num6++ : %d\n", num6++);
    printf("num6 : %d\n\n", num6);

    printf("num7 : %d\n", num7);
    printf("++num7 : %d\n", ++num7);
    printf("num7ı : %d\n\n", num7);
    return 0;
 }