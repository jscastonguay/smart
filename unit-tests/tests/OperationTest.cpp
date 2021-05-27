#include "CppUTest/TestHarness.h"
#include "Operation.h"

extern "C" {
/*
 * Add your c-only include files here
 */
}

TEST_GROUP(Operation) {
    void setup(){}
    void teardown(){}
};

TEST(Operation, Constructor) {

    // Test basé sur le fait que la fonction srand(time(NULL))
    // n'a pas été appelée: donc la valeur retournée par rand() 
    // est toujours identique.
    Operation operation;
    CHECK_EQUAL(0.0, operation.getValue());
}