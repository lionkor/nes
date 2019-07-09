// File "nes.hh" created July 2019
// Copyright (c) Lion Kortlepel 2019
#ifndef NES_NES_HH
#define NES_NES_HH


class Nes
{
public:
    // 0x800 = 2048 = 2kB
    // 2kB Onboard CPU memory. Cartriges may come with additional memory.
    unsigned char memory[0x800];
    
};


#endif //NES_NES_HH
