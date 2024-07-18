#include<stdio.h>
#include <graphics.h>
int main()
{
	int gd = DETECT, gm, i, a;
	initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
	for (i = 0; i < 600; i++) {
		line(50 + i, 405, 100 + i, 405);
		line(75 + i, 375, 125 + i, 375);
		line(50 + i, 405, 75 + i, 375);
		line(100 + i, 405, 100 + i, 345);
		line(150 + i, 405, 100 + i, 345);
		line(75 + i, 345, 75 + i, 370);
		line(70 + i, 370, 80 + i, 370);
		line(80 + i, 345, 100 + i, 345);
        line(100 + i, 380, 100 + i, 230);
        circle(100 + i, 230, 30);
		circle(150 + i, 405, 30);
		circle(50 + i, 405, 30);
		line(0, 436, getmaxx(), 436);
		rectangle(getmaxx() - i, 436, 650 - i, 431);
    	char name[] = "Geetanshu";
    	char enrol[] = "02121402021";
        outtextxy(10+i,100, name);
        outtextxy(10+i,130, enrol);
		delay(10);
		cleardevice();
	}
	getch();
	closegraph();
}
