#ifndef _GETMATRIXTYPE_H
#define _GETMATRIXTYPE_H
#define UNKNOWN_TYPE 999
namespace LinearAlgebra
{
	//This class gets the integer type of a matrix. The default implementation returns type unknown
	template<typename MATRIX>
	class GetMatrixType 
	{
	public:
		inline explicit GetMatrixType() { }
		static unsigned int matrixType() { return UNKNOWN_TYPE; }
	};

	class CSparseMatrix;

	template<>
	class GetMatrixType<CSparseMatrix>
	{
	public:
		inline explicit GetMatrixType() { }
		static unsigned int matrixType() { return 1; }
	};
}
#endif
