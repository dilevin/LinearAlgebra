#ifndef _SPARSEMATRIX_H
#define _SPARSEMATRIX_H

#include "Matrix.h"
#include <iostream>

/**
* Sparse Matrix parent class
*/

namespace LinearAlgebra 
{

	template<typename TYPE>
	class SparseMatrix : public Matrix<TYPE>
	{

	public:

		//Constructor
		explicit SparseMatrix(const unsigned int m, const unsigned int n, const  int nnz);

		//Copy Constructor
		SparseMatrix(const SparseMatrix &toCopy);

		//Destructor
		virtual ~SparseMatrix();

		//Operators
		virtual TYPE & operator()(const unsigned int i, const unsigned int j);

	protected:

		TYPE m_val;

	private:

	};
}

//Implementations
namespace LinearAlgebra
{
	template<typename TYPE>
	SparseMatrix<TYPE>::SparseMatrix(const unsigned int m, const unsigned int n,  int nnz) : 
	Matrix<TYPE>(m,n)
	{
		m_val = static_cast<TYPE>(0);
	}

	template<typename TYPE>
	SparseMatrix<TYPE>::SparseMatrix(const SparseMatrix &toCopy) : 
	Matrix<TYPE>(toCopy)
	{

	}

	template<typename TYPE>
	SparseMatrix<TYPE>::~SparseMatrix() 
	{

	}

	template<typename TYPE>
	TYPE & SparseMatrix<TYPE>::operator()(const unsigned int i, const unsigned int j)
	{
		return m_val;
	}

}

#endif