//// STATIC LIBRARY LINKING (.LIB) ////

// In VC++ Directories:
// -> Include Directories we added:
// $(MSBuildProjectDirectory)\..\..\StaticLibrarySample\StaticLibrarySample

// -> Library Directories [for Debug] we added:
// $(MSBuildProjectDirectory)\..\..\StaticLibrarySample\Debug
// -> Library Directories [for Release] we added:
// $(MSBuildProjectDirectory)\..\..\StaticLibrarySample\Release


//#include <stdio.h> // printf
#include <iostream> // printf, cout, cin
#include "StaticLibrarySample.h"

void main()
{
	printf("%d", Plus10(1));

	printf("%d", Add(1, 9));

	printf("%f", MathFuncs::MyMathFuncs::Add(1, 9));
	printf("%f", MathFuncs::MyMathFuncs::Subtract(1, 9));
	printf("%f", MathFuncs::MyMathFuncs::Multiply(1, 9));
	printf("%f", MathFuncs::MyMathFuncs::Divide(1, 9));
}

