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
	int gd = DETECT, gm;
	int xc = 100, yc = 100, r = 60;
	initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
	char name[] = "Akshay";
	char enrol[] = "04321402021"; 
	outtextxy(400, 50, name); 
	outtextxy(400, 90, enrol);
	circleBres(xc, yc, r);
	return 0;
	getch();
}