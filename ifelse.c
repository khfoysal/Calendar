
#include<stdio.h>
int main(){

 char  ch;
 printf("Enter the character:\n");
 scanf("%c",&ch);
if (ch>='A' && ch<='Z'){

    printf("%c  is uppercase\n",ch);
 }

 else if(ch>='a' && ch<='z') {
   printf("%c is lower case",ch);
 }
 else{
  printf("%c is not any aphabet\n",ch);
 }
 return 0;

}
