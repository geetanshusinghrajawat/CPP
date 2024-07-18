#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#define arg_sec M_PI/30
#define arg_hour M_PI/6
#define arg_min M_PI/360
int main()
{
  int gd=DETECT,gm,sec=0,hour,min;
  initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
  int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
  char *k[12]={"1","2","3","4","5","6","7","8","9","10","11","12"};
  struct time t1;  // Used to get current time from system
  int i,a,b;
  int dig_sec;
  char digitalTime[14];
  outtextxy(10,410,"Name :- Mohit Negi");
  outtextxy(10,400,"enrollment no. :- 02621402021");
  setcolor(RED);
  circle(300,200,200);
  circle(300,200,180);
  setfillstyle(1,BLUE);
  floodfill(300,390,RED);
  settextstyle(DEFAULT_FONT,0,2);
  for(i=1;i<13;i++)
    {
        a=160*cos(arg_hour*i-M_PI_2);
        b=160*sin(arg_hour*i-M_PI_2);
        outtextxy(a+300,b+200,k[i-1]);
    }

while(!kbhit())
   {
        setcolor(BLACK);
        line(300,200,x1+300,y1+200);
        line(300,200,x2+300,y2+200);
        line(300,200,x3+300,y3+200);
        gettime(&t1);
        if(sec!=t1.ti_sec)
        {
            sound(5000);
            delay(1);
            nosound();
        }
        hour=t1.ti_hour;
        sec=t1.ti_sec;
        min=t1.ti_min;
        digitalTime[0]=hour/10+48;
        digitalTime[1]=hour%10+48;
        digitalTime[2]=':';
        digitalTime[3]=min/10+48;
        digitalTime[4]=min%10+48;
        digitalTime[5]=':';
        digitalTime[6]=sec/10+48;
        digitalTime[7]=sec%10+48;
        digitalTime[8]='\0';
        outtextxy(270,250,"ÛÛÛÛÛÛÛÛÛÛÛ");
        x1=150*cos(arg_sec*sec-M_PI_2)*0.98;
        y1=150*sin(arg_sec*sec-M_PI_2)*0.98;
        x2=150*cos(arg_sec*min-M_PI_2)*0.9;
        y2=150*sin(arg_sec*min-M_PI_2)*0.9;
        if(hour>12) hour-=12;
        x3=150*cos(arg_hour*hour-M_PI_2+arg_min*min)*0.6;
        y3=150*sin(arg_hour*hour-M_PI_2+arg_min*min)*0.6;
        setcolor(YELLOW);
        line(300,200,x1+300,y1+200);
        setcolor(CYAN);
        line(300,200,x2+300,y2+200);
        setcolor(WHITE);
        line(300,200,x3+300,y3+200);
        setcolor(YELLOW);
        outtextxy(270,250,digitalTime);
        delay(50);
    }
    getch();
    closegraph();
    restorecrtmode();
    return 0;
}
