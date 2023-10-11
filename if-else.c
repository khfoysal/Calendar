
#include<stdio.h>
int main(){
    int unit;
    float p,surcharge,tc;
    printf("Enter the unit: ");

    scanf("%d",&unit);



if(unit<=50){
        p=unit*50;



}
 else if(unit<=150){
 p=25+((unit-50)*0.75);

}
else if(unit<=250){

 p=100+((unit-150)*1.20);
}
else if(unit>250){

 p=220+((unit-250)*1.50);
}
surcharge=p*.20;

tc=p+surcharge;
printf(" Total charge is %.2f\n",tc);


return 0;


}




