/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int f{0},c;
 while(f<=300)
 {
     c=(5*(f-32))/9;
     cout<<f<<" "<<c<<endl;
     f=f+20;
 }
    return 0;
}
