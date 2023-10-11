#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct items{
    char item[20];
    float price;
    int qty;
};
struct orders{
char customer[50];
char date[100];
int numOfItems;
 struct items itm[50];


};


//function to generate
void generateBillHeader(char name[],char date[]){

printf("\n \n");

printf("\t Foysal Resturant");
printf("\nDate:%s",date);
printf("\nInvoice To:%s",name);
printf("\n");
printf("Items\t\t");
printf("Qty\t\t");
printf("Total\t\t");
printf("\n\n");

}
void generateBillBody(char item[20],int qty, float price){
   printf("%s\t\t",item);
   printf("%d\t\t",qty);
   printf("%.2f\t\t",qty * price);
   printf("\n");
}




void generateBillFooter(float total){
printf("\n");
float dis= 0.1*total;
float netTotal=total-dis;
float cgst=.09*netTotal,grandTotal=netTotal + 2*cgst;//netTotal+cgst+sgst
printf("------\n");
printf("Sub total\t\t\t%.2f",total);
printf("\nDiscount @10%s\t\t\t%.2f","%",dis);

printf("\n\t\t\t---");
printf("\nNet Total \t\t\t%.2f",netTotal);
printf("\nCGST @9%%\t\t\t%.2f",cgst);
printf("\nSGST @9%%\t\t\t%.2f",cgst);
printf("\n---------");
printf("\n Grand Total \t\t\t %.2f",grandTotal);
printf("\n-----------------------\n");



}
int main(){
     float total;
    int opt,n;
    struct orders ord;
    char saveBill='y';
    FILE *fp;



//dashboard
printf("\t======= Foysal Resturant=======");
printf("\n\n Please select your prefered operations");
printf("\n 1 . Generate Invoice");
printf("\n 2.Show all the Invoice");
printf("\n 3.Search Invoice");
printf("\n 4.Exit");
printf("\n\n Your Choice:");
scanf("%d",&opt);
getchar();


switch(opt){
case 1:
    system("clear");
    printf("\nPlease Enter the name of the customer:\t");
    fgets(ord.customer,50,stdin);
    ord.customer[strlen(ord.customer)-1]=0;
    strcpy(ord.date,"--DATE--");
    printf("Enter the dates:");

    printf("\n no.of items:\t");
    scanf("%d",&n);
    ord.numOfItems = n;

    for(int i=0;i<n;i++){

        printf("\n\n");
        printf("please enter the item %d\t",i+1);
          scanf("%d",&ord.itm[i].item);
        fgets(ord.itm[i].item,20,stdin);

        ord.itm[i].item[strlen(ord.itm[i].item)-1]=0;

        printf("Please  enter the quantity:\t ");
        scanf("%d",&ord.itm[i].qty);
        printf("Please enter the unit price :\t ");
        scanf("%f",&ord.itm[i].price);
        total +=ord.itm[i].qty * ord.itm[i].price;



    }


    generateBillHeader(ord.customer,ord.date);
    for(int i=0;i<ord.numOfItems;i++){
            generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);


    }

    generateBillFooter(total);
    printf("\n Do you want to save the invoice[y/n]:\t");
    scanf("%s",&saveBill);
    if(saveBill=='y'){
        fp=fopen("ResturantBill.dat","a+");
        fwrite(&ord,sizeof(struct orders),1,fp);
        if(fwrite!=0)
            printf("\n Successfully saved");

        else
            printf("Error saving");
        fclose(fp);


    }

    break;

}
return 0;


}




