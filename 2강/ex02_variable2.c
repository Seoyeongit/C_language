#include <stdio.h>

int main(void) {
   // 변수 선언 수서 : 맨 앞에 올 것을 요구함
   /* 
        변수의 이름 : 알파벳, 숫자, 언더바(_)로 구성됨
        C언어는 대소문자를 구분함 (변수의 이름은 소문자로 쓰는 것이 좋음)
        변수의 이름은 숫자로 시작할 수 없음
        변수 이름 사이에 공백이 삽입 될 수 없음 (언더바 사용해서 띄어쓰기 표현 가능)
   */
    int num1, num2; // 변수 선언
    int num3 = 30, num4 = 40; // 변수 num3, num4 선언 및 초기화

     // 변수가 들어있지 않아서 쓰레기값 (의미없는 값)이 채워짐 
    printf("num1 ; %d , num2: %d, num3: %d, num4: %d\n", num1, num2, num3, num4);
   

    num1 = 10; // 변수 num1 초기화
    num2 = 20; // 변수 num2 초기화
    
    printf("num1 ; %d , num2: %d, num3: %d, num4: %d\n", num1, num2, num3, num4);

    return 0;

}