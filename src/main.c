// Voici le lien pour réaliser un projet multi fichiers
// https://dev.to/talhabalaj/setup-visual-studio-code-for-multi-file-c-projects-1jpi

#include <stdio.h>
#include <stdlib.h>

#define PROFONDEUR  1000
#define NB_INDIVIDUS  10

typedef enum {
    ADD,
    SOUS,
    MUL,
    DIV,
    MOD
} Operation;

typedef struct {
    Operation operations[PROFONDEUR];
    unsigned int nbOperations;
} Individu;

Individu individus[NB_INDIVIDUS];



int main(int argc, char *argv[]) {
    
    printf("Salut toto !!\n\r");

    return EXIT_SUCCESS;
}