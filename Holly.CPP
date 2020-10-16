#include<iostream.h>
#include<iomanip.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
 void main()
  { char arr[100],arr1[100],str[]="HOLLYWOOD",a;
    const char str1[]="HOLLYWOOD";
    int i,j,count,b=0,flag,flag1=0,s,n=0;
    cout<<"\t  ********* THE CLASSIC HOLLYWOOD-BOLLYWOOD GAME *********\n\n";
    cout<<"GAME RULES :\n\n";
    cout<<"1) One player will type the name of movie and other will guess it\n";
    cout<<"2) The maximum length of movie can be 100\n";
    cout<<"3) Press .(full stop) to stop entering the movie\n";
    cout<<"4) Spaces should be entered between words which will be replaced with /\n";
    cout<<"5) Do not press enter for input\n";
    cout<<"6) The guesser may at most have 9 incorrect guesses\n";
    cout<<"7) Every wrong guess will replace one letter from HOLLYWOOD/BOLLYWOOD with guessed letter\n";
    cout<<"8) Please go ahead and enjoy\n\n";
    cout<<"Enter any movie ";
    for (i=0;i<100;i++)
       { arr[i]=getch();
	  if (arr[i]=='.')
	    { flag=i;
	      break;       }
	  cout<<"*";            }
    cout<<endl;
    for (j=0;j<flag;j++)
       { if (arr[j]=='a' || arr[j]=='e' || arr[j]=='i' || arr[j]=='o' || arr[j]=='u')
	   { arr1[j]=arr[j];
	     cout<<arr[j]<<" ";     }
	 else if (arr[j]==' ')
	   { arr[j]=arr1[j]='/ ';
	     cout<<"/ ";       }
	 else
	   { arr1[j]='_';
	     cout<<"_ ";       }      }
    cout<<"\n";
    for (i=0;i<100;i++)
       { cout<<"Enter the letter ";
	 cin>>a;
	 clrscr();
	 cout<<"\t  ********* THE CLASSIC HOLLYWOOD-BOLLYWOOD GAME *********\n\n";
	 cout<<"GAME RULES :\n\n";
	 cout<<"1) One player will type the name of movie and other will guess it\n";
	 cout<<"2) The maximum length of movie can be 100\n";
	 cout<<"3) Press .(full stop) to stop entering the movie\n";
	 cout<<"4) Spaces should be entered between words which will be replaced with /\n";
	 cout<<"5) Do not press enter for input\n";
	 cout<<"6) The guesser may at most have 9 incorrect guesses\n";
	 cout<<"7) Every wrong guess will replace one letter from HOLLYWOOD/BOLLYWOOD with guessed letter\n";
	 cout<<"8) Please go ahead and enjoy\n\n";
	 s=0;
	 for (j=0;j<flag;j++)
	    { if (a==arr[j])
		{ arr1[j]=arr[j];  s++;  }     	 }
	 if (s==0)
	   { str[n]=a;  n++;    }
	      for (int k=0;k<flag;k++)
		 cout<<arr1[k]<<" ";
	      cout<<endl;
	      for (int l=0;l<flag;l++)
		 { b=0;
		   if (arr[l]==arr1[l])
		     { b=1;
		       continue;       }
		   else if (b==0)
		     { break;     }       }
	      cout<<"\t\t";
	      for (int x=0;str[x]!='\0';x++)
		 cout<<str[x]<<" ";
	      cout<<endl;
	      if (b==1)
		{ cout<<"\nYou won the game!!!";
		       break;	 }
	      flag1=0;
	      for (int m=0;m<=9;m++)
		 { if (str[m]!=str1[m])
		     ++flag1;            }
	      if (flag1>=9)
		{ cout<<endl;
		  cout<<"Sorry!! Chances over!!!\n";
		  cout<<"The movie was :\n\t\t";
		  for (int f=0;f<flag;f++)
		     { if (arr[f]=='/')
			 { arr[f]=' ';   }
		       cout<<arr[f];              }
		  break;       	         }                 }
     getch();
     clrscr();
	   }