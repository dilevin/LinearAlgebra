#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>

#include "GetMatrixType.h"

/**
* Matrix parent class
*/
namespace LinearAlgebra 
{
	template<typename TYPE>
	class Matrix
	{

	public:

		//Constructor
		explicit Matrix(const unsigned int m, const unsigned int n);
		
		//Copy Constructor
		Matrix(const Matrix &toCopy);

		//Destructor
		virtual ~Matrix();

		inline unsigned int getType() { return m_type; }

		//Operators
		virtual TYPE & operator()(const unsigned int i, const unsigned int j) = 0;


	protected:
		unsigned int m_type;

	private:

	};

	//Template Implementation stuff
	template<typename TYPE>
	Matrix<TYPE>::Matrix(const unsigned int m, const unsigned int n) 
	{
		std::cout<<"Matrix Constructor\n";

		//A line like this must appear in each matrix constructor in order
		//for GeneralLinearAlgebra wrapper to work correctly
		m_type = GetMatrixType<Matrix<TYPE> >::matrixType(); 
	}

	template<typename TYPE>
	Matrix<TYPE>::Matrix(const Matrix<TYPE> &toCopy)
	{
		std::cout<<"Matrix Copy Constructor \n";
		this->m_type = toCopy.m_type;
	}

	template<typename TYPE>
	Matrix<TYPE>::~Matrix() 
	{
		std::cout<<"Matrix destructor \n";
	}

}


#endif