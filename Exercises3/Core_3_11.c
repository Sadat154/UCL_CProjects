#include "graphics.h"
#include <stdio.h>
int HEIGHT = 800;
int WIDTH = 800;


void drawHorizStrips(int bHeight, int bWidth) {
    int rectWidth = 3*bWidth;
    int rectHeight = bHeight;

    int currentY = 0;
    int currentX = 0;

    int color = 0;

    int startingXValues[] = {0,2,4,1,3};

    while (currentY != HEIGHT)
    {
        if (color == 0)
        {
            setColour(blue);
            color = 1;

        }

        else {
            setColour(yellow);
            color = 0;
        }
        
        fillRect(currentX, currentY, rectWidth, rectHeight);
        currentX += 5*bWidth;

        if (currentX > WIDTH) {
            //printf("%d", currentX);
            currentY += bHeight;
            currentX = 0 + (bHeight*2*currentY/bHeight);
        } 
    }
    
    
    
}

int main(void) {


    setWindowSize(WIDTH,HEIGHT); //Pattern such that 20 "1x1" -> W/H

    int blockHeight = WIDTH / 20;
    int blockWidth = HEIGHT / 20;

    drawHorizStrips(blockHeight, blockWidth);
    
    

    return 0;
}


//I give up for now