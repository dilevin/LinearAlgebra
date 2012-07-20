#ifndef _MATRIXOPERATIONS_H
#define _MATRIXOPERATIONS_H

#include "Matrix.h"

//Library includes 
//TODO: Perhaps generate this automatically using the build system
#include "CSparseMatrixOperations.h"

/**
* Matrix Operations is just a collection of Linear Algebra operations.
* These methods get invoked whenever a method for a specific class does not exist
* All operations should be of the form int methodName(Matrix *out, Matrix *Param1,...,Matrix *Paramn)
* where int is 1 for success and zero for failure
*/
namespace LinearAlgebra 
{
	template<typename TYPE>
	int multiply(Matrix<TYPE> *C, Matrix<TYPE> *A, Matrix<TYPE> *B);
}


//function implementations (i.e. the problem with templates is that everything lives in the header)
namespace LinearAlgebra 
{
	template<typename TYPE>
	int multiply(Matrix<TYPE> *C, Matrix<TYPE> *A, Matrix<TYPE> *B)
	{
		std::cout<<"Default Matrix multiply, does nothing \n";
		return 0;
	}
}
#endif
