#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG 50

void inserisciStringa(char s[]){
    printf("Inserisci la frase: ");
    fflush(stdin);
    gets(s);
}

int contaCaratteri(char s[], int n){
    int k=0;
    while(k<n && s[k] != '\0'){
        k++;
    }
    return k;
}

bool isPalindromo(char s[], int n){
    int j=0;
    int k=n-1;
    bool ok = true;
    while(j<k && ok == true){
        if(s[j] == ' '){
            j++;
        }
        if(s[k] == ' '){
            k--;
        }

        if(s[j]==s[k]){
            k--;
            j++;
        }else{
            ok=false;
        }
    }
    return ok;
}

int main()
{
    char stringa[LUNG];
    int conta=0;
    inserisciStringa(stringa);
    conta = contaCaratteri(stringa,LUNG);
    if(isPalindromo(stringa, conta) == true){
        printf("La frase e' palindroma");
    }else{
        printf("La frase NON e' palindroma");
    }

    return 0;
}
