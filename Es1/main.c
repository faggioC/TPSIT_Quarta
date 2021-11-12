#include <stdio.h>
#include <stdlib.h>
#define LUNG 157
#define DIM 10
/*Esercizio 1: inserimento ordinato
Si scrica un programma che:
definisca un tipo di dato Studente. Ogni studente è caratterizato da un nome, un cognome e una matricola
Acquisiscai dati di 10 studenti e per ogni nuovo studente inserito, proceda ad un inserimento ordinato
(lo scopo delle'esercizio è ordinare gli studenti durante il processo di inserimeneto degli stessi e non dopo averli inseriti tutti
con un algoritmo di ordinamento)
Stampa i dati degli studenti*/


typedef struct{
    char nome[LUNG];
    char cognome[LUNG];
    int matricola;
}Studente;

int main()
{
    Studente classe[DIM];
    int k;

    for(k=0;k<DIM;k++){
    printf("Inserisci il nome dell'alunno: ");
    scanf("%s", classe[k].nome);
    printf("Inserisci il cognome dell'alunno: ");
    scanf("%s", classe[k].cognome);
    printf("Inserisci il numero di matricola: ");
    scanf("%d", &classe[k].matricola);
    printf("\n");
    }

    for(k=0;k<DIM;k++){
        printf("%s\t %s\t %d\n", classe[k].nome, classe[k].cognome, classe[k].matricola);
    }

    return 0;
}
