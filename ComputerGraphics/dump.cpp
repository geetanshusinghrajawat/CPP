#include <stdio.h>
#include <graphics.h> 
void drawCircle(int xc, int yc, int x, int y) 
{ 
	putpixel(xc+x, yc+y, WHITE);
	putpixel(xc-x, yc+y, WHITE);
	putpixel(xc+x, yc-y, WHITE);
	putpixel(xc-x, yc-y, WHITE);
	putpixel(xc+y, yc+x, WHITE);
	putpixel(xc-y, yc+x, WHITE);
	putpixel(xc+y, yc-x, WHITE);
	putpixel(xc-y, yc-x, WHITE);
}
void circleBres(int xc, int yc, int r)
{
	int x = 0, y = r;
	int d = (5/4)- r;
	drawCircle(xc, yc, x, y);
	while (y >= x)
	{
		x++;
		if (d > 0)
		{
			y--;
			d = d+ 2* (x - y) + 1;
		}
		else
			d = d + 2* x + 1;
		drawCircle(xc, yc, x, y);
		delay(50);
	}
	getch();
}
int main()
{
	int gd = DETECT, gm, j, a;
	initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
	for (j = 0; j< 600; j++)
	{
        circleBres(200+j,300,70);
        delay(10);
		cleardevice();
    }
    getch();
    closegraph();
	return 0;

}  