#include "graphics.h"
#include "math.h"


int main(void) {
    setWindowSize(400,400);


    for (double r = 0.1; r < 50; r+=0.1)
    {
        double x = r * cos(r); // rCos(Theta) , r = a + b(Theta), a = 0,b = 1, r = theta, therefore theta* cos(theta)
        double y = r * sin(r);

        drawRect(x+200,y+200,1,1);

        
    }
    
    
}