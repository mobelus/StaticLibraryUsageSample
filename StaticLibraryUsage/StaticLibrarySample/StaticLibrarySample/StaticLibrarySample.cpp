#include "StaticLibrarySample.h"
#include <stdexcept>


int Plus10(int a)
{
	return a + 10;
}

extern "C"
{
	int Add(int a, int b)
	{
		return a + b;
	}
}

namespace MathFuncs
{
	double MyMathFuncs::Add(double a, double b)
	{
		return a + b;
	}

	double MyMathFuncs::Subtract(double a, double b)
	{
		return a - b;
	}

	double MyMathFuncs::Multiply(double a, double b)
	{
		return a * b;
	}

	double MyMathFuncs::Divide(double a, double b)
	{
		if (b == 0)
		{
			throw std::invalid_argument("b cannot be zero!");
		}

		return a / b;
	}
}