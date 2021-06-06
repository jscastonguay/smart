#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Operation.h"

extern "C" {
/*
 * Add your c-only include files here
 */
}

TEST_GROUP(Operation) {
    void setup(){}
    void teardown() {
        mock().clear();
    }
};

TEST(Operation, Constructor) {

    mock().expectOneCall("rand").andReturnValue(10);

    Operation operation;
    CHECK_EQUAL(0.0, operation.getValue());
    mock().checkExpectations();
}