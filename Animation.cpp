#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>


int main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	int i,j ,x, y,rhx,rhy;
	for(i = 0;i<500;i+=5)
	{
		line(20,380,580,380);
		if(i%2==0)
		{
			line(25+i,380,35+i,340);
			line(45+i,380,35+i,340);
			line(35+i,310,35+i,340);
		
		}
		else//hand moving hence and forth
		{
			line(35+i,380,35+i,340);
			line(35+i,310,40+i,330);
		}
		line(35+i,340,35+i,310);//body while moving
		circle(35+i,300,10);//face
		line(35+i,310,50+i,330);//hand holding umbrella
		line(50+i,330,50+i,280);//vertical line of umbrella
		line(15+i,280,85+i,280);//horizontal line of umbrella
		arc(50+i,280,0,180,33);//upper part of umbrella
		arc(55+i,330,180,0,5);//handle of umbrella
		
		//rain
		rhx = getmaxx();
		rhy = getmaxy();
		
		for(j=0;j<100;j++)
		{
			outtextxy(i,rand() % 100 +i,"|");
			setcolor(WHITE);
		}
		
		delay(150);
		cleardevice();
		
	}
	getch();
	return 0;
}
