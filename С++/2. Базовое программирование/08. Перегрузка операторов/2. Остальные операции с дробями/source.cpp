#include <iostream>

class Fraction
{
public:
	Fraction(int, int);

	void print() const;

	int getNumerator() const;
	int getDenominator() const;
	void setCount(int);

	Fraction operator+(const Fraction&) const;
	Fraction operator-(const Fraction&) const;
	Fraction operator*(const Fraction&) const;
	Fraction operator/(const Fraction&) const;
	Fraction operator-() const;
	Fraction& operator++();
	Fraction operator++(int);
	Fraction& operator--();
	Fraction operator--(int);

private:
	int numerator_;
	int denominator_;
	int count;
};

static std::ostream& operator<<(std::ostream&, const Fraction&);

static Fraction userInputFraction();

static int gcd(int, int);


int main()
{
	setlocale(LC_ALL, "rus");

	Fraction f1(userInputFraction());
	Fraction f2(userInputFraction());

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << '\n';
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << '\n';
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n';
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << '\n';
	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << ++f1 * f2 << '\n';
	f1.print();
	std::cout << f1 << "--" << " * " << f2 << " = ";
	std::cout << f1-- * f2 << '\n';
	f1.print();

	return 0;
}


Fraction::Fraction(int numerator, int denominator)
	: numerator_(numerator), denominator_(denominator), count(0){}

void Fraction::print() const
{
	std::cout << "Значение дроби " << count << " = " << numerator_ << '/' << denominator_ << '\n';
}

int Fraction::getNumerator() const
{
	return numerator_;
}
int Fraction::getDenominator() const
{
	return denominator_;
}
void Fraction::setCount(int count)
{
	this->count = count;
}

Fraction Fraction::operator+(const Fraction& other) const
{
	int num{ numerator_ * other.denominator_ + other.numerator_ * denominator_ };
	int den{ denominator_ * other.denominator_ };

	return Fraction(num / gcd(num, den), den / gcd(num, den));
}
Fraction Fraction::operator-(const Fraction& other) const
{
	return *this + -other;
}
Fraction Fraction::operator*(const Fraction& other) const
{
	int num{ numerator_ * other.numerator_ };
	int den{ denominator_ * other.denominator_ };

	return Fraction(num / gcd(num, den), den / gcd(num, den));
}
Fraction Fraction::operator/(const Fraction& other) const
{
	int num{ numerator_ * other.denominator_ };
	int den{ denominator_ * other.numerator_ };

	return Fraction(num / gcd(num, den), den / gcd(num, den));
}
Fraction Fraction::operator-() const
{
	return Fraction(-numerator_, denominator_);
}
Fraction& Fraction::operator++()
{
	numerator_ += denominator_;
	return *this;
}
Fraction Fraction::operator++(int)
{
	Fraction temp = *this;
	++(*this);
	return temp;
}
Fraction& Fraction::operator--()
{
	numerator_ -= denominator_;
	return *this;
}
Fraction Fraction::operator--(int)
{
	Fraction temp = *this;
	--(*this);
	return temp;
}

static std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
	if (fraction.getNumerator() % fraction.getDenominator() == 0)
	{
		stream << fraction.getNumerator() / fraction.getDenominator();
	}
	else stream << fraction.getNumerator() << '/' << fraction.getDenominator();
	return stream;
}

static Fraction userInputFraction()
{
	int numerator{};
	int denominator{};
	static int count{};

	std::cout << "Введите числитель дроби " << ++count << ": ";
	std::cin >> numerator;
	do
	{
		std::cout << "Введите знаменатель дроби " << count << ": ";
		std::cin >> denominator;
	} while (denominator == 0 && std::cout << "Знаменатель не может быть равен нулю!\n");

	Fraction fraction(numerator, denominator);
	fraction.setCount(count);

	return fraction;
}

static int gcd(int num, int den)
{
	while (den != 0)
	{
		int t = den;
		den = num % den;
		num = t;
	}
	return num < 0 ? -num : num;
}
