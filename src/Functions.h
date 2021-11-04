#pragma once

// Allows for Dynamic Creation of functions in your programs

#define PUBLIC_FUNCTION(funcName, returnType) public returnType funcName()

// Return Types

#define INT_FUNCTION(funcName) static int funcName()
#define VOID_FUNCTION(funcName) static void funcName()
#define STRING_FUNCTION(funcName) static std::string funcName()
#define CHAR_FUNCTION(funcName) static char funcName()
#define FLOAT_FUNCTION(funcName) static float funcName()

// Virtual Functions

#define VIRTUAL_INT_FUNCTION(funcName) virtual int funcName()
#define VIRTUAL_VOID_FUNCTION(funcName) virtual void funcName()
#define VIRTUAL_STRING_FUNCTION(funcName) virtual std::string funcName()
#define VIRTUAL_CHAR_FUNCTION(funcName) virtual char funcName()
#define VIRTUAL_FLOAT_FUNCTION(funcName) virtual float funcName()

// Dead Functions

/*

Dead Functions are the same as the basic functions just with No implementation, because when the object is instantiated the function
does not exist yet. I am working on a workaround but for now this is the best we got

*/


// Might have fixed them, these may be outdated and not used
#define DEAD_INT_FUNCTION(funcName) int funcName();
#define DEAD_VOID_FUNCTION(funcName) void funcName();
#define DEAD_STRING_FUNCTION(funcName) std::string funcName();
#define DEAD_CHAR_FUNCTION(funcName) char funcName();
#define DEAD_FLOAT_FUNCTION(funcName) float funcName();