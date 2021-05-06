#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <dos.h>
#include <iostream>

using namespace std;

int main(){
	float x,y,x1,x2,y1,y2,e,i,dx,dy;
	int gd = DETECT, gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	cout<<"Enter the coordinates x1 and y1:"<<endl;
	cin>>x1>>y1;
	cout<<"Enter the coordinates x2 and y2:"<<endl;
	cin>>x2>>y2;
	dx= abs(x2-x1);
	dy = abs(y2-y1);
	e = 2*dy-dx;
	x = x1;
	y = y1;
	i =1;
	do
	{
		if(e>=0)
		{
			x++;
			y++;
			e = e+ 2*(dy-dx);
			putpixel(x,y,14);
		}
		else{
			x++;
			e=e+2*dy;
			putpixel(x,y,14);
		}
		
		i++;
	
	
	
		
	}while(i<=dx);

	getch();
	return 0;
	
}
