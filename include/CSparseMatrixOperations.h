#ifdef CSPARSE
#ifndef _CSPARSE_H
#define _CSPARSE_H
#include "CSparseMatrix.h"

#ifdef __cplusplus
extern "C" {
#endif

namespace LinearAlgebra
{
	int multiply(CSparseMatrix *C, CSparseMatrix *A, CSparseMatrix *B);
}

#ifdef __cplusplus
}
#endif
#endif
#endif