#ifndef cmeo_compiler_h
#define cmeo_compiler_h

#include "object.h"

#include "vm.h"
bool compile(const char *source, Chunk *chunk);

#endif
