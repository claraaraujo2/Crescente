#include <stdio.h>
#include <stdlib.h>


void main() {

int ul[7];
int i, l, r;

printf("Digite 7 números inteiros.\n\n");


for (i = 0; i < 7; i++) {
	printf("%d:", i + 1);
	scanf("%d", &ul[i]);
}


for (i = 0; i < 7 - 1; i++){
	
	for (l = 0; l < 7 - i -1; l++){

		if (ul[l] > ul[l + 1]){
			r = ul[l];
			ul[l] = ul[l + 1];
			ul[l + 1] = r;
		}
	
	}
		
}
		for (i = 0; i < 7; i++) {
				printf("%d:", ul[i]);}




}
