/*
 ============================================================================
 Name        : array-dim-var.c
 Description : Esempio di array a dimensione variabile realizzato con malloc
 	 	 	   e realloc.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i=0, n=0, x, *array, nb;

    int allocati;  /* byte allocati */
    int dimbloc;   /* byte in un blocco */
    int dimint;    /* byte in un intero */
    int usati;     /* byte contenenti interi */

    nb = 1;
    printf("Elementi in un blocco: %d\n", nb);

    dimint = sizeof(int);
    dimbloc = nb * dimint;
    usati = 0;

    array = (int *) malloc(dimbloc);

    if(array == NULL)
    {
        printf("Memoria insufficiente\n");
        exit(1);
    }

    allocati = dimbloc;
    printf("Allocati: %d bytes\n", allocati);
    printf("Input di interi terminati da [invio]:\n");

    while(scanf("%d", &x))
    {
        usati += dimint;

        if(usati>allocati)
        {
            allocati += dimbloc;
            array = (int *) realloc(array, allocati);

            if(array == NULL)
            {
                printf("Memoria insufficiente\n");
                exit(1);
            }

            i++;
        }

        /* in questo modo vengono letti n interi */
        array[n++] = x;
    }

   printf("\n");
   printf("Allocati: %d bytes\n", allocati);
   printf("Dim. blocchi: %d bytes\n", dimbloc);
   printf("Dim. intero: %d bytes\n", dimint);
   printf("Usati: %d bytes\n", usati);
   printf("Chiamate realloc: %d\n", i);
   printf("Numeri: %d\n", n);
   printf("\nEcco i numeri\n");

   for(i=0; i<n; i++)
   {
      printf("%5d%c", array[i], (i%10 == 9)?'\n':' ');
   }
   printf("\n");

   return 0;
}
