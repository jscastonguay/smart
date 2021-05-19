#include "Operator.h"
#include <assert.h>

Operator::Operator() : value(0.0), operandL(nullptr), operandR(nullptr) {
    setNewOperation();
}

Operator::Operator(Cellule * operandL, Cellule * operandR)
    : value(0.0), operandL(operandL), operandR(operandR) {
    setNewOperation();
}

void Operator::process() {

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
        value = lVal / rVal;
        break;
    case MOD:
        value = (int)lVal % (int)rVal;
        break;
    default:
        break;
    }
}

void Operator::mute() { setNewOperation(); }

void Operator::mute(Cellule * interaction) {

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

float Operator::getValue() { return value; }