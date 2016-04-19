//
// Created by Raphael Laubscher on 19/04/16.
//

#include <stdlib.h>

int version = 1; // initialized data
char buffer[200]; // uninitialized data (BSS)

void main(int argc, char* argv[]) // params: stack
{
    int y; // stack
    char* pstr; // stack
    pstr = malloc(100); // heap
    y = func(23); // stack
    free(pstr); // remove from heap
}

int func(int z) // param: stack
{
    char tmp[20]; // stack
    if (z == 23) // stack
        func(7); // stack
    return 3; // stack or register
}