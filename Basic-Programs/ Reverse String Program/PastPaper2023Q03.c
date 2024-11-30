#include<stdio.h>
#include<string.h>
int main(void)
{
	char strArr[15];
	int lenght, x;
	
	printf("Enter a word : ");
	scanf("%s",&strArr);
	
	lenght=strlen(strArr);
	
	printf("\n");
	for(x=lenght; x>=0; x--){
		printf("%c",strArr[x]);
	}
	
	return 0;
}
