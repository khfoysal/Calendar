
#include<stdio.h>
int main(){

 int s1,s2,s3;
 printf("Enter 3 side:");
 scanf("%d %d %d",&s1,&s2,&s3);
  //sum=angle1+angle2+angle3;
   if(((s1+s2)>s3)&&((s1+s3)>s2)&&((s2+s3)>s1)){


    printf("Triangle is valid");
   }
   else{

    printf("Triangle is not valid");
   }

 return 0;

}
