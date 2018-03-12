/*
 ============================================================================
 Name        : puntatori.c
 Author      : luk488
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

void  swap(int *x, int *y)
{
	int  temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void) {

	int a=0,b=0;

	printf("Inserisci il valore a:");
	scanf("%d", &a);
	printf("Inserisci il valore b:");
	scanf("%d", &b);

	swap(&a,&b);

	printf("Il valore a è: %d\n",a);
	printf("Il valore a è: %d",b);

	return EXIT_SUCCESS;
}
