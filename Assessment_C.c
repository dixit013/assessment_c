#include<stdio.h>
main()
{
	int qn, p, bill, items, total_bill=0;
	char mo, y, n, i;
		 printf("\n...Welcome to our restaurant...");	
		 do
		 {
			 printf("\n Give Your Order");
			 printf("\n 1. Pizza = 180rs");
			 printf("\n 2. Burger = 100rs");
			 printf("\n 3. Dosa = 120rs");
			 printf("\n 4. Idli = 50rs");
			 
			 printf("\n\n Enter Order (1 to 4 Number Only): ");
			 scanf("%d",&items);
			 
			 switch(items)
			 {
			 	case 1 : printf("\n Pizza");
			 		p=180;
			 		break;
			 	case 2 : printf("\n Burger");
			 		p=100;
			 		break;
			 	case 3 : printf("\n Dosa");
			 		p=120;
			 		break;
			 	case 4 : printf("\n Idli");
			 		p=50;
			 		break;
			 	default : printf("\n Invalid Input.... Try again");
			 		break;
			 		continue;
			 }
			 	 
			 printf("\n\n Quantity : ");
			 scanf("%d",&qn);
			 
			 bill=p*qn;
			 printf("\n\n total bill is : %d",bill);
			 
			 total_bill+=bill;
			 
			 printf("\n\n Do You want Place More Orders ? y/n : ");
			 scanf(" %c",&mo);
			
		  
		 }while(mo=='y' || mo=='Y');
		  printf("Total bill is : %d",total_bill);	
}
