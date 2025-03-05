#include "parallelogram.h"

Parallelogram::Parallelogram() : Quadrangle(20, 30, 30, 40)
{
	c = a; d = b; C = A; D = B;
	name = "Параллелограмм";
}
