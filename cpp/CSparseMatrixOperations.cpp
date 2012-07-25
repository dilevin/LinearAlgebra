#ifdef CSPARSE
#include "CSparseMatrixOperations.h"

using namespace LinearAlgebra;

#ifdef __cplusplus
extern "C" {
#endif

int multiply(CSparseMatrix *C, CSparseMatrix *A, CSparseMatrix *B)
{ 
	std::cout<<"CSparse Multiply \n"; 
	return 1;
}

#ifdef __cplusplus
}

#endif
#endif