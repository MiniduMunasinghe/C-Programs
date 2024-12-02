#include<stdio.h>
int main(void)
{
	char movie, ticketType;
	int x, numOfTicket;
	int HB=0, HN=0, FB=0, FN=0, SB=0, SN=0;    
	
	FILE*ticketPtr;
	/*ticketPtr=fopen("ticket.dat","w");
	
	if(ticketPtr==NULL){
		printf("Fail to open the file");
		return -1;
	}
	
	for(x=0; x<5; x++){
		printf("Enter the movie : ");
		scanf(" %c",&movie);
	
		printf("Enter the ticket type : ");
		scanf(" %c",&ticketType);
	
		printf("Enter the number of tickets purchased : ");
		scanf("%d",&numOfTicket);
		
		fprintf(ticketPtr,"%c\t",movie);
		fprintf(ticketPtr,"%c\t",ticketType);
		fprintf(ticketPtr,"%d\n",numOfTicket);
	}
	fclose(ticketPtr);*/
	
	ticketPtr=fopen("ticket.dat","r");
	
	if(ticketPtr==NULL){
		printf("Fail to open the file");
		return -1;
	}
	
	fscanf(ticketPtr," %c %c %d", &movie, &ticketType, &numOfTicket);
	while(!feof(ticketPtr)){
		if(movie=='H'){
			if(ticketType=='B'){
				HB=HB+numOfTicket;
			}
			else if(ticketType=='N'){
				HN=HN+numOfTicket;
			}
		}
		else if(movie=='F'){
			if(ticketType=='B'){
				FB=FB+numOfTicket;
			}
			else if(ticketType=='N'){
				FN=FN+numOfTicket;
			}
		}
		else if(movie=='S'){
			if(ticketType=='B'){
				SB=SB+numOfTicket;
			}
			else if(ticketType=='N'){
				SN=SN+numOfTicket;
			}
		}
		fscanf(ticketPtr," %c %c %d", &movie, &ticketType, &numOfTicket);
	}
	printf("Harry Portor\n\tBalcony\t-%d\n\tNormal\t-%d\n",HB,HN);
	printf("Frozon-II\n\tBalcony\t-%d\n\tNormal\t-%d\n",FB,FN);
	printf("Sherlock Homes\n\tBalcony\t-%d\n\tNormal\t-%d",SB,SN);
	
	return 0;
}
