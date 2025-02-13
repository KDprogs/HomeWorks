#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	// a = a + b;
	// b = a - b;
	// a = a - b;

	// ((short*)&a)[1] = ((short*)&b)[0];
	// ((short*)&b)[0] = ((short*)&a)[0];
	// ((short*)&a)[0] = ((short*)&a)[1];
	// ((short*)&a)[1] = 0;
}

int main()
{
	int a = 5;
	int b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
