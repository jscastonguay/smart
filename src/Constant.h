#ifndef CONSTANT_H
#define CONSTANT_H

#include "Cellule.h"
#include <stdlib.h>

class Constant : public Cellule {

  private:
    float value;
    const int MULTIPIER = 2;

    inline void setSign(float * value) {
        if (rand() % 2 == 0) {
            *value = -(*value);
        }
    };

  public:
    Constant();
    void process();
    float getValue();
    void mute();
};

#endif