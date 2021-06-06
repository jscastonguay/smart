#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include <stdlib.h>

int rand(void)
{
    return mock().actualCall("rand").returnIntValue();
}