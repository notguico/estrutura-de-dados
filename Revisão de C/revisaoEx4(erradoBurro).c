//eu li o enunciado errado lol. lmao

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

	int soma1 = vetor[0], soma2 = vetor[1];
	
	for(i=2;i<n;i++){
		if(i % 2 != 0)
			soma2 = soma2 + vetor[i];
		else
			soma1 = soma1 + vetor[i];
	}
		

	if(soma1 >= soma2)
		printf("A maior soma é %d\n", soma1);
	else printf("A maior soma é %d\n", soma2);

	return 0;
}
