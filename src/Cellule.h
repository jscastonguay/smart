#ifndef CELLULE_H
#define CELLULE_H

#include <assert.h>

class Cellule {
  private:
    unsigned int nbOfReferences;

  public:
    Cellule() : nbOfReferences(0){};
    void addReference() { nbOfReferences++; };
    void removeReference() {
        assert(nbOfReferences > 0);
        nbOfReferences--;
    }
    virtual void process() = 0;
    virtual float getValue() = 0;
    virtual void mute() = 0;
    virtual void mute(Cellule *) = 0;
};

#endif