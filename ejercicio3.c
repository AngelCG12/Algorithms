#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float hypo(float x, float y) {
	

	return sqrt(pow(x, 2) + pow(y, 2));

}

int main(int count, char** array) {

	float r;
	float x;
	float y;
	float rd;
	if((count-1) < 3 || (count-1) > 3){
		printf("Enter r, x, y\n");
		return 0;
	} else {

		rd = atof(array[1]);

		if(rd <= 0) {
			printf("Radio needs to be grater than zero.\n");
		}

		x =atof(array[2]);
		y = atof(array[3]);
	}

	float d = hypo(x, y);
	printf("The distance from 0,0 is = %.2f\n", d);
	printf("Radius of the circle     = %.2f\n", rd);
	return 0;
}
