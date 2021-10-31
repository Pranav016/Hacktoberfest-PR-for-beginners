/*a c program that allows to create and manage an electronic phone book using the following structure : Contact {position : integer, name : string, first name : string, Tel : string}. Position is a sequence number (integer) indicating the position of a contact in the directory (order according to the entry).
-Enter n contacts and save them in a binary file "directory.dat".
-Display a menu allowing you to:
-read the file and display all contacts.
-calculate the size of the file in bytes (ftell and fseek functions)
-calculate the number of contacts already saved in the file.
-Add a new contact at the end of the file: implement a void function ajoutFin(Contact c, FILE * f) (bring the cursor back to the end with fseek then add the contact c already entered with the keyboard). Be careful to assign the position (position = number of contacts already recorded +1).
- Sequential search with name+first name: implement a function int rechercheContact(char [] name, char[] first name, FILE * f) which performs a sequential search for a contact using its name+first name in order to display its phone number. If the contact exists in the directory, display all its details and return the position of the searched contact in the file, otherwise display a message contact not found and return -1.
-Search by order number: Direct access to a record in the file by indicating its order number (which is also its position in the file!) also deal with the case of error or the given position does not exist in the file (to know it count the number of records in the file). Use the fseek function for that then fread to read the record and also sizeof(contact) . The function to implement : Contact accesDirect(int numero, FILE * f) ; in case of error return an empty contact.
-Modify the phone number of a given user: First search for the user by name+first name or by position in the file, then read the record in a variable of type contact, modify the number and then rewrite the record (be careful with the cursor! it must be placed where it is needed).

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact{
    
    int pos;
    char nom[20],prenom[20], tel[20];

}contact;


// recolting informations

contact saisi (void){
	
	contact e;
	
	printf("enter the first name\n");fgetc(stdin);
	gets(e.nom);
	
		printf("enter the last name\n");
	gets(e.prenom);
	
		printf("enter the phone nember \n");
	gets(e.tel);
	
	
	return e;
	
}


//  display function


	void affich(contact c){
		
		
		printf("the first name is : %s\n\n",c.nom);
		printf("the last name is : %s\n\n",c.prenom);
		printf("the phone nember is : %s\n\n",c.tel);
		printf("la position du contact est : %d\n\n",c.pos);
			
		
	}














//function add a contacte in the end of the file

void ajouter_en_fin(contact c ,FILE*f) {       // I DID NOT USE THIS FUNCTION BECAUSE IT IS EASIER TO DO THE INSTRUCTIONS IN THE ALGORITHM
	
	fseek(f,0,SEEK_END);
	
	fwrite(&c,sizeof(contact),1,f);
	
	
}




//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




// search and modify function

void modifiernumtel(char n[],char p[],char tell[],  FILE * f){
	

contact o; int m;


if(f==NULL){printf("ERREUR"); return;}

else{int trouve=0;

    fseek(f,0,SEEK_SET); 

    while(!feof(f) && !trouve){

    fread(&o,sizeof(contact),1,f);
	 
    if(strcmp(o.nom,n)==0 && strcmp(o.prenom,p)==0){puts("contact localized  !\n");
    
    m=sizeof(contact);m=-m;

    strcpy( o.tel,tell); fseek(f,m,SEEK_CUR);       

        fwrite(&o,sizeof(contact),1,f); 

        trouve=1;

    }

    }

    if(!trouve); else printf("modification of the nember done \n");



}

};







// searching fonction******************************

 void recherche(char n[] , char p[], FILE * f)
{
	contact h;  int trouv=0;
	
	while (!feof(f) && trouv==0){
		
		fread(&h, sizeof(contact),1,f);
		
		if(strcmp(h.nom,n)==0 && strcmp(h.prenom,p)==0){
			
			printf ("contacte bien found\n\n"); trouv=1;
			
			 affich(h);
			
		} 
		
	}
	
	if( trouv==0 ){ printf("contact not found \n\n");}
	
	
	
	
}


  // function for searching for a contact in a derect way **********************
  contact accesDirect(int num, FILE * f) {
  	
  	num=num-1;
  	
  	num = num*sizeof(contact);
  	fseek(f,num,SEEK_SET);
  	
  }















int main(void) {             //  ***********************************************************MAIN FONCTION



  int n,y,i,condition_de_repitition,choisire_une_option; 
  
  contact tel,t;
  
  FILE *fic=fopen("annuaire.dat","wb+");


    if(fic==NULL) { 
    exit(99);
    }


  do{

printf("enter the number of contacts to rejister\n");

scanf("%d",&n);

  }while(n<1);


for(i=0;i<n;i++){
	
	printf("Received information from the %d element\n",i+1);
	
       tel= saisi();
       
       tel.pos=i+1;
       
       
       fwrite(&tel,sizeof(contact) ,1,fic);
       
       
}

     do {                              
	 condition_de_repitition=8;
	 choisire_une_option=11;
	 
	 
	 
	do{
   printf ("choose\n 0 to display \n 1 for the calculation of the file size and the number of elements \n 2 to register a new contact  \n 3 to search for a contact with name and surname\n 4 for the search of a contact of manier derct (enplacement) \n 5 for the modification of a contact  \n\n");                  
   scanf("%d",&choisire_une_option);
   	}while(choisire_une_option!=0 && choisire_une_option!=1 && choisire_une_option!=2 && choisire_une_option!=3 && choisire_une_option!=4 && choisire_une_option!=5);
   
   
   switch(choisire_une_option){
  
   
   case 0:
  // display of all elements 

 fseek(fic,0,SEEK_SET); y=1;
    while(feof(fic)==0){
	
	fread(&tel,sizeof(contact),1,fic);
	
	if(y<=tel.pos){   // this condition is to avoid repetition in the display of the last element

	
	printf("contacte information %d \n\n",y);
	
	affich(tel);
	y++;
		};
	}
 
 

 
 break;
 
 case 1 :
 // size file
 
 
 
 
 fseek(fic,0,SEEK_END);int taille;

taille=ftell(fic);

if(taille==-1){perror("ftell:");}
else{

printf("the file size in bytes is: %d\n",taille);
taille=taille/sizeof(contact);

printf("the's' %d contacte in the file !\n",taille);
}
 
 
 break;
 
 
 case 2:
 
 // enter new contacte
 
 
 
 printf("entrer les information du contacte a ajouter\n");
 
 t=saisi(); t.pos=i+1;i=i+1;
 
 fclose(fic);
 
 fic=fopen("annuaire.dat","ab+");                                      
 
 //add in the end
 
 fwrite(&t,sizeof(contact),1,fic); 
 
 
 
 fclose(fic);
 
 
 fic=fopen("annuaire.dat","rb+");                                          // licture mode
 
                         
 
 printf("display after you add\n");
 
 
 fseek(fic,0,SEEK_SET);  y=1;
    while(feof(fic)==0){
	
	fread(&tel,sizeof(contact),1,fic);
	
	if(y<=t.pos){

	
	printf("the information of the %d contacte \n\n",y);
	
	affich(tel);
	y++;
		}
	}
	
	 
	break;
	
	
	
	
	
	
	case 3 :
	
 
   // contacte search first and last name
   
   
   
  fseek(fic,0,SEEK_SET); 
  
 char nn[30],pp[30];
 
 printf("contacte search\n\n entar the first nam \n\n");gets(nn); gets(nn);
 
 printf("enter the last name\n\n") ;gets(pp);
 
  recherche(nn,pp,fic);
 
break;


case 4:

 // contacte searsh (derect way)
 
 

 
fseek(fic,0,SEEK_END); int g,p; contact toto;

g=ftell(fic);

if(g==-1){perror("ftell:");}
else{

g=g/sizeof(contact);


}
 
do{

printf("enter the position of the contact you want to search\n\n"); 

scanf("%d",&p);

if (p<1 || p>g){printf ("this position does not existe\n\n");}

}while (p<1 || p>g); 



accesDirect(p,fic);


	fread(&toto,sizeof(contact),1,fic);
	
	printf("contacte information\n\n");  
	
	affich(toto);
	
           
break;


case 5 :



  // contacte search and namber modificaatuin
  
  	
  fclose(fic);
  
  int gg=5; contact zmin; char t4[30];
  
   fic=fopen("annuaire.dat","rb+");
   
  do{
  
  	
  	printf("enter the contact search method for modification\n 0 for the search with name + surname \n 1 for the potsition searsh\n\n");
  	
	  scanf("%d",&gg);
  	
  }while(gg!=0 && gg!=1);







switch(gg){
	
	case 0:   fseek(fic,0,SEEK_SET);
  
 char nn[30],pp[30];
 
 printf("contacte search\n\n enter the first name\n\n");gets(nn); gets(nn);
 
 printf("enter the laste name\n\n") ;gets(pp);
 
  printf ("enter the new phone nember\n\n");
     
     gets(t4);
 
    recherche(nn,pp,fic);
    
     
     
     
      modifiernumtel(nn,pp,t4,fic);
      
      
      // display after modification
     
     printf("display of contacts after modification\n\n");
     
      fseek(fic,0,SEEK_SET); int y=1;
    while(feof(fic)==0){
	
	fread(&tel,sizeof(contact),1,fic);
	
	if(y<=tel.pos){   // this condition is to avoid repetition in the display of the last element

	
	printf("contacte information  %d \n\n",y);
	
	affich(tel);
	y++;
		};
	}
 
    
		break;
		
		
		
	
	///////////////////////////////////////////// derect modification
		
		
		
		case 1: 
		

 
fseek(fic,0,SEEK_END); 	int m,g,p; contact toto; char ntel[30];

g=ftell(fic);

if(g==-1){perror("ftell:");}
else{

g=g/sizeof(contact);


}
 
do{

printf("enter the position of the contact you want to modify\n\n"); 

scanf("%d",&p);

if (p<1 || p>g){printf ("position not found in the file\n\n");}

}while (p<1 || p>g); 



accesDirect(p,fic);


	fread(&toto,sizeof(contact),1,fic);
	
	printf("contacte information \n\n");  
	
	affich(toto);
	
           
           printf("enter the new nember\n\n");
           
           gets(ntel) ;gets(ntel);
           
          
             m=sizeof(contact);m=-m;

    strcpy( toto.tel,ntel); fseek(fic,m,SEEK_CUR);       

        fwrite(&toto,sizeof(contact),1,fic); 
        
        
        
        // display  after modification

             printf("display of contacts after modification\n\n");
     
      fseek(fic,0,SEEK_SET); y=1;
    while(feof(fic)==0){
	
	fread(&tel,sizeof(contact),1,fic);
	
	if(y<=tel.pos){   // this condition is to avoid repetition in the display of the last element

	
	printf("contacte information  %d \n\n",y);
	
	affich(tel);
	y++;
		};
	}
 
     
			
			break;	
	
}


  break;

     }

do{

printf("continue to proceed ? \n 0 for yes 1 for no\n\n");

scanf("%d",&condition_de_repitition);
}while(condition_de_repitition!=1 && condition_de_repitition!=0);

    
    

      }while (condition_de_repitition==0);

  fclose(fic);
	return 0;
}





