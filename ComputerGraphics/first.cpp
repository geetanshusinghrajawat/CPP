#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main() {
 int gd = DETECT, gm;
 char data[] = "C:\\MinGW\\lib\\libbgi.a"; 
 initgraph(&gd, &gm, data);
 char name[] = "Geetanshu Singh Rajawat";
 char enrol[] = "02121402021";
 cleardevice();
 setcolor(LIGHTBLUE);
 outtextxy(200, 50, name); 
 outtextxy(200, 70, enrol);
 circle(100, 100, 50);
 line(200, 100, 300, 200);
 rectangle(350, 50, 450, 150);
 arc(550, 100, 0, 180, 50);
 ellipse(700, 100, 0, 360, 50, 25);
 int polyPoints[] = {50, 250, 150, 250, 150, 350, 100, 400, 50, 350, 50, 250};
 drawpoly(6, polyPoints);
 getch();
 closegraph();
 return 0;
}