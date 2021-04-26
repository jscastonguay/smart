// Voici le lien pour réaliser un projet multi fichiers
// https://dev.to/talhabalaj/setup-visual-studio-code-for-multi-file-c-projects-1jpi

// Pour forcer le make à rebâtir si un header file est modifié:
// https://stackoverflow.com/questions/52034997/how-to-make-makefile-recompile-when-a-header-file-is-changed

// Un meilleur exemple afin de rebâtir lorsqu'un header file est modifié
// https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html

// Un encore meilleur exemple afin de rabâtir si les header change. (pour le C et C++) En plus,
// ça semble être une super doc sur les makefile
// https://makefiletutorial.com/#makefile-cookbook

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
    
    printf("Salut titi !!\n\r");

    return EXIT_SUCCESS;
}