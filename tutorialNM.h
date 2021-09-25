/*----------------------------------------------------------------\
@ Numerical Methods by Young-Keun Kim - Handong Global University

Author           : Eunchan Kim
Created          : 26-03-2018
Modified         : 17-09-2021
Language/ver     : C++ in MSVS2019

Description      : myNM.h
----------------------------------------------------------------*/

#ifndef		_MY_NM_H		// use either (#pragma once) or  (#ifndef ...#endif)
#define		_MY_NM_H
#define		PI		3.14159265358979323846264338327950288419716939937510582
#include <iostream>
#include <string>
#include <fstream>

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Factorial function
extern double factorial(double _x);

// Taylor series approximation for sin(x) using pre-defined functions (input unit: [rad])
extern double sinTaylor(double _x);

// Taylor series approximation for sin(x) using pre-defined functions (input unit: [deg])
extern double sindTaylor(double _x);

// Taylor series approximation for sin(x) without using pre-defined functions (input unit: [rad])
extern double sinTaylor2(double _x);

// Function that reduced the computation cost of sinTaylor2 (input unit: [rad])
extern double sinTaylor3(double _x);

/*----------------------------------------------------------------\
	Vector   NP Library
----------------------------------------------------------------*/

void printVec(double* _vec, int _row);


/*----------------------------------------------------------------\
	Differentiation  NP Library
----------------------------------------------------------------*/
// Return the dy/dx results for the input data. (truncation error: O(h^2))
void gradient1D(double x[], double y[], double dydx[], int m);

// Return the dy/dx results for the target equation. (truncation error: O(h^2))
void gradientFunc(double func(const double x), double x[], double dydx[], int m);

// Tutorial example for callback function 
void func_call(double func(const double x), double xin);

/*----------------------------------------------------------------\
	integration  NP Library
----------------------------------------------------------------*/

double integral(double func(const double x), double a, double b, int N);

double integral38(double func(const double x), double a, double b, int n);

#endif