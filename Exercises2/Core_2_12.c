#include "graphics.h"
#include <stdio.h>
#include "math.h"
#define M_PI 3.14159265358979323846


double degreesToRad (double val) {

    return val*(M_PI / 180);
}

double radToDegrees (double val) {
    return val * (180.0 / M_PI);
}

void labelYAxis (int winWidth,int winLength) {
    double yStep = 0.25;
    double yVal = (winLength/50) * yStep * 0.5;
    char str[50];


    //Drawing Bars
    for (int y = 0; y < winWidth; y+=50)
    {
        drawLine(winWidth/2,y,(winWidth/2)+15,y);
        snprintf(str, sizeof(str), "%f", yVal); // Convert double to string
        str[5] = '\0'; // first 5 char
        drawString(str, (winWidth/2)+25, y);
        yVal-=yStep;
    }
    
}


void labelXAxis (int winWidth,int winLength) {
    int xStep = 45;
    int xVal = (winLength/50) * xStep * 0.5 * -1;
    char str[50];
    for (int x = 0; x < winWidth; x+=50)
    {
        drawLine(x,winLength/2,x,(winLength/2)+15);
        snprintf(str, sizeof(str), "%d", xVal);
        drawString(str, x, (winLength/2)+25);
        xVal+=xStep;
    }
}

void drawSinOrCos(double translation) {

    for (double i = -5*M_PI; i < 5*M_PI; i+=0.001)
    {
        double yOutput = sin(i*0.9) * 200; // i correlates to x
        double xConversion = radToDegrees(i);
        setColour(black);
        drawRect(xConversion+600,(yOutput+400),1,1);
        setColour(red);
        drawRect(xConversion+400+translation,(yOutput+400),1,1);

    }
    

}

void drawTan() {
    for (double i = -5*M_PI; i < 5*M_PI; i+=0.001)
    {
        double yOutput = tan(i*0.9) * 200 *-1; // i correlates to x
        double xConversion = radToDegrees(i);
        setColour(black);
        drawRect(xConversion+600,(yOutput+400),1,1);
        setColour(red);
        drawRect(xConversion+400,(yOutput+400),1,1);

    }
}

int main (void) {
    int winWidth = 800;
    int winLength = 800;
    setWindowSize(winWidth,winLength);

    drawLine(winWidth/2,0,winWidth/2,winLength); // Y-Axis
    labelYAxis(winWidth,winLength);
    drawLine(0,winLength/2,winWidth,winLength/2); // X-Axis
    labelXAxis(winWidth, winLength);
    double translation = 100;
    drawSinOrCos(translation);
    drawTan();

    return 0;
}

