#include <stdio.h>
#include <conio.h>
#include <graphics.h>
 int main() {
 int gd = DETECT, gm;
 char data[] = "C:\\MinGW\\lib\\libbgi.a"; 
 initgraph(&gd, &gm, data);
 char name[] = "Geetanshu";
 char enrol[] = "02121402021";
 
 setbkcolor(BLACK);
 cleardevice();
 setcolor(YELLOW);
 outtextxy(10, 50, name); 
 outtextxy(10, 70, enrol);
 setcolor(WHITE);
 for (int i = 0; i < 100; i++) 
 {
 int x = rand() % getmaxx();
 int y = rand() % getmaxy();
 putpixel(x, y, WHITE);
 }
 int trunkTop = 300;
 int trunkBottom = 500;
 int trunkLeft = (getmaxx() - 40) / 2;
 int trunkRight = trunkLeft + 40;
 setcolor(BROWN);
 setfillstyle(SOLID_FILL, BROWN);
 rectangle(trunkLeft, trunkTop, trunkRight, trunkBottom);
 floodfill(trunkLeft + 20, trunkBottom - 20, BROWN);
 int leavesCenterX = getmaxx() / 2;
 int leavesCenterY = 250;
 setcolor(GREEN);
 setfillstyle(SOLID_FILL, GREEN);
 fillellipse(leavesCenterX, leavesCenterY, 100, 100);
 fillellipse(leavesCenterX - 80, leavesCenterY, 100, 100);
 fillellipse(leavesCenterX + 80, leavesCenterY, 100, 100);
 getch();
 closegraph();
 return 0;
}

