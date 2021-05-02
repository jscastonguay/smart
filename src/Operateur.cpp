#include "Operateur.h"

Operateur::Operateur() : value(0.0), operandL(nullptr), operandR(nullptr) {
    setNewOperation();
}

Operateur::Operateur(Cellule * operandL, Cellule * operandR)
    : value(0.0), operandL(operandL), operandR(operandR) {
    setNewOperation();
}

void Operateur::process() {

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
    }
}

void Operateur::mute() { setNewOperation(); }

float Operateur::getValue() { return value; }