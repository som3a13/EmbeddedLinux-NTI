#include <iostream>


int * fun()
{
    static int y=10;
    return &y;
}