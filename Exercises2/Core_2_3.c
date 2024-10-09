#include <stdio.h>


int main(void) {
    
    int counter = 1;

    do
    {
        int result = counter * 13;
        printf("%d * 13 = %d\n", counter, result);
    } while (counter ++ < 13);
    



    return 0;
}