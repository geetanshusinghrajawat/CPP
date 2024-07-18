#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int drawCircle(int x, int y, int radius)
{
    int xCenter = x;
    int yCenter = y;
    int p = 1 - radius;
    int xCoord = 0;
    int yCoord = radius;
    while (xCoord <= yCoord)
    {
        putpixel(xCenter + xCoord, yCenter + yCoord, WHITE);
        putpixel(xCenter - xCoord, yCenter + yCoord, WHITE);
        putpixel(xCenter + xCoord, yCenter - yCoord, WHITE);
        putpixel(xCenter - xCoord, yCenter - yCoord, WHITE);
        putpixel(xCenter + yCoord, yCenter + xCoord, WHITE);
        putpixel(xCenter - yCoord, yCenter + xCoord, WHITE);
        putpixel(xCenter + yCoord, yCenter - xCoord, WHITE);
        putpixel(xCenter - yCoord, yCenter - xCoord, WHITE);
        if (p < 0)
        {
            p += 2 * xCoord + 3;
        }
        else
        {
            p += 2 * (xCoord - yCoord) + 5;
            yCoord--;
        }
        xCoord++;
    }
}
int main()
{
    int x, y, radius;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
    char name[] = "Akshay";
    char enrol[] = "04321402021"; 
    outtextxy(400, 50, name); 
    outtextxy(400, 90, enrol);
    printf("Enter the starting point (x, y) of the circle: ");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    drawCircle(x, y, radius);
    getch();  
    closegraph();
    return 0;
}
