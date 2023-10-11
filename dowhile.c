
#include<stdio.h>
int main(){
int count=10;
int num;
printf("Enter the value of number:");
scanf("%d",&num);
do{
int result=num*count;
printf("%d*%d=%d\n",num,count,result);
count =count-1;

}
while(count>=1);
return 0;
}
