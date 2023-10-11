
#include<stdio.h>
int main(){
double number;
printf("Enter the number");
scanf("%d",&number);
if(number>0){
    printf("The number is positive");
}
else if(number<0){
    printf("The number is negative");
}
else{
    printf("The number is 0");
}
return 0;
}
