#include <stdio.h>

// int counter = 0;


// int main(void) {

//     while (counter++<10) {
//         printf("%d: A message\n", counter);
        
//     }
    

//     return 0;
// }


// int main(void) {

//     for (int counter = 1; counter < 11; counter++) {
//         printf("%d: A message\n", counter);
        
//     }
    

//     return 0;
// }

// int main(void) {
//     int counter = 1;
//     do
//     {   
        
//         printf("%d: A message\n",counter);
        
//     } while (counter++ < 10);
    
// }


int main(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
