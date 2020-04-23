#include <stdio.h>
#include <stdlib.h>

int main(){
	system("clear");

	int d[10], e[10], i, j = 0;

	for (i = 0; i <= 9; i++) {
		printf("d[%d] <= :", i);
		scanf("%d", &d[i]);
		//e[i] = d[i];
	}

	
	printf("\nVetor D:\n");
	while(j <= 9){
	printf("[%d]\t", d[i]);
		j++;
	}

	printf("\n");

	return 0;
}
