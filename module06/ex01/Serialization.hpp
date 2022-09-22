#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "Data.hpp"

#include <stdint.h>

uintptr_t	serialize(Data* ptr);

Data	*deserialize(uintptr_t raw);


#endif