/*
Author: chamod dananjaya
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int day;
    char month[20];
    int year;
}date;

typedef struct{
    char name[100];
    int age;
    char university[50];
    date birthdate;
    char sex[20];
}student;

void main()
{
    FILE *ptr,*ptr1;
    ptr=fopen("fwrite.dat","w");
    ptr1=fopen("fwrite.dat","r");
    int num;
    printf("enter number of students: ");
    scanf("%d",&num);

    student students[num],stread[num];

    student input(student [],int );
    student filewrite(student [],int,FILE *);
    student fileread(student [],int,FILE *);

    input(students,num);
    filewrite(students,num,ptr);
    fclose(ptr);

    fileread(stread,num,ptr1);


    fclose(ptr1);

}
student input(student students[],int num)
{
    for(int i=0;i<num;i++){
        printf("Name: ");
        scanf(" %[^\n]",students[i].name);
        printf("Age: ");
        scanf("%d",&students[i].age);
        printf("University: ");
        scanf("%s",students[i].university);
        printf("Birthday, \n\tDay: ");
        scanf("%d",&students[i].birthdate.day);
        printf("\tMonth: ");
        scanf("%s",students[i].birthdate.month);
        printf("\tYear: ");
        scanf("%d",&students[i].birthdate.year);
        printf("Sex: ");
        scanf("%s",students[i].sex);
        printf("\n\n");
    }
    printf("----------------------------\n\n");
}

student filewrite(student students[],int num,FILE *ptr)
{
    fwrite(&students,sizeof(student),num,ptr);
}

student fileread(student stread[],int num,FILE *ptr1)
{

    for(int i=0;i<num;i++){

        fread(&stread,sizeof(student),num,ptr1);
        printf("Name: %s\n",stread[i].name);
        printf("Age: %d\n",stread[i].age);
        printf("University: %s\n",stread[i].university);
        printf("Birthday, \n\tDay:\n ",stread[i].birthdate.day);
        printf("\tMonth: %s\n",stread[i].birthdate.month);
        printf("\tYear: %d\n",stread[i].birthdate.year);
        printf("Sex: %s\n\n",stread[i].sex);

    }
}
