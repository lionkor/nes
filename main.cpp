#include <iostream>
#include <cstring>
#include "utils.hh"

int main ()
{
    unsigned char mem[2000];
    memload<3000> ("myfile", mem);
    return 0;
}
