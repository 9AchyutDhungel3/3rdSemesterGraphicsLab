#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
    int gd=DETECT,gm;
    initwindow(1280,720);
    //setcurrentwindow(1);
    //initgraph(&gd,&gm,(char*)"");
    circle(320,240,300);
    getch();
    closegraph();
    return 0;
}
