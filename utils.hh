// File "utils.hh" created July 2019
// Copyright (c) Lion Kortlepel 2019
#ifndef NES_UTILS_HH
#define NES_UTILS_HH

#include <fstream>
#include "logging.hh"

/*
 * Utilities used by this NES emulator, 
 * during normal operation as well as during development.
 */

template<std::size_t _Size, typename _StrType>
void memdump (const _StrType& file, unsigned char mem[_Size])
{
    std::ofstream out (file, std::ios::binary);
    for (std::size_t i = 0; i < _Size; ++i)
    {
        out.put (mem[i]);
    }
    out.close ();
}

template<std::size_t _Size, typename _StrType>
void memload (const _StrType& file, unsigned char mem[_Size])
{
    try
    {
        std::ifstream in (file, std::ios::binary);
        
        for (std::size_t i = 0; i < _Size; ++i)
        {
            in.get ((char&) mem[i]);
        }
    }
    catch (std::exception& e)
    {
        log_err (e.what ());
    }
}

template<typename _StrType>
void memload_all (const _StrType& file, unsigned char* mem, std::size_t start = 0x0)
{
    std::ifstream in (file, std::ios::binary);
    for (std::size_t i = start; !in.eof (); ++i)
    {
        in.get (reinterpret_cast<char&> (mem[i]));
    }
}

#endif //NES_UTILS_HH
