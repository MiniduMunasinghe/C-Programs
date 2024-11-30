#include<stdio.h>
int main(void)
{
	int empCat, daysWorked;
	float basicSal, dailyPay, bonusAmt;
	char cont;
	
	do{
	
		printf("Enter employee category : ");
		scanf("%d",&empCat);
	
		printf("Enter basic salary : ");
		scanf("%f",&basicSal);
	
		printf("Enter number of days worked : ");
		scanf("%d",&daysWorked);
	
		printf("Enter the daily payment : ");
		scanf("%f",&dailyPay);
	
		if(empCat==1){
			bonusAmt = basicSal*2;
		
		}
		else if(empCat==2){
			if(daysWorked>240){
				bonusAmt = dailyPay*20;
			}
			else{
				bonusAmt = 0;	
			}
		}
		else if(empCat==3){
			bonusAmt = 50000;
		}
	
		printf("Bonus amount is : %.2f\n\n",bonusAmt);
		
		printf("Do you want to continue : ");
		scanf(" %c",&cont);
		printf("\n");
		
	}while(cont=='Y' || cont=='y');
	
	return 0;
}
