#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int Gd=DETECT,Gm;
int input,xaxis=0,yaxis=0,radii=3;

void object()
	{
		circle(xaxis,yaxis,radii);
	}
void move()
	{
		if (input==77)
			{
				xaxis=xaxis+6;
				if (xaxis>640)
					xaxis=640;
			}
		if (input==75)
			{
				xaxis=xaxis-6;
				if (xaxis<0)
					xaxis=0;
			}
		if (input==80)
			{
				yaxis=yaxis+6;
				if (yaxis>480)
					yaxis=480;
			}
		if (input==72)
			{
				yaxis=yaxis-6;
				if (yaxis<0)
					yaxis=0;
			}
	}
void color()
	{

		if (input=='a'||input=='A')
			{
				move();
				setcolor(BLACK);
			}
		if (input=='b'||input=='B')
			{
				move();
				setcolor(BLUE);
			}
		if (input=='c'||input=='C')
			{
				move();
				setcolor(GREEN);
			}
		if (input=='d'||input=='D')
			{
				move();
				setcolor(CYAN);
			}
		if (input=='e'||input=='E')
			{
				move();
				setcolor(RED);
			}
		if (input=='f'||input=='F')
			{
				move();
				setcolor(MAGENTA);
			}
		if (input=='g'||input=='G')
			{
				move();
				setcolor(BROWN);
			}
		if (input=='h'||input=='H')
			{
				move();
				setcolor(LIGHTGRAY);
			}
		if (input=='i'||input=='I')
			{
				move();
				setcolor(DARKGRAY);
			}
		if (input=='j'||input=='J')
			{
				move();
				setcolor(LIGHTBLUE);
			}
		if (input=='k'||input=='K')
			{
				move();
				setcolor(LIGHTGREEN);
			}
		if (input=='l'||input=='L')
			{
				move();
				setcolor(LIGHTCYAN);
			}
		if (input=='m'||input=='M')
			{
				move();
				setcolor(LIGHTRED);
			}
		if (input=='n'||input=='N')
			{
				move();
				setcolor(LIGHTMAGENTA);
			}
		if (input=='o'||input=='O')
			{
				move();
				setcolor(YELLOW);
			}
		if (input=='p'||input=='P')
			{
				move();
				setcolor(WHITE);
			}
	}
void background()
	{
		if (input=='1')
			setbkcolor(BLACK);
		if (input=='2')
			setbkcolor(BLUE);
		if (input=='3')
			setbkcolor(GREEN);
		if (input=='4')
			setbkcolor(CYAN);
		if (input=='5')
			setbkcolor(RED);
		if (input=='6')
			setbkcolor(MAGENTA);
		if (input=='7')
			setbkcolor(BROWN);
		if (input=='8')
			setbkcolor(LIGHTGRAY);
	}
void main()
	{
		clrscr();
		initgraph(&Gd,&Gm,"C://TC//BGI");
		for (int i=0; ;i++)
			{
				circle(xaxis,yaxis,radii);
				input=getch();
				color();
				background();
				if (input==27)
					break;
				if (input=='z')
					radii++;
				if (input=='x')
					radii--;
			}
		getch();
	}
