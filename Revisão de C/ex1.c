// Dado um vetor de números inteiros v de tamanho n e um número k, retorne verdadeiro
//se a soma de qualquer par de números em v for igual a k. (não quero retornar verdadeiro, bite me)
#include <stdio.h>

int main() {
	
	int vetor[10];
	int n, k, i, j;
	
	printf("Informe o tamanho do vetor (maximo 10):\n");
	scanf("%d", &n);
	printf("Insira o valor de k:\n");
	scanf("%d", &k);
	
	printf("Insira os valores do vetor: \n");
	for(i=0;i<n;i++) {
		scanf("%d", &vetor[i]);
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++){
			if(i != j){
				if ((vetor[i] + vetor[j]) == k) {
					printf("Os valores %d + %d somam %d.\n", vetor[i], vetor[j], k);
					return 1;
				}
			}
		}

	}
	printf("Nenhum par soma a k.\n");
	
	
	return 0;
}
