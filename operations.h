#ifndef OPERATIONS_H
#define OPERATIONS_H

/* Arithmetic Operations */
double add(double num1, double num2);

double subtract(double num1, double num2);

double multiply(double num1, double num2);

double divideNumbers(double num1, double num2);

/* Mathematical Operations */

int modulus(int num1, int num2);

double power(double base, double exponent);

double square(double number);

double squareRoot(double number);

double percentage(double total, double obtained);

/* Utility Functions */

int isDivisionValid(double divisor);

int isModulusValid(int divisor);

int isSquareRootValid(double number);

int isPercentageValid(double total);

#endif