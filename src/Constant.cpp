#include "Constant.h"
#include <stdlib.h>

Constant::Constant() {
    value = rand();
    setSign(&value);
}

void Constant::process() {}

float Constant::getValue() {
    return value;
}

void Constant::mute() {
    float factor = rand();
    factor = (factor / RAND_MAX) * MULTIPIER;
    setSign(&factor);
}