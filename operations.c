/*
===============================================================
                operations.c
        CodeAlpha Calculator Project
        Developed by Nandini Pisal
===============================================================
*/

#include <stdio.h>
#include <math.h>

#include "operations.h"

/* ============================================================
                    Arithmetic Operations
============================================================ */

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divideNumbers(double num1, double num2)
{
    return num1 / num2;
}

/* ============================================================
                   Mathematical Operations
============================================================ */

int modulus(int num1, int num2)
{
    return num1 % num2;
}

double power(double base, double exponent)
{
    return pow(base, exponent);
}

double square(double number)
{
    return number * number;
}

double squareRoot(double number)
{
    return sqrt(number);
}

double percentage(double total, double obtained)
{
    return (obtained / total) * 100.0;
}

/* ============================================================
                    Validation Functions
============================================================ */

int isDivisionValid(double divisor)
{
    if(divisor == 0)
        return 0;

    return 1;
}

int isModulusValid(int divisor)
{
    if(divisor == 0)
        return 0;

    return 1;
}

int isSquareRootValid(double number)
{
    if(number < 0)
        return 0;

    return 1;
}

int isPercentageValid(double total)
{
    if(total == 0)
        return 0;

    return 1;
}