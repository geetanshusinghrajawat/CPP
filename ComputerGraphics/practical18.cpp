#include<stdio.h> 
#include<graphics.h> 
#include<dos.h> 
#include<math.h>
int main()
{
int gd = DETECT,gm, a,b,i,r,x,y; 
initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");
rectangle(200,360,360,380); 
floodfill(201,361,15); 
rectangle(220,340,340,360); 
floodfill(221,341,15); 
rectangle(240,320,320,340); 
floodfill(241,321,15);
char name[] = "Geetanshu";
char enrol[] = "02121402021";
outtextxy(10,100, name);
outtextxy(10,130, enrol);
b=68; 
r=11;
setcolor(BLUE); 
circle(a,b,r); 
for(i=0;i<=360;i=i+25)
{ 
    x=r*cos(i*3.14/180); 
    y=r*sin(i*3.14/180); 
    line(a,b,a+x,b-y);
} 
getch();
return 0; 
closegraph();
}
