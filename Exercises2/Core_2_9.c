#include <stdio.h>


int main(void) {
    int triangleWidth = 7;
    int spaceCount = 0; //Max should be trianglewidth - 2
    int alternator = 0;

    for (int row = 0; row < (triangleWidth*2)-1; row++)
    {
        for (int col = 0; col < triangleWidth; col++)
        {
            printf("*");
            
            if (row != 0 && row != (triangleWidth*2-2))
            {
                if (spaceCount < (triangleWidth-1) && alternator == 0) {
                    for (int i = 0; i < spaceCount; i++) {
                        printf(" ");
                    }
                printf("*");
                spaceCount++;
                }
                
                else {
                    alternator = 1;
                    for (int i = 0; i < spaceCount-2; i++) {
                        printf(" ");
                    }
                    printf("*");
                    spaceCount--;

                }
                
            
            
            }


            
            break;
        }
        printf("\n");
        
    }
    

    return 0;

}















