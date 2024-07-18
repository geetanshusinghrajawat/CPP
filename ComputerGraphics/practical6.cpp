#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gr = DETECT, gm;
    int r, c, x = 30, y = 30, black = 0;
    initgraph(&gr, &gm, "C:\\MinGW\\lib\\libbgi.a");
    char name[] = "Akshay";
    char enrol[] = "04321402021"; 
    outtextxy(400, 50, name); 
    outtextxy(400, 90, enrol);
    for (r = 0; r < 8; r++)
    {
        for (c = 1; c <= 8; c++)
        {
            if (black == 0)
            {
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, BLACK);
                rectangle(x, y, x + 30, y + 30);
                floodfill(x + 1, y + 1, WHITE);
                black = 1;
            }
            else
            {
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, WHITE);
                rectangle(x, y, x + 30, y + 30);
                floodfill(x + 1, y + 1, WHITE);
                black = 0;
            }
            x = x + 30;
            delay(30);
        }
        if (black == 0)
            black = 1;
        else
            black = 0;
        delay(30);
        x = 30;
        y = 30 + y;
    }
    getch();
    closegraph();
}
