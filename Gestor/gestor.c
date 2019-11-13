#include "gestor.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    //Variaveis de ambiente:   	 - maxmsg- máximo de mensagens
    //				                         - maxnot - maximo de palavras proibidas
    //                         				 - wordsnot - nome do ficheiro onde estão as palavras proibidas

    int maxmsg, maxnot;
    char *wordsnot;
    int flagVA = getVarsAmb(&maxmsg, &maxnot, wordsnot);

    printf("MAXMSG = %d\nMAXNOT = %d\nWORDSNOT = %s\n", maxmsg, maxnot, wordsnot);
    if(flagVA){
        exit(3);
	}
	
	printf("Gestor:\n");
		
	char *comando;
	while(1){
		return 0;	
	}

    exit(0);
}

int getVarsAmb(int *maxmsg, int *maxnot, char *wordsnot){
    char *tempmm = getenv("MAXMSG");


    if(tempmm != NULL)
        *maxmsg = atoi(tempmm);
    else{
        fprintf(stderr, "[ERRO] MAXMSG nao encontrado.\n");
        exit(3);
    }

    tempmm = getenv("MAXNOT");
    if(tempmm != NULL)
        *maxnot = atoi(tempmm);
    else{
        fprintf(stderr, "[ERRO] MAXNOT nao encontrado.\n");
        exit(3);
    }


    char *wordsnotTemp = getenv("WORDSNOT");
    if(wordsnotTemp == NULL){
        fprintf(stderr, "[ERRO] WORDSNOT nao encontrado.\n");
        exit(3);
    }

    strcpy(wordsnot, wordsnotTemp);
    return 0;
}

