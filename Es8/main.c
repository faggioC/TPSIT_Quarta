#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p = (char *) malloc(sizeof(char));
    int *q = (int *) malloc(sizeof(int));

    scanf("%c", p);
    scanf("%d", q);

    printf("Indirizzo carattere: %d\n", p);
    printf("Contenuto carattere: %c\n", *p);

    printf("Indirizzo numero: %d\n", q);
    printf("Contenuto numero: %d\n", *q);


    return 0;
}
