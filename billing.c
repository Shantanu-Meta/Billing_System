#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

typedef struct receipt{
    char item[50];
    int qyt;
    int rate;
}receipt;


int main(){

printf("\n\n                        NEW  TRENDS                 \n");
printf("                      BOLPUR-731204             \n");
printf("                    Bill payment memo              \n\n");

char cusName[100];
int mob;
char date[10];

printf("Customer Name: ");
fgets(cusName,100,stdin);
printf("Customer mob: ");
scanf("%d",&mob);
printf("Date: ");
scanf("%s",date);

printf("\nINPUT DETAILS:--\n") ;

receipt arr[20]; 
int i=0,N; int sum=0,j;
while(i<20){
    printf("\nItem Name: ");
    scanf("%s",arr[i].item);
    printf("Quantity: ");
    scanf("%d",&arr[i].qyt);
    printf("Rate: ");
    scanf("%d",&arr[i].rate);

   printf("\n1.Add more. \n");
   printf("2.Make bill.\n");
   printf("choose option: \n");
   scanf("%d",&N);



  if(N==1){
    i++;
  }else if(N==2){
                   
printf("                        NEW  TRENDS                 \n");
printf("                       BOLPUR-731204             \n");
printf("                         Cash memo              \n\n");
printf("=============================================================\n");
printf("Customer: %s",cusName);
printf("Customer mob: %d\n",mob);
printf("Date:%s\n\n",date);

printf("________________________________________________________________\n");
printf("Commodities\t\tQty\t\tRate\t\tAmt\n");
printf("________________________________________________________________\n");
for(j=0;j<=i;j++){
printf("%s\t\t\t%d\t\t%d\t\t%d \n",arr[j].item,arr[j].qyt,arr[j].rate,arr[j].qyt * arr[j].rate);
  sum=sum + arr[j].qyt * arr[j].rate;
}

printf("______________________________________________________________\n");
printf("Net Ammount(including gst) :                         %.2f",sum+sum*0.18);
            break;
  }else{
    printf("invalid option.\n");
   printf("Re-enter option no: ");
   scanf("%d",&N);
  }

}
float amt=sum+sum*0.18;
float dis;

printf("\nDiscount (prtg): ");
scanf("%f",&dis);
float amtt=amt * (1-dis/100);
printf("Total amt: %.2f",amtt);

printf("\n\n\n               || Please visit again ||            \n\n\n\n");




    return 0;
}

