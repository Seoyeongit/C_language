#include <stdio.h>

int main(void) {
   
    int dan, i;

    for (dan = 1; dan <= 9; dan++) {
        if(dan % 2 == 1)
            continue;
        for (i = 1; i<= 9; i++) {

            if (dan < i)
                break;
                
            printf("%d * %d = %d\n", dan, i, dan * i);
        }
        
        printf("\n");
    }
   
    return 0;
}
