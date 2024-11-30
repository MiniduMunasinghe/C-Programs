#include<stdio.h>
int main(void)
{
	float salesArr[2][3],totAmount=0, highSales=0;
	int x, y, highSalesMen;
	
	for(x=0; x<2; x++){
		printf("Enter the sales amount of sales person %d.\n",x+1);
		for(y=0; y<3; y++){
			printf("product %d:",y+1);
			scanf("%f",&salesArr[x][y]);
		}
	}
	printf("\n");
	
	for(x=0; x<2; x++){
		totAmount=0;
		for(y=0; y<3; y++){
			printf("%.2f\t\t",salesArr[x][y]);
			totAmount=totAmount+salesArr[x][y];
			if(totAmount>highSales){
				highSalesMen=x;
				highSales=totAmount;
			}
		}
		printf("\n");
	}
	printf("\n");
	printf("The sales person with the highest sales amount is sales person %d",highSalesMen+1);
	
	return 0;
}

