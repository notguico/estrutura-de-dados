#include <stdio.h>

int main() {
	int n;
	int vetor[n], produtos[n], i, j, produto;
	
	printf("Insira a quantidade de inteiros: ");
	scanf("%d", &n);
	
	printf("Insira %d valores: \n", n);
	for(i=0;i<n;i++)
		scanf("%d", &vetor[i]);
	
	printf("Vetor original: \n[");
	for(i=0;i<n;i++){
		printf(" %d ", vetor[i]);
	}
	printf("]\n");
	
	for(i=0;i<n;i++){
		produto = 1;
		for(j=0;j<n;j++){
			if(i == j) {
			}
			else 
				produto = produto * vetor[j];
		}
		produtos[i]	= produto;
	}	
	
	printf("Vetor dos produtos: \n[");
	for(i=0;i<n;i++){
		printf(" %d ", produtos[i]);
	}
	printf("]\n");
	
	return 0;
}
