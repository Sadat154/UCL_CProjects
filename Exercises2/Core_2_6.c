#include <stdio.h>


int main(void) {
    int lengthChoice = 5;
    int spaceCount = 1;
    int firstHalf = 0;

    for (int row = 1; row < lengthChoice*2; row++) {
        for (int column = 0; column < lengthChoice; column++) {
            printf("*");
        }
        printf("\n");

        if (spaceCount < lengthChoice && firstHalf == 0) {
            
            for (int i = 0; i < spaceCount; i++)
            {
                printf(" ");
            }
            spaceCount++;
            
            
        }

        else {
            firstHalf = 1;
            if (spaceCount == lengthChoice) {
                spaceCount = lengthChoice -1;
            } 
            spaceCount--;
            for (int i = 0; i < spaceCount; i++)
            {
                printf(" ");
            }
        }

    }
    return 0;

}


















// {
//             if (spaceCount < column) {
//                 printf("*");
//                 asteriskCounter++;
//             }

//             else {
//                 printf(" ");
//             }
            
//             if (asteriskCounter == 5)
//             {
//                 asteriskCounter = 0;
//                 break;
//             }
            
//         }


//         printf("\n");
//         if (spaceCount < lengthChoice && firstHalf == 0)
//         {
//             spaceCount++;
//         }
        
//         else {
//             firstHalf = 1;
//             spaceCount--;
//         }