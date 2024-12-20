%module mydll
%{
#include "mydll.h"
%}

extern "C" {
    class  MyClass {
public:
    int add(int a, int b);
};
}