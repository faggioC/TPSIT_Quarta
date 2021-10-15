#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define DIM 30
#define D 40


typedef struct {
    char numero[D];
    char titoloFilm[D];
    char genere[D];
    char annoUscita[D];
    char dispo[D];
} Cinema;

/*int leggiRighe(char nomeFile[]){
    FILE *fp;
    char line[100];
    int conta=0;

    fp=fopen(nomeFile,"r");
    while((fgets(line,100,fp))== false){
        conta++;
    }
    fclose(fp);

 return conta;
}
*/
void caricaVettore(Cinema v[], int n, char nomeFilm[]) {
    FILE *fp;
    int conta=0;
    char line[100];
    fp = fopen(nomeFilm, "r");
    for(int i=0;i<n;i++){
        fgets(line, 150, fp);
        char* pezzo = strtok(line, ",");
        while(pezzo != NULL){
            switch(conta){
            case 0:
                strcpy((*(v+i)).numero, pezzo);
                break;
            case 1:
                strcpy((*(v+i)).titoloFilm, pezzo);
                break;
            case 2:
                strcpy((*(v+i)).genere, pezzo);
                break;
            case 3:
                strcpy((*(v+i)).annoUscita, pezzo);
                break;
            case 4:
                strcpy((*(v+i)).dispo, pezzo);
                break;
            }
            conta++;
            pezzo = strtok(NULL, ",");
        }
        conta=0;
    }
}

void stampaVettore(Cinema v[], int n){
    for(int k=0;k<n;k++){
        printf("%s      %s      %s      %s      %s", (*(v+k)).numero, (*(v+k)).titoloFilm,(*(v+k)).genere,(*(v+k)).annoUscita, (*(v+k)).dispo);
        printf("\n");
    }
}

int main() {
    int n;
    //leggiRighe("listafilm.csv");
    Cinema film[DIM];
    caricaVettore(film,DIM, "listafilm.csv");
    stampaVettore(film, DIM);
    return 0;
}
