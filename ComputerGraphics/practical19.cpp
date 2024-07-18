#include<stdio.h> 
#include<graphics.h> 
#include<conio.h> 
int main()
{
    int gd = DETECT, gm; 
    int left, top, right, bottom;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
    bar(left = 150, top = 150,right = 190, bottom = 300); 
    setfillstyle(1,4);
    bar(left = 210, top = 250,right = 250, bottom = 300); 
    setfillstyle(1,5);
    bar(left = 270, top = 200,right = 310, bottom = 300); 
    setfillstyle(1,6);
    bar(left = 330, top = 100,right = 370, bottom = 300); 
    setfillstyle(1,7);
    bar(left = 390, top = 200,right = 430, bottom = 300); 
    line(100, 50, 100, 300);
    line(100, 300, 450, 300);
    outtextxy(150,310,"Food"); 
    outtextxy(200,310,"Education"); 
    outtextxy(280,310,"Cloths"); 
    outtextxy(335,310,"Savings"); 
    outtextxy(400,310,"Others"); 
    line(90,100,110,100); 
    line(90,150,110,150); 
    line(90,200,110,200); 
    line(90,250,110,250);
    outtextxy(56,97,"2000"); 
    outtextxy(56,147,"1500"); 
    outtextxy(56,197,"1000"); 
    outtextxy(56,247,"500"); 
    outtextxy(400,60,"500 = 1 lakh"); 
    outtextxy(200,360,"Total Income : 10 lakh"); 
    outtextxy(160,140,"1500"); 
    outtextxy(220,240,"500"); 
    outtextxy(280,190,"1000"); 
    outtextxy(340,90,"2000"); 
    outtextxy(400,190,"1000");
    char name[] = "Geetanshu";
    char enrol[] = "02121402021";
    outtextxy(10,100, name);
    outtextxy(10,130, enrol);
    getch(); 
    closegraph();
    return 0; 
}
