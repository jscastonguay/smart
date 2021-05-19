#ifndef OPERATOR_H
#define OPERATOR_H

#include "Cellule.h"
#include <stdlib.h>

class Operator : public Cellule {

  public:
    Operator();
    Operator(Cellule *, Cellule *);

    void process();
    void mute();
    void mute(Cellule * interaction);
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