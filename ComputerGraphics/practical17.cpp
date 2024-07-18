#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2,x3,y3,x4,y4;
float t=0,x,y;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");
clrscr();
printf("Enter the control points \n");
scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
putpixel(x1,y1,RED);
outtextxy(x1-15,y1,"P0");
putpixel(x2,y2,RED);
outtextxy(x2,(y2+5),"P1");
putpixel(x3,y3,RED);
outtextxy(x3,(y3+5),"P2");
putpixel(x4,y4,RED);
outtextxy(x4,(y4+5),"P3");
char name[] = "Geetanshu";
char enrol[] = "02121402021";
outtextxy(10+i,100, name);
outtextxy(10+i,130, enrol);
while(t<=1)
{
 x= pow((1-t),3)*x1 + pow((1-t),2)*3*t*x2 + pow(t,2)*(1-t)*3*x3 + 
pow(t,3)*x4 ;
 y= pow((1-t),3)*y1 + pow((1-t),2)*3*t*y2 + pow(t,2)*(1-t)*3*y3 + 
pow(t,3)*y4 ;;
 t+=0.001;
 putpixel(x,y,15);
}
getch();
closegraph();
return 0;
}
