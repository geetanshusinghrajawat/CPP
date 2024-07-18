#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
void dda(int x1, int y1, int x2, int y2) 
{
 int dx = x2 - x1;
 int dy = y2 - y1;
 int steps, k;
 float x_inc, y_inc, x = x1, y = y1;
 if (abs(dx) > abs(dy)) {
 steps = dx;
 } else {
 steps = dy;
 }
 x_inc = (float)dx / steps;
 y_inc = (float)dy / steps;
 putpixel(x, y, YELLOW);
 for (k = 0; k < steps; k++) 
 {
 x = x + x_inc;
 y = y + y_inc;
 delay(50);
 putpixel(x, y, GREEN);
 }
}
int main() {
 int gd = DETECT, gm;
 char data[] = "C:\\MinGW\\lib\\libbgi.a";
 initgraph(&gd, &gm, data);
int x1, x2, y1, y2;
 
 char name[] = "Geetanshu";
 char enrol[] = "02121402021";
 setcolor(WHITE); 
 outtextxy(100, 50, name); 
 outtextxy(100, 90, enrol);
 printf("Enter the starting point of line(x1,x2,y1,y2): "); 
 scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
 dda(x1,x2,y1,y2);
 getch();
 closegraph();
 return 0;
}
