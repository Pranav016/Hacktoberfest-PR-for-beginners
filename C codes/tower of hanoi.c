#include<stdio.h>

void t(int t,char beg,char aux,char end);
int main(){
	printf("moves\n");
	t(3,'a','b','c');
	return 0; //n=3(no of disks)

}
void t(int n,char beg,char aux,char end){
	if(n==1){
		printf("%c-->%c\n",beg,end);
		
	}
	else{
		t(n-1,beg,end,aux);
		t(1,beg,aux,end);
		t(n-1,aux,beg,end);
	}
}
