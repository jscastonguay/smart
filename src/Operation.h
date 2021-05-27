#ifndef OPERATION_H
#define OPERATION_H

#include "Cellule.h"
#include <stdlib.h>

class Operation : public Cellule {

  public:
    Operation();
    Operation(Cellule *, Cellule *);

    void process();
    void mute();
    void mute(Cellule * interaction);
    float getValue();

  private:
    enum BaseOperation {
        ADD,
        SOUS,
        MUL,
        DIV,
        MOD,

        NB_OF_BASE_OPERATIONS
    };

    inline void setNewOperation() {
        operation = (BaseOperation)(rand() % (int)NB_OF_BASE_OPERATIONS);
    }

    float value;
    Cellule * operandL;
    Cellule * operandR;
    BaseOperation operation;
};

#endif