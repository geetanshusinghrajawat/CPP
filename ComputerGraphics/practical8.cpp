#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 
int gd = DETECT, gm;
 
void equilateral_triangle()
{
 
   initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
 
   line(300, 100, 200, 200);
   line(300, 100, 400, 200);
   line(200, 200, 400, 200);
   char name[] = "Amit Choudhary";
   char enrol[] = "00521402021";
   outtextxy(100,360, name);
   outtextxy(100,390, enrol);
 
}
void isosceles_triangle()
{
 
   initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
 
   line(300, 100, 250, 200);
   line(300, 100, 350, 200);
   line(250, 200, 350, 200);
   char name[] = "Geetanshu Singh Rajawat";
   char enrol[] = "02121402021";
   outtextxy(100,360, name);
   outtextxy(100,390, enrol);
}
 
void scalene_triangle()
{
 
   initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
 
   line(300, 100, 200, 200);
   line(300, 100, 400, 230);
   line(200, 200, 400, 230);
   char name[] = "Akshay";
   char enrol[] = "04321402021"; 
   outtextxy(400, 50, name); 
   outtextxy(400, 90, enrol);

}

int main() {
int choice;
printf("Akshay 04321402021");
printf("Enter Your choice to draw a triangle : \n 1 :  Equilateral Triangle \n 2 : Isosceles Triangle \n 3: Scalene Triangle\n");
   scanf("%d",&choice);
 
   switch(choice){
   case 1 :
	    equilateral_triangle();
	    break;
   case 2 :
	    isosceles_triangle();
	    break;
   case 3 :
	    scalene_triangle();
	    break;
   default :
	   printf("Enter correct Choice!!");
 
}
 getch();
 closegraph();
 return 0;
}