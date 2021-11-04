#pragma once

// The Class System allows for dynamic creation of Classes in your programm

#define DYNAMIC_CLASS(className) class className
#define PUBLIC public:
#define PRIVATE private:
#define PROTECTED protected:

// Inheritance

// Public Inherit
#define INHERIT(classToInherit) : public classToInherit

//Private Inherit
#define INHERIT_PRIVATE(classToInherit) : classToInherit