#include <iostream>
#include "Entry.h"


DYNAMIC_CLASS(testing)
OPEN_CURLY
VOID_FUNCTION(testing_Func)
OPEN_CURLY
LOG("Hi!!!");
CLOSED_CURLY
CLOSED_CURLY
SEMI_COLON

DYNAMIC_CLASS(testing_Inherit) INHERIT(testing)
OPEN_CURLY
CLOSED_CURLY
SEMI_COLON

INT_MAIN
OPEN_CURLY
STRING(test) = "Hello" SEMI_COLON
LOG(test)
CLOSED_CURLY