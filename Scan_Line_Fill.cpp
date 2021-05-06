#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
using namespace std;

int main()
{
	int gd = DETECT,gm,n,i,j,k,dy,dx;
	int ymax=0;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	float slope[20];
	int x,y,temp;
	int p[20][2],xi[20];
	
	cout<<"no Of vertices of polygon:";
	cin>>n;
	cout<<"ENter coordinate of polygon:";
	for(i=0;i<n;i++){
		cout << "x" << i<<"y"<<i<<": ";
		cin>>p[i][0]>>p[i][1];
		if(p[i][1]>ymax)
			ymax=p[i][1];
	}
	p[i][0] = p[0][0];
	p[i][1] = p[0][1];
	for(i=0;i<n;i++)
	{
		line(p[i][0],p[i][1],p[i+1][0],p[i+1][1]);
		
	}

	for(i=0;i<n;i++)
	{
		dy = p[i+1][1] - p[i][1];
		dx = p[i+1][0] - p[i][0];
		if(dy == 0)
		{
			slope[i] = 1;
		}
		if(dx == 0)
		{
			slope[i] = 0;
		}
		if(dy != 0 && dx!=0)
		{
			slope[i] = (float) dx/dy;
		}
	}
	for(y=0;y<480;y++)
	{
		k = 0;
		for(i=0;i<n;i++){
			if(((p[i][1] <=y) && (p[i+1][1]>y)) || ((p[i][1]>y) && (p[i+1][1]<=y)))
			{
				xi[k] = (int)(p[i][0] + slope[i]*(y-p[i][1]));
				k++;
			}

		}
		
	
	for(j=0;j<k-1;j++)
	
			for(i=0;i<k-1;i++){
				if(xi[i]>xi[i+1])
				{
					temp = xi[i];
					xi[i] = xi[i+1];
					xi[i+1] = temp;
				}
			}
		
		
		
		setcolor(2);
		for(i=0;i<k;i+=2){
			line(xi[i],y,xi[i+1],y);
			delay(20);
		}

	
}
	getch();
	return 0;
	
}
