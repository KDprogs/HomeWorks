#include <iostream>

class Fraction
{
public:
	Fraction(int, int);

	bool operator==(const Fraction&) const;
	bool operator!=(const Fraction&) const;
	bool operator<(const Fraction&) const;
	bool operator>(const Fraction&) const;
	bool operator<=(const Fraction&) const;
	bool operator>=(const Fraction&) const;

private:
	int numerator_;
	int denominator_;
};


int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	return 0;
}


Fraction::Fraction(int numerator, int denominator)
	: numerator_(numerator), denominator_(denominator){}

bool Fraction::operator==(const Fraction& other) const
{
	return (numerator_ * other.denominator_) == (other.numerator_ * denominator_);
}
bool Fraction::operator!=(const Fraction& other) const
{
	return !(*this == other);
}
bool Fraction::operator<(const Fraction& other) const
{
	return (numerator_ * other.denominator_) < (other.numerator_ * denominator_);
}
bool Fraction::operator>(const Fraction& other) const
{
	return other < *this;
}
bool Fraction::operator<=(const Fraction& other) const
{
	return !(*this > other);
}
bool Fraction::operator>=(const Fraction& other) const
{
	return !(*this < other);
}
