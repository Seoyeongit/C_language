#include <stdio.h>

int main(void) {
    int i, num = 0;

    printf("정수 입력: ");
    scanf("%d", &i);

    while(num++ < 9)
         printf("%2d * %2d = %2d \n", i, num, i * num); 
    
  
    return 0;
 
 
} 