#include<graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, "C:\\TurboC3\\BGI");
    circle(300,300,50);
    closegraph();
    getch();
}
