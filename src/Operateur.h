#ifndef OPERATEUR_H
#define OPERATEUR_H

#include <stdlib.h>
#include "Cellule.h"

class Operateur : public Cellule {

  public:
    Operateur();
    Operateur(Cellule *, Cellule *);

    void process();
    void mute();
    float getValue();

  private:
    enum Operation {
        ADD,
        SOUS,
        MUL,
        DIV,
        MOD,

        NB_OF_OPERATIONS
    };

    inline void setNewOperation() {
        operation = (Operation)(rand() % (int)NB_OF_OPERATIONS);
    }

    float value;
    Cellule * operandL;
    Cellule * operandR;
    Operation operation;
};

#endif