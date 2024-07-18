#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
#include <dos.h>
#include <process.h>

int pixels[2][4];
float xn1, xn2, yn1, yn2, x3, y3, m;
int xmin, ymin, xmax, ymax, x1, y1, x2, y2;
int choice, ed[20], num;

void su_co(int x1, int y1, int x2, int y2, int xmin, int ymin, int xmax, int ymax) {
    int i, j, fl;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            pixels[i][j] = 0;

    if (y1 > ymax)
        pixels[0][0] = 1;
    if (y1 < ymin)
        pixels[0][1] = 1;
    if (x1 > xmax)
        pixels[0][2] = 1;
    if (x1 < xmin)
        pixels[0][3] = 1;

    if (y2 > ymax)
        pixels[1][0] = 1;
    if (y2 < ymin)
        pixels[1][1] = 1;
    if (x2 > xmax)
        pixels[1][2] = 1;
    if (x2 < xmin)
        pixels[1][3] = 1;

    for (j = 0; j < 4; j++) {
        if (pixels[0][j] == 0 && pixels[1][j] == 0)
            continue;
        if (pixels[0][j] == 1 && pixels[1][j] == 1) {
            fl = 3;
            break;
        }
        fl = 2;
    }

    switch (fl) {
        case 1:
            line(320 + x1, 240 - y1, 320 + x2, 240 - y2);
            break;
        case 3:
            printf("\n\n\a Line Is Not Visible");
            break;
        case 2:
            m = (y2 - y1) / (x2 - x1);
            xn1 = x1;
            yn1 = y1;
            xn2 = x2;
            yn2 = y2;

            if (pixels[0][0] == 1) {
                xn1 = (float)(x1 + (ymax - y1) / m);
                yn1 = ymax;
            }
            if (pixels[0][1] == 1) {
                xn1 = (float)(x1 + (ymin - y1) / m);
                yn1 = (float)ymin;
            }
            if (pixels[0][2] == 1) {
                yn1 = (float)(y1 + (xmax - x1) * m);
                xn1 = xmax;
            }
            if (pixels[0][3] == 1) {
                yn1 = (float)(y1 + (xmin - x1) * m);
                xn1 = xmin;
            }
            if (pixels[1][0] == 1) {
                xn2 = (float)(x2 + (ymax - y2) / m);
                yn2 = ymax;
            }
            if (pixels[1][1] == 1) {
                xn2 = (float)(x2 + (ymin - y2) / m);
                yn2 = ymin;
            }
            if (pixels[1][2] == 1) {
                yn2 = (float)(y2 + (xmax - x2) * m);
                xn2 = xmax;
            }
            if (pixels[1][3] == 1) {
                yn2 = (float)(y2 + (xmin - x2) * m);
                xn2 = xmin;
            }
            line(320 + xn1, 240 - yn1, 320 + xn2, 240 - yn2);
            break;
    }
}

void cohen() {
    clearviewport();

    printf("Before Clipping");
    line(320 + xmin, 240 - ymin, 320 + xmin, 240 - ymax);
    line(320 + xmin, 240 - ymax, 320 + xmax, 240 - ymax);
    line(320 + xmax, 240 - ymax, 320 + xmax, 240 - ymin);
    line(320 + xmax, 240 - ymin, 320 + xmin, 240 - ymin);
    line(320 + x1, 240 - y1, 320 + x2, 240 - y2);
    getch();
    cleardevice();

    printf("After Clipping");
    line(320 + xmin, 240 - ymin, 320 + xmin, 240 - ymax);
    line(320 + xmin, 240 - ymax, 320 + xmax, 240 - ymax);
    line(320 + xmax, 240 - ymax, 320 + xmax, 240 - ymin);
    line(320 + xmax, 240 - ymin, 320 + xmin, 240 - ymin);

    su_co(x1, y1, x2, y2, xmin, ymin, xmax, ymax);
    getch();
}

void main() {
    int gd = DETECT, gm, i, j;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");

    printf("Enter The Coordinates of The Clipping Window.");
    printf("\nEnter X(min) & Y(min) ");
    scanf("%d%d", &xmin, &ymin);
    printf("\nEnter X(max) & Y(max) ");
    scanf("%d%d", &xmax, &ymax);
    printf("\nEnter The Coordinates Of The Line.");
    printf("\nEnter X(1) & Y(1) ");
    scanf("%d %d", &x1, &y1);
    printf("\nEnter X(2) & Y(2) ");
    scanf("%d %d", &x2, &y2);

    clrscr();
    cohen();
}