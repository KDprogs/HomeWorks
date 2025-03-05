#include "calculator.h"

double addit(double num1, double num2) { return num1 + num2; }
double subtr(double num1, double num2) { return num1 - num2; }
double multi(double num1, double num2) { return num1 * num2; }
double divis(double num1, double num2) { return num1 / num2; }
double power(double num1, int num2)
{
	double result{1};
	if (num2 > 0) { for (int i{}; i < num2; i++) { result *= num1; } }
	else if (num2 < 0) { for (int i{}; i > num2; i--) { result /= num1; } }
	return result;
}
