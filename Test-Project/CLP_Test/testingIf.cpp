#include <iostream>
#include "../../src/CLP.h"

DYNAMIC_FUNCTION(public, static, void, Testing)
  OPEN_CURLY
  IF CONDITION(NUM_1 == NUM_1)
  OPEN_CURLY
  LOG("It actually worked") SEMI_COLON
  CLOSED_CURLY
  CLOSED_CURLY

INT_MAIN
OPEN_CURLY
CALLFUNC_NOARG(testing)
CLOSED_CURLY
