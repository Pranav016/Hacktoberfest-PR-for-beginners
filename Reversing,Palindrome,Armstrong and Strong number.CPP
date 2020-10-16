/* This program provides the following features :-
    1) Reverse a given number.
    2) Check whether a given number is palindrome number or not.
    3) Check whether a given number is armstrong number or not.
    4) Check whether a given number is circluar number or not.
    5) Generate a palindrome number using the given number(by pre-defined algorithmn).		*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
  void main()
   { int menu,num,rev=0,i,j;
     cout<<"Enter any number ";
     cin>>num;
     cout<<"If you want to reverse the number, press 1\n";
     cout<<"If you want to check whether the number is palindrome or not, press 2\n";
     cout<<"If you want to check whether the number is armstrong or not, press 3\n";
     cout<<"If you want to check whether the number is circular or not, press 4\n";
     cout<<"If you want to generate a palindrome number with it, press 5\n";
     cin>>menu;
      switch (menu)
       { case 1 :  do
		     { i=num%10;
		       rev=(rev*10)+i;
		       num=num/10;
				     } while (num!=0);
		   cout<<"The reverse of the number is "<<rev;
		   break;

	 case 2 :  do
		     { i=num%10;
		       rev=(rev*10)+i;
		       num=num/10;
				     } while (num!=0);
		   cout<<"The reverse of the number is "<<rev<<"\n";
		     if (rev==num)
		       { cout<<"So,it is a Palindrome number ";    }
		     else
		       { cout<<"So,it is not a Palindrome number "; }
		     break;

	 case 3 :  j=num;
		   for ( ;j!=0;j=j/10)
		     { i=j%10;
		       rev=rev+(i*i*i);
				  };
		     if (rev==num)
		       { cout<<"This number is an armstrong number ";   }
		     else
		       { cout<<"This number is not an armstrong number ";  }
		   break;

	 case 4 :  j=num*num;
		   i=num%10;
		   rev=j%10;
		     if (i==rev)
		       { cout<<"This is a circular number ";     }
		     else
		       { cout<<"This is not a circular number ";    }
		   break;

	 case 5 :  do
		     { num=num+rev;
		       num1=num;
		       rev=0;
			do
			   { i=num1%10;
			     rev=(rev*10)+i;
			     num1=num1/10;          } while (num1!=0);
			if (rev==num)
			  { cout<<"The palindrome number is "<<rev;
			    break;                     }
			else
			  { continue;                  }
					    } while (num!=rev);
		   break;

	 default : cout<<"Please enter a number between 1-5 ";
			 }
      getch();
      clrscr();
	    }
