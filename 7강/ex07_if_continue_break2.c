#include <stdio.h>

int main(void) {
   
   int a, z;

   for ( a = 0; a <= 9; a++) {
        for (z = 0; z<=9; z++) {
            if(10 * a + z + 10 * z + a != 99)
                continue;
            
            printf("%d%d + %d%d = 99\n", a, z, z, a);
        }
   }

    return 0;
}
