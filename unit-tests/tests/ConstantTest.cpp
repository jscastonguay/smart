#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Constant.h"

extern "C" {
/*
 * Add your c-only include files here
 */
}

TEST_GROUP(Constant) {
    void setup(){}
    void teardown(){
        // TODO: À voir l'utilisation de MockSupportPlugin. Voir https://cpputest.github.io/mocking_manual.html
        mock().clear();
    }
};

TEST(Constant, Constructor) {

    // Test basé sur le fait que la fonction srand(time(NULL))
    // n'a pas été appelée: donc la valeur retournée par rand() 
    // est toujours identique.
    mock().expectOneCall("rand").andReturnValue(10);
    mock().expectOneCall("rand").andReturnValue(10);
    //mock().expectOneCall("rand").andReturnValue(10);
    Constant constant;
    CHECK_EQUAL(-10, constant.getValue());

    mock().checkExpectations();
}
