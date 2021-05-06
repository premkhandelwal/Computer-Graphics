#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
	float x,y,x1,y1,x2,y2,dx,dy,step;
	int i, gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	cout<<"Enter the coordinates of first point(x1 and y1):";
	cin>>x1>>y1; 
	cout<<"Enter the coordinates of second point(x2 and y2):";
	cin>>x2>>y2;	
	dx = x2 - x1;
	dy = y2 - y1;
	if(abs(dx)>=abs(dy))
	{
		step = abs(dx);
	}		
	else
	{
		step = abs(dy);
	}
	dx = dx/step;
	dy = dy/step;
	x = x1;
	y = y1;
	i = 1;
	while(i<=step)
	{
		putpixel(x,y,15);
		x = x+dx;
		y = y+dy;
		i = i+1;
	}
	
	getch();
	return 0;
}
