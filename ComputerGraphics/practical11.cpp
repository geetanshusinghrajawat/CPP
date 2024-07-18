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
		}
}
int main()
{
int gd = DETECT, gm ;
int i;
initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");
for(i = 0; i < 500; i++)
{
setfillstyle(SOLID_FILL,BLUE);
circleBres(200 + i,300,70);
floodfill(200+i,300,15);
setfillstyle(SOLID_FILL,BROWN);
circleBres(200 + i,300,60);
floodfill(200+i,300,15);
setfillstyle(SOLID_FILL,GREEN);
circleBres(200 + i,300,10);
floodfill(200+i,300,15);
line(0,375,650,375);
char name[] = "Akshay";
char enrol[] = "04321402021"; 
outtextxy(400, 50, name); 
outtextxy(400, 90, enrol);
delay(30);
cleardevice();
}

getch();
closegraph();
return 0;
}