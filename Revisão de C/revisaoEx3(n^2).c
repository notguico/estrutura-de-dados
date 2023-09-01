// por deus. reduza para n

#include <stdio.h>
#include <locale.h>

int main() {
	int n, vetor[n], i, j;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Insira a quantidade de inteiros: ");
	scanf("%d", &n);
	
	printf("Insira %d valores: \n", n);
	for(i=0;i<n;i++)
		scanf("%d", &vetor[i]);
	
	int maior = vetor[0], menor = 1;
	
	for(i=0;i<n;i++){
		if(vetor[i] > maior)
			maior = vetor[i];		
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(menor == vetor[i]){
				menor = menor + 1;
			}
		}
	}
	
	printf("O menor valor não presente é %d\n", menor);
		
	return 0;
}
	
