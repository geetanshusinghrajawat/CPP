#include<graphics.h>  
#include<conio.h>
#include<stdio.h>  
int main()  
{  
    int gd=DETECT,gm;  
    initgraph (&gd,&gm,"C:\\MinGW\\lib\\libbgi.a");   
    printf("\t\t\t\n\nLINE");  
    line(10,40,100,40);  
    printf("\t\t\n\n\n\nRECTANGLE");  
    rectangle(10,60,100,105);  
    printf("\t\t\t\n\n\n\n\n\n\nARC");  
    arc(50,130,180,0,40);  
    printf("\t\n\n\n\nCIRCLE");  
    circle(50,220,40);  
    printf("\t\n\n\n\nECLIPSE");  
    ellipse(50,310,0,360,50,40);
    char name[] = "Mirza Farhan";
    char enrol[] = "04521402021";
    outtextxy(10,360, name);
    outtextxy(10,390, enrol);
    getch();  
    closegraph();
    return 0;  
}

