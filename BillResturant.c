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


//function to generate function to generate invoice body for each item

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
//function to generate invoice body for each item

void generateBillBody(char item[20],int qty, float price){
   printf("%s\t\t",item);
   printf("%d\t\t",qty);
   printf("%.2f\t\t",qty * price);
   printf("\n");
}


// function to generate invoice footer with total,discount and grand total


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
void displayInvoice(struct orders *ord) {
    printf("Customer: %s\n", ord->customer);
    printf("Date: %s\n", ord->date);
    printf("Number of Items: %d\n", ord->numOfItems);

    for (int i = 0; i < ord->numOfItems; i++) {
        printf("Item: %s\n", ord->itm[i].item);
        printf("Price: %.2f\n", ord->itm[i].price);
        printf("Quantity: %d\n", ord->itm[i].qty);
    }

    printf("\n");
}
int main(){
     float total;
    int opt,n;
    struct orders ord;
    struct orders order;
    char saveBill='y',contFlag ='y';
    char name[50];
    FILE *fp;



//dashboard
while(contFlag=='y'){
        float total = 0;
int invoiceFound = 0;
printf("\t======= Foysal Resturant=======");
printf("\n\n Please select your prefered operations");
printf("\n 1 . Generate Invoice");
printf("\n 2.Show all the Invoice");
printf("\n 3.Search Invoice");
printf("\n 4.Exit");
printf("\n\n Your Choice:");
scanf("%d",&opt);
getchar();// consume the new line character


switch(opt){
case 1:
system("cls");
    printf("\nPlease Enter the name of the customer:\t");
    fgets(ord.customer,50,stdin);
    ord.customer[strlen(ord.customer)-1]='\0';
    strcpy(ord.date,"--DATE--");
    printf("Enter the dates:");
    fgets(ord.date, 100, stdin);
            ord.date[strlen(ord.date) - 1] = '\0';


    printf("\n no.of items:\t");
    scanf("%d",&n);
    ord.numOfItems = n;

    for(int i=0;i<n;i++){

        printf("\n\n");
        printf("please enter the item %d\t",i+1);
        getchar();//consume the new line character
          //scanf("%d",&ord.itm[i].item);
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
    scanf(" %c",&saveBill);//
    if(saveBill=='y'){

        fp=fopen("ResturantBill.txt","a+");
        if(fp!=0){

                fprintf(fp, "Customer: %s\n", ord.customer);
        fprintf(fp, "Date: %s\n", ord.date);
        fprintf(fp, "Number of Items: %d\n", ord.numOfItems);

        for (int i = 0; i < ord.numOfItems; i++) {
            fprintf(fp, "Item: %s\n", ord.itm[i].item);
            fprintf(fp, "Price: %.2f\n", ord.itm[i].price);
            fprintf(fp, "Quantity: %d\n", ord.itm[i].qty);
        }

        fprintf(fp, "\n"); // Add a separator between orders

        // Close the file
        //fclose(fp);
        fclose(fp);
            printf("\n Successfully saved");
              //fclose(fp);

        }
        else{

            printf("Error saving");


        }}


    break;
  case 2:
      system("cls");
      fp=fopen("ResturantBill.txt","r");
                  if (fp != NULL) {
                  struct orders ord;

        // Read and display each invoice
        while (fscanf(fp, "Customer: %[^\n]\n", ord.customer) != EOF) {
            fscanf(fp, "Date: %[^\n]\n", ord.date);
            fscanf(fp, "Number of Items: %d\n", &ord.numOfItems);

            printf("Customer: %s\n", ord.customer);
            printf("Date: %s\n", ord.date);
            printf("Number of Items: %d\n", ord.numOfItems);

            for (int i = 0; i < ord.numOfItems; i++) {
                fscanf(fp, "Item: %[^\n]\n", ord.itm[i].item);
                fscanf(fp, "Price: %f\n", &ord.itm[i].price);
                fscanf(fp, "Quantity: %d\n", &ord.itm[i].qty);

                printf("Item: %s\n", ord.itm[i].item);
                printf("Price: %.2f\n", ord.itm[i].price);
                printf("Quantity: %d\n", ord.itm[i].qty);
            }

            printf("\n"); // Add a separator between orders
        }

        // Close the file
        fclose(fp);
            }
            break;
  case 3:

        system("cls");
      fp=fopen("ResturantBill.txt","r");

                  if (fp != NULL) {
                struct orders ord;

        char searchName[50];
        printf("Enter the customer name to search: ");
        scanf("%s", searchName);

        int found = 0;

        // Read and search for invoices by customer name
        while (fscanf(fp, "Customer: %[^\n]\n", ord.customer) != EOF) {
            fscanf(fp, "Date: %[^\n]\n", ord.date);
            fscanf(fp, "Number of Items: %d\n", &ord.numOfItems);

            for (int i = 0; i < ord.numOfItems; i++) {
                fscanf(fp, "Item: %[^\n]\n", ord.itm[i].item);
                fscanf(fp, "Price: %f\n", &ord.itm[i].price);
                fscanf(fp, "Quantity: %d\n", &ord.itm[i].qty);
            }
            printf("%s\n",ord.customer);
            if (strcmp(ord.customer, searchName) == 0) {
                displayInvoice(&ord);
                found = 1;
            }
        }

        // Close the file
        fclose(fp);

        if (!found) {
            printf("No invoices found for customer: %s\n", searchName);
        }

            }
            break;
  case 4:
    printf("\n\t\t Bye Bye:");
    exit(0);
    break;
  default:
    printf("Sorry Invalid option");
    break;

    }

    printf("\n Do you want to perform another operations?[y/n]:\t");
    scanf("%s",&contFlag);
    }

printf("\n\t\t Bye Bye:");

return 0;


}




