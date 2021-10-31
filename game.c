/*the hidden number guessing game. Initialize an integer d to any value then display to the user a message
 find the hidden number in the interval: give an interval to help. Then at each new proposal of the user; answer: found; or
answer: found; or too small, too big, also allow thanks to the loops, a certain number of tries to the user then
too small or too hight at the end displayed the hidden number.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//PARTIE DECLARATION
	
	int i,x;
	
	
	//PARTIE INSTRUCTION
	printf("enter a nember\n");
	
	scanf("%d",&x);
	
	printf("the multiplication table of %d is \n",x);
	
	
	for(i=1;i<10;i++){
		
		printf("%d * %d = %d\n",x,i,x*i);
		
	}
	
	
	
	
	return 0;
}




