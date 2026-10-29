#include <graphics.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int Monday = 2200; 
    int Tuesday = 1800;
    int Wednesday = 2500; 
    int Thursday = 2000;
    int Friday = 2300;
    
    int totalCalories = Monday + Tuesday + Wednesday + Thursday + Friday;
    float avgCalories = totalCalories / 5.0;

    outtextxy(450, 20, "Student ID: BC210422884");

    int barWidth = 50;
    int baseY = 400; 
    
    line(70, baseY, 600, baseY); 
    line(70, 100, 70, baseY);   
    
    setfillstyle(SOLID_FILL, RED);       
    bar(100, baseY - Monday / 10, 100 + barWidth, baseY);
    outtextxy(100, baseY - Monday / 10 - 20, "2200");
    outtextxy(100, baseY + 10, "Mon");

    setfillstyle(SOLID_FILL, BLUE);       
    bar(200, baseY - Tuesday / 10, 200 + barWidth, baseY);
    outtextxy(200, baseY - Tuesday / 10 - 20, "1800");
    outtextxy(200, baseY + 10, "Tue");

    setfillstyle(SOLID_FILL, GREEN);      
    bar(300, baseY - Wednesday / 10, 300 + barWidth, baseY);
    outtextxy(300, baseY - Wednesday / 10 - 20, "2500");
    outtextxy(300, baseY + 10, "Wed");

    setfillstyle(SOLID_FILL, CYAN);       
    bar(400, baseY - Thursday / 10, 400 + barWidth, baseY);
    outtextxy(400, baseY - Thursday / 10 - 20, "2000");
    outtextxy(400, baseY + 10, "Thu");

    setfillstyle(SOLID_FILL, MAGENTA);    
    bar(500, baseY - Friday / 10, 500 + barWidth, baseY);
    outtextxy(500, baseY - Friday / 10 - 20, "2300");
    outtextxy(500, baseY + 10, "Fri");

    outtextxy(50, baseY, "0");
    outtextxy(30, baseY - 150, "1500");
    outtextxy(30, baseY - 300, "3000");

    char totalText[50], avgText[50];
    sprintf(totalText, "Total Calories: %d", totalCalories);
    sprintf(avgText, "Avg Calories/Day: %.2f", avgCalories);
    outtextxy(100, baseY + 40, totalText);
    outtextxy(100, baseY + 60, avgText);

    getch();  
    closegraph();  
    return 0;
    
}

