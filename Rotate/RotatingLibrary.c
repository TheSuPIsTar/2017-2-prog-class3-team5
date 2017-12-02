// this is a c file to hold function to rotate sting.

#include "Rotate.h"

char *TrivialPricySolution(char input[], int d){
	char temp;
	int length = strlen(input);
	for(int i = 0; i < d; i++){
		temp = input[0];
		for(int j = 0; j < length; j++)
			input[j] = input[j+1];
		input[length-1] = temp;
	}
	return input[];
}
