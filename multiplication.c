#include<stdio.h>
int main(){

int num;
printf("Enter the value of number:");
scanf("%d",&num);
int count=1;
while(count<=10){
        int product=count*num;
    printf("%d*%d =%d\n",num,count,product);
    count=count+1;
}
return 0;

}
