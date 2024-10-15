#include <stdio.h>
#include "math.h"

int main(void) {
    double colMax = 8;
    double rowMax = 9;
    int patternCounter = 1;
    int spaceCounter = 0;

    for (int row = 0; row < rowMax; row++)
    {
        for (int col = 0; col < colMax; col++)
        {
            if ((row == 0 || col == colMax-1) && row != rowMax-1)
            {
                printf("*");
            }

            else if (row == rowMax-1 || col == 0)
            {
                printf("#");
            }

            else {
                if (row == 1 && col == 1)
                {
                    printf("*");
                }
                else {
                    if (row-1 == col && (row != rowMax-2 && col != colMax-2))
                    {
                        printf("#");
                        printf("*");
                    }
                    else {
                        if (row == rowMax-2 && col == colMax-2)
                        {
                            printf("#");
                        }
                        if (row == 1 || row == rowMax-2)
                        {
                            if (spaceCounter != ceil(rowMax / 2))
                            {
                                printf(" ");
                                spaceCounter++;
                            }

                        }
                        
                        else {
                            if (spaceCounter != floor(colMax / 2))
                            {
                                printf(" ");
                                spaceCounter++;
                            }
                        }
                        
                    }
                    
                }
                
            }
            
            
        }
        printf("\n");
        spaceCounter = 0;
        
    }
    


    return 0;

}















