#include "stdio.h"


int main(void) {
    int rowMax = 6;
    int colMax = 6;
    int alternator = 0;
    for (int row = 0; row < rowMax; row++)
    {
        for (int col = 0; col < colMax; col++)
        {
            if (alternator == 0)
            {
                printf("*");
                alternator = 1;
            }
            
            else {
                printf("#");
                alternator = 0;
            }


        }
        printf("\n");
        if (alternator == 0)
        {
            alternator = 1;
        }

        else {
            alternator = 0;
        }
        
        
    }
    


    return 0;
}