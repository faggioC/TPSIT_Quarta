#include <stdio.h>
#include <stdlib.h>
#define LUNG 20
#define DIM 2

typedef struct{
    char nome[LUNG];
    char cognome[LUNG];
    int matricola;
    int italiano;
    int matematica;
    int informatica;
}Studente;

int main()
{
    Studente alunni[DIM];
    int k;
    float mediaIta = 0;
    float mediaMate = 0;
    float mediaInfo = 0;
    float somma = 0;

    for(k = 0; k < DIM; k++){
        printf("Inserisci il nome dello studente: ");
        fflush(stdin);
        scanf("%s", alunni[k].nome);

        printf("Inserisci il cognome dello studente: ");
        fflush(stdin);
        scanf("%s", alunni[k].cognome);

        printf("Inserisci il numero della matricola: ");
        scanf("%d", &alunni[k].matricola);

        printf("Inserisci il voto di italiano: ");
        scanf("%s", &alunni[k].italiano);

        printf("Inserisci il voto di matematica: ");
        scanf("%s", &alunni[k].matematica);

        printf("Inserisci il voto di informatica: ");
        scanf("%d", &alunni[k].informatica);
    }

    printf("\n");

    for(k = 0; k < DIM; k++){
        somma = somma + alunni[k].italiano;
    }
    mediaIta = somma / DIM;

    somma = 0;
    for(k = 0; k < DIM; k++){
        somma = somma + alunni[k].matematica;
    }
    mediaMate = somma / DIM;

    somma = 0;
    for(k = 0; k < DIM; k++){
        somma = somma + alunni[k].informatica;
    }
    mediaInfo = somma / DIM;

    if(mediaIta > mediaMate && mediaIta > mediaInfo){
        printf("La materia con la media piu' alta e' italiano. ");
    }else{
        if(mediaMate > mediaIta && mediaMate > mediaInfo){
            printf("La materia con la media piu' alta e' matematica. ");
        }else{
            printf("La materia con la media piu' alta e' informatica. ");
        }
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
