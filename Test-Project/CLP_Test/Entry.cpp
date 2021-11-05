#include <iostream>
#include "Entry.h"


DYNAMIC_CLASS(testing)
OPEN_CURLY
VOID_FUNCTION(testing_Func)()
OPEN_CURLY
LOG("Hi!!!");
CLOSED_CURLY
CLOSED_CURLY
SEMI_COLON

DYNAMIC_CLASS(testing_Inherit) INHERIT(testing)
OPEN_CURLY
CLOSED_CURLY
SEMI_COLON

INT_FUNCTION(Addition)(int x, int y)
OPEN_CURLY
RETURN_INT(x + y)
CLOSED_CURLY

VOID_FUNCTION(AdditionAndLog) OPEN_PARENTHESE int x, int y CLOSED_PARENTHESE
OPEN_CURLY
LOG(x + y)
CLOSED_CURLY

INT_MAIN
OPEN_CURLY
// Testing STRING
STRING(test) = "Hello" SEMI_COLON
LOG_NEWLINE(test)

// Sets value of a variable using 
INT(testing) = NUM_2;
LOG_NEWLINE(testing)

// Testing Return Types
INT(returnValue) EQUAL CALL_FUNCTION(Addition)(NUM_1, NUM_5);
LOG_NEWLINE(returnValue);

// Testing Outside Logs
CALL_FUNCTION(AdditionAndLog)(NUM_4, NUM_6);

CLOSED_CURLY
