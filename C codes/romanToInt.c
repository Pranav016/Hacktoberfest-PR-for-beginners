#include <stdio.h>
#include <string.h>
int romanToInt(char * s){
  int result = 0;
  int len = strlen(s);
  
  char roman[8] = {'I','V','X','L','C','D','M'};
  int romanEq[8] = {1,  5,  10, 50, 100,500,1000};
  int temp1 = 0, temp2 = 0;
  
  for(int i = 0; i < len; i++){
    for(int j = 0; j < 7; j++){
      if(s[i] == roman[j]){
        temp1 = romanEq[j];
        break;
      }
    }
    if(temp2 == 0){
      temp2 = temp1;
    }
    else if(temp2 > temp1){
      result += temp2;
      temp2 = temp1;
    }
    else if(temp2 == temp1){
      result += temp1;
    }
    else if(temp2 < temp1){
      result += (temp1 - temp2);
      temp2 = 0;
    }
    if(i == len - 1 && temp1 == temp2){
      result += temp1;
    }
  }
  return result; 
}

int main()
{
    char s[] = "MCMXCIV";
    printf("%d\n",romanToInt(s));    
    return 0;
}