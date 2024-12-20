#pragma once

#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif


class MYDLL_API MyClass {
public:
    int add(int a, int b);
};
// Function declarations
//extern "C" {
//    MYDLL_API void sayHello();
//    MYDLL_API int add(int a, int b);
//}

//extern "C" {
//    MyClass;
//}