#include <stdio.h>
#include <stdlib.h>

/* Ana e João jantaram e o valor da conta ficou em R$ 100,00
   O Valor do couvert artístico é de 2% sobre o valor da conta
   O Valor da gorjeta é de 10% sobre o valor da conta
   
   Escreva um programa que apresente :
   -o valor da conta
   -o valor do couvert artistico 
   -o valor da gorjeta
   -o valor da total conta
   
*/

double ValorConta (double x,double y){
	return x * (y/100);
}


int main(void) {
	
	double conta,couvert,pcouvert,pgorjeta,vtconta;
	
	printf("Digite o valor da conta:");
		scanf("%lf", &conta);
	
	printf("Digite a procentagem do couvert:");
		scanf("%lf", &pcouvert);
	
	printf("Digite a procentagem do gorjeta:");
		scanf("%lf", &pgorjeta);
	
	vtconta= conta + ValorConta(conta,pgorjeta) + ValorConta(conta,pcouvert);
	
	printf(" O valor da conta sem acrescimos de porcentagem foi: %.2lf\n ", conta);
	printf(" O valor da gorjeta foi: %.2lf\n ", ValorConta(conta,pgorjeta));
	printf(" O valor do couvert foi : %.2lf\n ", ValorConta(conta,pcouvert));
	printf(" O valor do tatal da conta foi de :%.2lf ", vtconta);
	
	
	return 0;
}
