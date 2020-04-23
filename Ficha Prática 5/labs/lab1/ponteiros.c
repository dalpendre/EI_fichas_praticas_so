#include <stdio.h>

int main(void)
{
	int *iptr = NULL, q = 20;
	iptr = &q;

	printf("%d\n", q); /* Escreve o valor 20 */
	printf("%d\n", *iptr); /* Escreve o valor apontado por iptr => o valor 20 */
	printf("Endereco da variavel q = %p\n", (void *) &q); 
	printf("Endereco armazenado em iptr = %p\n", (void *) iptr); 
	printf("Endereco da variavel iptr = %p\n", (void *) &iptr);
	
	return 0;
}
