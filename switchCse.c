
#include<stdio.h>
int main(){
int num;
printf("Enter the number:");
scanf("%d",&num);
switch(num){

case 1:
    printf("january");
    break;

    case 2:
    printf("February");
    break;
    case 3:
    printf("March");
    break;

    case 4:
    printf("April");
    break;
    case 5:
    printf("May");
    break;

    case 6:
    printf("June");
    break;
    case 7:
    printf("july");
    break;

    case 8:
    printf("Augst");
    break;
    default:
        printf("Unvalid");

}

return 0;

}
