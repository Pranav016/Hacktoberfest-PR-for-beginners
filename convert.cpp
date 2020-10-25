#include<iostream.h>
#include<conio.h>

void toBinary(int num)
{
int n=num;
int r,b[20],i=0;
int d=n;
do
{
r=d%2;
b[i]=r;
i++;
d=d/2;
}
while(d!=0);
cout<<“The binary of “<<n<<” is : “;
do
{
cout<<b[i-1];
i–;
}
while(i>0);
cout<<endl;
}
void toOctal(int num)
{
int n;
n=num;
int i,r,o,b[20];
o=n;
i=0;
do
{
r=o%8;
b[i]=r;
i++;
o=o/8;
}
while(o!=0);
cout<<“\nThe octal of “<<n<<” is : “;
do
{
cout<<b[i-1];
i–;
}
while(i>0);
cout<<endl;
}
void toHexa(int num)
{
int n;
n=num;
int i,r,h;
char hex[20];
h=n;
i=0;
do
{
r=h%16;
if(r==10) hex[i]=’A’;
else if(r==11) hex[i]=’B’;
else if(r==12) hex[i]=’C’;
else if(r==13) hex[i]=’D’;
else if(r==14) hex[i]=’E’;
else if(r==15) hex[i]=’F’;
else hex[i]=’0’+r;
i++;
h=h/16;
}
while(h!=0);
cout<<“\nThe hexa of “<<n<<” is : “;
do
{
cout<<hex[i-1];
i–;
}
while(i>0);
cout<<endl;
}
void main()
{
clrscr();
int d,choice;
char ch;
do
{
cout<<“Enter Decimal number : “;
cin>>d;
cout<<“Enter your choice : \n”;
cout<<“1. To Binary \n”;
cout<<“2. To Octal \n”;
cout<<“3. To Hexa \n”;
cout<<“4. All \n”;
cin>>choice;

switch(choice)
{
case 1:
//for binary
toBinary(d);
break;
case 2:
//for octal
toOctal(d);
break;
case 3:
//for hexa
toHexa(d);
break;
case 4:
//for binary
toBinary(d);

//for octal
toOctal(d);

//for hexa
toHexa(d);
break;
}

cout<<“\nDo you want to continue ? (Y/N)”;
cin>>ch;
}
while(ch==’Y’ || ch==’y’);
getch();
}
