#include <stdio.h>

int main(void) {
    int kor, eng, mat;
    double avg;

    printf("국어, 영어, 수학 점수 입력 : ");
    scanf("%d %d %d", &kor, &eng, &mat);

    avg = (kor + eng + mat) / 3.0 ;    

    printf("평균 : %lf", avg);

    if(avg >= 90)
        printf("학점 : A\n");
    else if ( 80 <= avg)  // 위에서 해당되는 경우를 제외하고 if문 실행함
        printf("학점 : B\n");
    else if ( 70 <= avg)  
        printf("학점 : C\n");
     else if ( 60 <= avg)  
        printf("학점 : D\n");
     else
        printf("학점 : F\n");
    
    return 0;
}