#include "CppUTest/TestHarness.h"
#include "Constant.h"

extern "C" {
/*
 * Add your c-only include files here
 */
}

TEST_GROUP(Constant) {
    void setup(){}
    void teardown(){}
};

TEST(Constant, Constructor) {

    // Test basé sur le fait que la fonction srand(time(NULL))
    // n'a pas été appelée: donc la valeur retournée par rand() 
    // est toujours identique.
    Constant constant;
    CHECK_EQUAL(-83.0, constant.getValue());
}
