
#include<stdio.h>
int main(){
int num;
printf("Enter the number 1 to 7:");
scanf("%d",&num);
switch(num){

case 1:
    printf("sunday");
    break;

    case 2:
    printf("Monday");
    break;

    case 3:
    printf("Tuesday");
    break;

    case 4:
    printf("Wednesday");
    break;
    case 5:
    printf("Thursday");
    break;
    case 6:
    printf("Friday");
    break;
    case 7:
    printf("saturday");
    break;
    default:
        printf("Invalid Number");

}



}
