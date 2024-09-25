#include<stdio.h>
int main(void)
{
	char pizzaType, pizzaSize;
	int numOfPizzas, transID=99;
	int pizzaVsizeR=0, pizzaVsizeL=0, pizzaCsizeR=0, pizzaCsizeL=0, pizzaSsizeR=0, pizzaSsizeL=0; 
	
	FILE*pizzaPtr;
	pizzaPtr=fopen("outletOrders.dat","w");
	
	if(pizzaPtr==NULL){
		printf("Fail to open the file");
		return -1;
	}
	while(1){
		transID++;
		
		printf("Enter the number of pizzas : ");
		scanf("%d",&numOfPizzas);
		if(numOfPizzas==-99){
			break;
		}
		
		printf("Enter the type of pizza (V/C/S) : ");
		scanf(" %c",&pizzaType);
		
		printf("Enter the pizza size (R/L) : ");
		scanf(" %c",&pizzaSize);
		
		fprintf(pizzaPtr,"%d\t",transID);
		fprintf(pizzaPtr,"%c\t",pizzaType);
		fprintf(pizzaPtr,"%c\t",pizzaSize);
		fprintf(pizzaPtr,"%d\n",numOfPizzas);
	}
	fclose(pizzaPtr);
	
	pizzaPtr=fopen("outletOrders.dat","r");
	
	if(pizzaPtr==NULL){
		printf("Failed to open file");
		return -1;
	}
	
	fscanf(pizzaPtr,"%d %c %c %d",&transID, &pizzaType, &pizzaSize, &numOfPizzas);
	while(!feof(pizzaPtr)){
		if(pizzaType=='V' || pizzaType=='v'){
			if(pizzaSize=='R' || pizzaSize=='R'){
				pizzaVsizeR=pizzaVsizeR+numOfPizzas;
			}
			if(pizzaSize=='L' || pizzaSize=='l'){
				pizzaVsizeL=pizzaVsizeL+numOfPizzas;
			}
		}
		if(pizzaType=='C' || pizzaType=='c'){
			if(pizzaSize=='R' || pizzaSize=='R'){
				pizzaCsizeR=pizzaCsizeR+numOfPizzas;
			}
			if(pizzaSize=='L' || pizzaSize=='l'){
				pizzaCsizeL=pizzaCsizeL+numOfPizzas;
			}
		}
		if(pizzaType=='S' || pizzaType=='s'){
			if(pizzaSize=='R' || pizzaSize=='R'){
				pizzaSsizeR=pizzaSsizeR+numOfPizzas;
			}
			if(pizzaSize=='L' || pizzaSize=='l'){
				pizzaSsizeL=pizzaSsizeL+numOfPizzas;
			}
		}
		fscanf(pizzaPtr,"%d %c %c %d",&transID, &pizzaType, &pizzaSize, &numOfPizzas);
	}
	fclose(pizzaPtr);
	
	printf("Veggie Pizza\n \tReguler\t\t-%d\n \tLarge\t\t-%d\n",pizzaVsizeR,pizzaVsizeL);
	printf("Chicken Pizza\n \tReguler\t\t-%d\n \tLarge\t\t-%d\n",pizzaCsizeR,pizzaCsizeL);
	printf("Seafood Pizza\n \tReguler\t\t-%d\n \tLarge\t\t-%d\n",pizzaSsizeR,pizzaSsizeL);
	
	return 0;
}
