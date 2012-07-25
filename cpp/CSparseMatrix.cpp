#ifdef CSPARSE

#include "CSparseMatrix.h"

using namespace LinearAlgebra;

CSparseMatrix::CSparseMatrix(const unsigned int m, const unsigned int n, int nnz) : 
	SparseMatrix<double>(m,n,nnz)
{
	m_type = GetMatrixType<CSparseMatrix>::matrixType();
}

	CSparseMatrix::CSparseMatrix(const CSparseMatrix &toCopy) : SparseMatrix(toCopy) 
{
	std::cout<<"CSparseMatrix copy constructor not implemented\n";
}

CSparseMatrix::~CSparseMatrix()
{
	std::cout<<"CSparseMatrix destructor not implemented\n";
}

//Operators
double & CSparseMatrix::operator()(const unsigned int i, const unsigned int j)
{
	std::cout<<"CSparseMatrix operator()\n";
	return this->x[0];
}

#endif