#include "Operation.h"
#include <assert.h>

Operation::Operation() : value(0.0), operandL(nullptr), operandR(nullptr) {
    setNewOperation();
}

Operation::Operation(Cellule * operandL, Cellule * operandR)
    : value(0.0), operandL(operandL), operandR(operandR) {
    setNewOperation();
}

void Operation::process() {

    assert(operandL != nullptr);
    assert(operandR != nullptr);

    float lVal = operandL->getValue();
    float rVal = operandR->getValue();

    switch (operation) {
    case ADD:
        value = lVal + rVal;
        break;
    case SOUS:
        value = lVal - rVal;
        break;
    case MUL:
        value = lVal * rVal;
        break;
    case DIV:
        // TODO: Division par Zero
        value = lVal / rVal;
        break;
    case MOD:
        value = (int)lVal % (int)rVal;
        break;
    default:
        break;
    }
}

void Operation::mute() { setNewOperation(); }

void Operation::mute(Cellule * interaction) {

    assert(interaction != nullptr);

    Cellule * choosen;

    if (rand() % 2 == 0) {
        choosen = operandL;
    } else {
        choosen = operandR;
    }

    if (choosen != nullptr) {
        choosen->removeReference();
    }
    choosen = interaction;
    choosen->addReference();
}

float Operation::getValue() { return value; }