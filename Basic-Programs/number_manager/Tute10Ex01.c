#include <stdio.h>
int main(void)
{
	FILE *filePtr;
    int number, newNumber;
    
    filePtr = fopen("number.dat", "w");
    
    if (filePtr == NULL) {
        printf("Failed to create the file.\n");
        return 1;
    }
    
    printf("Enter numbers to store in the file (enter -1 to stop):\n");
    while (1) {
        scanf("%d", &number);
        if (number == -1) {
            break;
        }
        fprintf(filePtr, "%d\n", number);
    }
	fclose(filePtr);
	
	printf("Enter a number: ");
    scanf("%d", &newNumber);
    
    filePtr = fopen("number.dat", "r");
    
    if (filePtr == NULL) {
        printf("Failed to open the file.\n");
        return 1;
	}
	
	fscanf(filePtr, "%d", &number);
	while (!feof(filePtr)) {
		fscanf(filePtr, "%d", &number);
        if (number == newNumber) {
            printf("Error: Number already exists in the file.\n");
            break ;
        }
    }
    fclose(filePtr);
	
	filePtr = fopen("number.dat", "a");
    
    if (filePtr == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }
    
    fprintf(filePtr, "%d\n", newNumber);
    
    fclose(filePtr);  

    printf("Numbers stored in the file:\n");
    
    filePtr = fopen("number.dat", "r");
    if (filePtr == NULL) {
        printf("Failed to open the file.\n");
        return -1;
    }
    
	fscanf(filePtr, "%d", &number);
    while (!feof(filePtr)){
        printf("%d\n", number);
        fscanf(filePtr, "%d", &number);
    }

    fclose(filePtr);
	
	return 0;
	}
