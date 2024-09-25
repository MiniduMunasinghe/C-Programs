#include<stdio.h>
int main(void)
{
	float sales[5]={0,0,0,0,0};
	float salesAmount;
	int count;
	
	for(count=0; count<5; count++  ){
		printf("Enter the Sales amount :");
		scanf("%f",&salesAmount);
	
	    if(salesAmount>=0){
	    	sales[count]=sales[count]+salesAmount;
		}
		else if(salesAmount<0){
			printf("Please re-enter the amount\n");
			count--;
		}
	
    }
    
    for(count=0; count<5; count++){
    	printf("%.2f\n",sales[count]);
	}
    
	return 0;
}
