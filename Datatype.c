
#include<stdio.h>
int main(){
    printf("Hello World\n");
    int age=25;
    printf("Age:%d\n",age);

    age=31;
    printf("new Age:%d\n",age);

    //Assign variable to another variable
    int firstnumber=45;
    printf("firstnumber =%d\n",firstnumber);
     int secondnumber=firstnumber;
     printf("secondnumber=%d\n",secondnumber);

     //Declaring Multiple Variables at once


     //variable naming conventions

     // Different Data type in c
     //int %d 4 bytes,double %lf 4 bytes,float %f 4 bytes,char %c 4 bytes


     int age1=25;
    printf("Age1=%d\n",age1);

    double num = 14.56f;
    printf("%.2lf\n",num);

   //double remove unwanted digit
   printf("%lf\n",num);
  double digit= 4.4e6;
  printf("%lf\n",digit);

   //sizeof()operator
   printf("int size=%zu\n",sizeof(age));
    printf("\n double size=%zu\n",sizeof(digit));

   //Take input an print output
   int haib;
   printf("Enter input value:");
   scanf("%d",&haib);
   printf("Age=%d\n",haib);

   //Take double input
   double number;
   char chr;
   printf("Enter double input:");
   scanf("%lf",&number);
    printf("Number:%lf\n",number);

   printf("Enter character input:");

    scanf("%c",&chr);
    scanf("%c",&chr);
   printf("You entered %c", chr);

   //Arithmetic operator + -  *
printf("\n");
    double x=12.89;
     int y=8.78;
     double result=x+y;
     printf(" result: %.2lf\n",result);

    //Division /
    double m=12.89;
     double n=8.78;
     double result1=m/n;
     printf(" result: %.2lf\n",result1);
     //Reminder %
     int p=12;
     int q=8;
     int result2=p%q;
     printf(" result: %d\n",result2);

     //increment&decrement
     printf("\n");
       int s=12;
       printf("%d\n",++s);
       printf("%d\n",--s);
       int l=5/2 + 7*6-1;
       printf("%d\n",l);
       //Type Conversion
       char a='m';
int b=9;
int res = a+b;
printf("%d",res);

    return 0;

}
