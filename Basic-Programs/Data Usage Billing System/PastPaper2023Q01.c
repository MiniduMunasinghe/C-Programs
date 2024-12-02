#include<stdio.h>
float calcPayment(int packgType2, float totalData2);
float calcTax(float payment2);
void displayDetails(float payment, float tax);

int main(void)
{
	int packgType1;
	float totalData1, payment1, tax, monthlyPay;
	
	printf("Enter the package type : ");
	scanf("%d",&packgType1);
	
	printf("Enter the total data usage : ");
	scanf("%f",&totalData1);
	
	payment1=calcPayment(packgType1,totalData1);
	tax=calcTax(payment1);
	
    displayDetails(payment1, tax);
    
    
	
	return 0;
}
float calcPayment(int packgType2, float totalData2){
	float tot,excessData,excessCharge;
	if(packgType2 == 1){
		if(totalData2==1.5){
			tot=tot+120;
		}
		else if(totalData2>1.5){
			excessData=totalData2-1.5;
			excessCharge=(excessData*1024)*2;
			tot=120+excessCharge;
			
		}
	}
	if(packgType2 == 2){
		if(totalData2==5){
			tot=tot+350;
		}
		else if(totalData2>5){
			excessData=totalData2-5;
			excessCharge=(excessData*1024)*2;
			tot=350+excessCharge;
		}
	}
	if(packgType2 == 3){
		if(totalData2==1.5){
			tot=tot+120;
		}
		else if(totalData2>1.5){
			excessData=totalData2-1.5;
			excessCharge=(excessData*1024)*2;
			tot=120+excessCharge;
			
		}
	}
	if(packgType2 == 4){
		if(totalData2==5){
			tot=tot+350;
		}
		else if(totalData2>5){
			excessData=totalData2-5;
			excessCharge=(excessData*1024)*2;
			tot=350+excessCharge;
		}
	}
	return tot;
}

float calcTax(float payment2){
	float discAmount;
	discAmount=payment2*5/100;
	return discAmount;
}

void displayDetails(float payment, float tax){
    float monthlyPay = payment + tax;
    
    printf("Total payment = %.2f\n", payment);
    printf("Tax amount = %.2f\n", tax);
    printf("Monthly bill payment = %.2f\n", monthlyPay);
}
