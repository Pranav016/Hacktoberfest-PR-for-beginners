/*a program to read and then calculate the product of two matrices A and B.
NB. Condition to be able to carry out the product of two matrices: the number of columns of the first matrix must be equal to the number of 
rows of the second matrix. So we need two matrices: A of size MxNet B of size NxK. The result matrix C will have the size MxK.*/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	  int n,m,p,k;
	  int i,j;
	  int matrice1[100][100] ,matrice2[100][100],resultat[100][100];
	
	

	
	
	printf("                             ******** calculates product of two matrices ********\n\n\n");
	
	printf("       FIRST MATRICE\n");
	
	do{

	printf("line nember (max=100) :   ");
	
	scanf("%d",&n);
	
		}while(n>100 ||  n<1);
		
		
		do{
	
	printf("colonnes nember (max=100) :   ");
	
	scanf("%d",&m);
	
	  	}while(m>100 ||  m<1);
	
	printf("filling of thematrice\n");
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("value element line [%d]  colonne [%d]  ",i+1,j+1);
			
			scanf("%d",&matrice1[i][j]);
		}
		
			
	}
	

  printf("***********************************************************************************************\n\n");
    
	 	printf("       SECOND MATRICE\n");
	printf("line nember   =    %d\n",m);
	
		do{
	printf("colonnes nember (max=100) :    ");
	
	scanf("%d",&p);
	
	 }while(p>100 ||  p<1);
	 
		printf("filling matrice\n");
	
		for(i=0;i<m;i++){
		
		for(j=0;j<p;j++){
			
			printf("value element line [%d]  colonne [%d]  ",i+1,j+1);
			
			scanf("%d",&matrice2[i][j]);
			
			
		}		
	}
	
	
	
	for (i=0; i<n; i++){
	
     for (j=0; j<p; j++)
         {
          resultat[i][j]=0;
          for (k=0; k<m; k++)
               resultat[i][j] += matrice1[i][k]*matrice2[k][j];
         }
         }
         
         // display
         
         	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("%10d",matrice1[i][j]);
			
		
				
		}
			printf("\n");		
	}
	

         printf("    * \n\n");

          	for(i=0;i<m;i++){
		
		for(j=0;j<p;j++){
			
			printf("%10d",matrice2[i][j]);
			
		
				
		}
			printf("\n");		
	}
	


	printf("    =\n\n");
	
	
	
	         	for(i=0;i<n;i++){
		
		for(j=0;j<p;j++){
			
			printf("%10d",resultat[i][j]);
			
		
				
		}
			printf("\n");		
	}
	
	
	
	
	
	
	
	
	return 0;
}
