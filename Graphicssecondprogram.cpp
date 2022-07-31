#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void disp();
float x,y;
int xc, yc;
int main()
{
    int gd=DETECT, gm;
    int rx, ry;
    float p1, p2;

    initgraph(&gd,&gm,(char*)"");
    printf("Enter the centre of the circle");
    scanf("%d%d",&xc,&yc);
    printf("Enter the value of Rx and Ry");
    scanf("%d%d",&rx,&ry);
    x=0;
    y=ry;
    disp();
    p1=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
    while(2.0*(ry*ry*x)<(2.0*rx*ry*y))
    {
        x++;
        if(p1<=0)
        {
            p1=p1+(2.0*ry*ry*x)+ry*ry;
            x=x+1;
        }
        else
        {
            p1=p1+(2.0*ry*ry*x)+ry*ry-(2.0*rx*rx*y);
            x=x+1;
            y=y-1;
        }
        disp();
    }
    x=rx;
    y=0;
    disp();
    p2=(ry*ry)-(rx*rx*ry)+((rx*rx)/4);
    while(2.0*(ry*ry*y)<(2.0*rx*ry*x))
    {
        y++;
        if(p2<=0)
        {
            p2=p2+(2.0*ry*ry*y)+ry*ry;
            y=y+1;
        }
    
        else
        {
            p2=p2+(2.0*ry*ry*y)+ry*ry-(2.0*rx*rx*x);
            y=y+1;
            x=x-1;
        }
        disp();
    }
    getch();
    closegraph();

}
void disp()
{
    putpixel(xc+x,yc+y,WHITE);
    putpixel(xc-x,yc+y,WHITE);
    putpixel(xc+x,yc-y,WHITE);
    putpixel(xc-x,yc-y,WHITE);
    putpixel(xc+y,yc+x,WHITE);
    putpixel(xc-y,yc+x,WHITE);
    putpixel(xc+y,yc-x,WHITE);
    putpixel(xc-y,yc-x,WHITE);
}