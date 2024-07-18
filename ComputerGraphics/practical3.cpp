#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
int main()
{
 int gd = DETECT, gm, i , j=0;
 char data[] = "C:\\MinGW\\lib\\libbgi.a";
 initgraph(&gd, &gm, data);
 char stringData1 [] = "Geetanshu ";
 char stringData2 [] = "02121402021";
 outtextxy(100,10,stringData1);
 outtextxy (100,30,stringData2);
 for(i=0; i<200; i= i+20)
 {
 circle(300, 250, 30+i);
 setcolor(j);
 j++;
 }
 getch();
 closegraph();
 return 0;
}
