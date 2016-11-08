#ifndef STATIC_LIBRARY_SAMPLE
#define STATIC_LIBRARY_SAMPLE
//#pragma once


int Plus10(int a);

extern "C"
{
	int Add(int a, int b);
}

namespace MathFuncs
{
	// This class is exported from the MathFuncsDll.dll
	class MyMathFuncs
	{
	public:
		// Returns a + b
		static double Add(double a, double b);

		// Returns a - b
		static double Subtract(double a, double b);

		// Returns a * b
		static double Multiply(double a, double b);

		// Returns a / b
		// Throws const std::invalid_argument& if b is 0
		static double Divide(double a, double b);
	};
}

#endif
