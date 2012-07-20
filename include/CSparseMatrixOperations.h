#ifdef CSPARSE
#ifndef _CSPARSE_H
#define _CSPARSE_H
#include "CSparseMatrix.h"

namespace LinearAlgebra
{

	inline int multiply(CSparseMatrix *C, CSparseMatrix *A, CSparseMatrix *B) { std::cout<<"CSparse Multiply \n"; return 1;}
}

#endif
#endif