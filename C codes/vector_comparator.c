/*
Name: 'AlexMoonP'
Github: 'https://github.com/AlexLunaP'
Problem: 'Compare two vectors.'
Description: 'This program uses recursion to find out if two vectors are equal.'
Explanation: 'Each iteration of function "compare_vectors" checks if both vectors have the same index, otherwise vectors are not equal. If vectors have the same index, then values are compared, if they are equal then the index is increased and "compare_vectors" is called recursively.'   
Language: 'C'
*/

#include <stdlib.h>
#include <stdio.h>
int compare_vectors(int v[], int t[], int n, int i){
	if(i==n-1){
		if(v[i]==t[i]){
			return 1;
		}
		else{
			return 0;
			exit(-1);
		}
	}
	else{
		if(v[i]==t[i]){
			i++;
			return compare_vectors(v, t, n, i);
		}
		else{
			return 0;
			exit(-1);
		}
	}
	return 1;
}
int main(){
	int v[]={1,2,4};
	int t[]={1,2,4};
	int n=3;
	int i=0;
	if(compare_vectors(v, t, n, i)==1){
		printf("Vectors are equal\n");
	}
	else{
		printf("Vectors are not equal\n");
	}
	return 0;
}