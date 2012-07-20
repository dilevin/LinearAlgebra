#ifdef CSPARSE 
#ifndef _CSPARSEMATRIX_H
#define _CSPARSEMATRIX_H

#include "SparseMatrix.h"
#include "cs.h"

/**
* CSparse Matrix - wrapper class for CSparse sparse matrix tool kit
* TODO: Finish implementing everything
*/

namespace LinearAlgebra 
{

	class CSparseMatrix : public SparseMatrix<double>, public cs_sparse
	{
	public:
		
		CSparseMatrix(const unsigned int m, const unsigned int n, int nnz);

		CSparseMatrix(const CSparseMatrix &toCopy);
		~CSparseMatrix();

		//Operators
		double & operator()(const unsigned int i, const unsigned int j);

	protected:
	private:
	};
}

#endif
#endif