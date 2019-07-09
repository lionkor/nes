// File "logging.hh" created July 2019
// Copyright (c) Lion Kortlepel 2019
#ifndef NES_LOGGING_HH
#define NES_LOGGING_HH

#include <exception>
#include <iostream>

// a way to pass current location to logging functions
// CLOC = CodeLocation
#define CLOC __FILE__, __LINE__

#define log_err(e) std::cerr << __TIME__ << ": An exception got caught at " << __FILE__ << ":" << __LINE__ << " : " << e << std::endl

#endif //NES_LOGGING_HH
