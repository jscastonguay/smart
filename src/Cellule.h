#ifndef CELLULE_H
#define CELLULE_H

class Cellule {

  public:
    virtual void process() = 0;
    virtual float getValue() = 0;
    virtual void mute() = 0;
};

#endif