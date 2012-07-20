#ifndef _DENSEMATRIX_H
#define _DENSEMATRIX_H

#include "Matrix.h"

#include <iostream>
/**
* Dense Matrix parent class
* TODO: This should be filled in as a fall back for when no lapack or blas is available
*/

#define DYNAMIC_SIZE 1 //ALLOCATE MATRIX ON HEAP

namespace LinearAlgebra 
{

	template<typename TYPE, unsigned int M, unsigned int N>
	class DenseMatrix : public Matrix<TYPE>
	{
	
	public:

		//Constructor
		explicit DenseMatrix(const unsigned int m, const unsigned int n);

		//Copy Constructor
		DenseMatrix(const DenseMatrix &toCopy);

		//Destructor
		virtual ~DenseMatrix();

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
	template<typename TYPE, unsigned int M, unsigned int N>
	DenseMatrix<TYPE, M, N>::DenseMatrix(const unsigned int m, const unsigned int n) : 
		Matrix<TYPE>()
	{
		m_val = static_cast<TYPE>(0);
	}

	template<typename TYPE, unsigned int M, unsigned int N>
	DenseMatrix<TYPE, M, N>::DenseMatrix(const DenseMatrix &toCopy) : 
	Matrix<TYPE>(toCopy)
	{

	}

	template<typename TYPE, unsigned int M, unsigned int N>
	DenseMatrix<TYPE, M, N>::~DenseMatrix()
	{
		
	}

	template<typename TYPE, unsigned int M, unsigned int N>
	TYPE & DenseMatrix<TYPE, M, N>::operator()(const unsigned int i, const unsigned int j)
	{
		return m_val;
	}

}