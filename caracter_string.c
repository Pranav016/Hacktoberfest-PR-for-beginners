/*
This program receives any chain no matter how many spaces separate the words, rewrites the words one by one and counts them
*/
#include <stdio.h>
#include <stdlib.h>




int taille (char s[200]){        
	while (s[i]!='\0'){i++;
	}
	return i ;
	
}

int effacer (char ch[]){
	

	int a,i=0,j,k;
     
    a=taille(ch) ;
     
    for(i=0;i<a;i++){
    	if(ch[i]==' ') { j=i+1 ;   

		 while(ch[j]==' ')      {
    	
    	for(k=j;k<a;k++){
    		
    		ch[k]=ch[k+1];
    		
	                  	}
    	a--;
	                            }
	
	i++;
  	
    		
		}
	} return(ch);
}







int main(int argc, char *argv[]) {
	
	char phrase[200];
	

	int i,c,k,r;
	
	printf("enter the character string\n");gets(phrase);printf("\n");
	phrase[200]=effacer(phrase);
	
	r=taille(phrase);
	
	i=0;
	while(phrase[i]==' ' &&  i<=r){
		
		i++;
	}
	
	c=0;k=i;
		
		
	while(k<=r)	{
     
		
		
	while(phrase[k]!=' ' && k<=r  ){
		
		printf("%c",phrase[k]);
	k++;
	}	
	
	printf("\n\n")	;
	k++;c++	;	
	}
	if (phrase[r-1]==' '){c=c-1;}
	printf ("the words nember is %d",c);
	
	
	
	return 0;
}
