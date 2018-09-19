#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int array[10];
	int i;
	for (i = 0; i < 10; ++i){
		array[i]=rand();
	}
	printf("Original array: \n [");
	for (i = 0; i < 9; ++i){
		printf("%d,", array[i]);
	}
	printf("%d]\n", array[9]);
	int new[10];
	int *newp = new;
	int *arrayp = array;
	for (i = 0; i < 10; ++i){
		*(newp+i)=*(arrayp+9-i);
	}
	printf("Reversed array: \n [");
	for (i = 0; i < 9; ++i){
		printf("%d,", new[i]);
	}
	printf("%d]\n", new[9]);
	return 0;
}