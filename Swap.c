#include <stdio.h>

void main(){
	int total = 15;
	int array[] = {40, 55, 11, 32, 67, 5, 74,
	    89, 39, 66, 27, 36, 79, 99, 2};
	    
	int i, j, swap;
	
	for(i = 0; i < total - 1; i++) {
		for(j = 0; j < total - i - 1; j++){
			if(array[j] > array[j=1]){
				swap = array[j];
				array[j = array[j+1]];
				array[j+1] = swap;
			}
		}
	}
	printf("Ordenado: ");
	for(i = 0; i < total -1; i++){
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}