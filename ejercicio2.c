#include <stdlib.h>
#include <stdio.h>

int main(int count, char** array){

	if((count-1) %2 != 0){
		printf("enter two arguments\n");
	}
	float total = 0;
	int i;
	for(i = 1; i<=count/2; i++){
	float a = atof(array[i]);
	float b = atof(array[count/2+ i]);
	total = total + (a*b);
	}
	printf("the product point is = %.2f\n", total);
return 0;
}
