#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;
    while (x < x1)
    {
        if (p >= 0)
        {
            putpixel(x, y, 7);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }
        else
        {
            putpixel(x, y, 7);
            p = p + 2 * dy;
        }
        x = x + 1;
    }
}
int main()
{
    int gd = DETECT, gm;
    int x0=100, y0=150, x1=200, y1=250;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
    char name[] = "Akshay";
    char enrol[] = "04321402021"; 
    outtextxy(400, 50, name); 
    outtextxy(400, 90, enrol);
    printf("Enter coordinates of the first point (x0 y0): ");
    scanf("%d%d", &x0, &y0);
    printf("Enter coordinates of the second point (x1 y1): ");
    scanf("%d%d", &x1, &y1);
    // Draw the line
    drawline(x0, y0, x1, y1);
    getch();
    // Close graphics
    closegraph();
    return 0;
}