#include<stdio.h>
int main(void)
{
	int i, c=0, s=0, t=0;
	char name[10], appType;
	
	FILE*appointmentPtr;
	appointmentPtr=fopen("appointment.dat","w");
	
	if(appointmentPtr==NULL){
		printf("Failed to creat the file");
		return -1;
	}
	
	for(i=0; i<5; i++){
		printf("Enter Name : ");
		scanf(" %s",&name);
		fprintf(appointmentPtr," %s\t",name);
		
		printf("Enter Appointment type : ");
		scanf(" %c",&appType);
		fprintf(appointmentPtr," %c\n",appType);
	}
	fclose(appointmentPtr);
	
	appointmentPtr=fopen("appointment.dat","r");
	
	if(appointmentPtr==NULL){
		printf("Failed to open the file");
		return -1;
	}
	
	fscanf(appointmentPtr," %c",&appType);
	
	while(!feof(appointmentPtr)){
		if(appType=='C'){
			c = c + 1;
		}
		else if(appType=='S'){
			s = s + 1;
		}
		else if(appType=='T'){
			t = t + 1;
		}
	fscanf(appointmentPtr," %c",&appType);
	}
	fclose(appointmentPtr);
	
	printf("Appointment type\tNumber of patients\n");
	printf("Consulting\t\t %d\n",c);
	printf("Scanning \t\t %d\n",s);
	printf("Testing \t\t %d",t);
	
	return 0;
}
