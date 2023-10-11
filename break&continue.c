
#include<stdio.h>
int main(){
  while(1){
    int num;
    printf("Enter a num:");

    scanf("%d",&num);
    if(num>=0){
            printf("positive number");
        break;
    }
    if((num <0)  && (num%2)==0){
        printf("Negative Even");
        break;

    }
    if((num<0)&& (num%2)!=0){

    }
    printf("%d\n",num);


  }
    return 0;

}
