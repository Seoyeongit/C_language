#include <stdio.h>

int main(void) {
    int i=0, j=0;

    while(i<3){
        printf("i = %d, j = %d\n", i, j);
        while(j<2){
            j++;
            printf("i = %d, j = %d\n", i, j);
        }
    i++;
    j=0;


    }
 
} 