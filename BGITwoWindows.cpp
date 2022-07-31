/* initwindow example with two windows */ 

#include "graphics.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>




int main(void)

{

   int wid1, wid2;

//hello world

   /* initialize graphics windows */

   wid1 = initwindow(400, 300);

   wid2 = initwindow(300, 400);



   /* draw lines */

   setcurrentwindow(wid1);

   line(0, 0, getmaxx(), getmaxy());

   setcurrentwindow(wid2);

   line(0, 0, getmaxx(), getmaxy());



   /* clean up */

   getch();

   closegraph();

   return 0;

}