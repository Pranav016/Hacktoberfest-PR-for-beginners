/*Let M be a matrix of integers M of size NxN, M has the particularity to contain many null values (hollow matrix). These insignificant data (boxes) occupy memory anyway at the level of the matrix. The goal of this project is to use chained lists to represent the elements of the matrix M without representing the null values in order to save space.

Task: You are asked to extract a list from the matrix M

Explanation of the structure: the vertical list represents the list of rows and each element of this list contains a pointer to a horizontal list containing the columns of the current row i with non-zero values.
Example : The structure above is built from the following matrix M of size 3x3:


M :  0    10    15
     12    0    16
     0     0    12
1-Give the structures (records) needed to make this list of lists.
2-Implement a function that displays this list of lists (think of a simple way of representation).
3-Implement a function liberateList (list * l) which allows to delete all the structure created. Use this function at the end of the program.
4-Write a function int getVal(List *l, int i, int j) which allows to return the value of the cell (i,j) of the matrix from the list. Treat the particular cases : i and j are not valid (values higher than M or negative values), the case where the element (i,j) does not exist in the whole list, it means that this element is worth 0 so return 0.
5-Implement a main program which starts by entering the elements of the matrix then create the list of lists from the matrix, display the list, call the getVal function to display the values of some elements according to the user's input. Delete (the list) before leaving the program.


*/

#include<stdio.h>
#include<stdlib.h>
#define N 3


typedef struct elementf{
	
	int i;
	int j;
	int val;
	struct elementf *suiv;
	
	
	
	
}elementf;





typedef struct elementp{
	
	int i;
	struct elementf *suivf;
	struct elementp *suivp;
	
	
	
}elementp;




//   FONCTION DISPLAY

void affiche (elementp* nega){
	
	int i,j;
	elementf* yaa;
	
	for(i=0;i<N;i++){
		
		yaa=nega->suivf;
		
		for(j=0;j<N;j++){
			
			if(yaa== NULL || i!=yaa->i||j!=yaa->j){
				
			printf("[%d,%d]=0 \n",i,j)	;
				
			}else{
				printf("[%d,%d]=%d \n",i,j,yaa->val);yaa=yaa->suiv;
				
			}
			
	}
	nega=nega->suivp;
	}
	
	
	
}


//////////////       THE FUNCCTION GETVAL

int getval(elementp *nega){
	
	int i,j,con=0;
	elementf *yaa;
	
	
	do{

	printf("enter the line number \n");
	
	scanf("%d",&i);
	
		}while(i<0 || i>N-1) ;
	
	
	
	do{

	printf("entrer le num colonne \n");
	
	scanf("%d",&j);
	
		}while(j<0 || j>N-1) ;
	
	
	while(nega!=NULL &&con==0){
		yaa=nega->suivf;
		
		while(yaa!=NULL && con==0){
	
		
		if(yaa->i==i && yaa->j==j){printf("[%d,%d]= %d \n",i,j,yaa->val);con=1;}
       else yaa=yaa->suiv     ;          		
}	


nega=nega->suivp;

}
	
	
	if(con==0){printf("[%d,%d]= 0 \n",i,j);
	}
	
}







/////////////      free function


void liberer(elementp *nega ){
	
	elementp* p;
	elementf* q,*k;
	
	printf("liste free \n");
	
	
	while(nega!=NULL){
		
		k=nega->suivf;
		
		while(k!=NULL){
			
			q=k;k=k->suiv;free(q);	
		}
		
		nega=nega->suivp;
		
	}
	
	
	
	
}
             
             
             
             
             
             
             
             
             
             
             
             
             
             











int main(void){


	
	int tab[N][N];
	int i,j;
	
	
	printf("Entering the matrix \n");
	
	
	for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				
				
					printf("enter the value of the [%d,%d] element\n ",i+1,j+1);
		scanf("%d",&tab[i][j]);
	}
	}
	
	
	///////////////     LISTE creation
	
	int boom=0;
	elementp *tete=NULL,*p=NULL,*q=NULL;
	
	elementf *toto=NULL,*a=NULL,*b=NULL;
	
	
	
		for(i=0;i<N;i++){
			
			q=malloc(sizeof(elementp));
			q->i=i;
			q->suivf=NULL;
			q->suivp=NULL;
			
			if(i==0){ tete=q;p=q;}
			else {
			p->suivp=q;p=q;}
			
			boom=0;
			
			for(j=0;j<N;j++){
			
			if(tab[i][j]!=0){
		
				
			a=malloc(sizeof(elementf));
			a->i=i;
			a->j=j;
			a->suiv=NULL;
			a->val=tab[i][j];
			
			
			if(boom==0){p->suivf=a;b=a;boom=1  ;     }
			else{b->suiv=a;b=a;	}
			
			
		}		
			
	}
	
	
	}
	
	
	
	
	affiche(tete);
	            
	getval(tete);
	
	
	liberer(tete);
	
	printf("dislay after free \n\n\n");
	
		affiche(tete);
		
		
		
	return 0;
}








