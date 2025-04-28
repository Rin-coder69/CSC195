#pragma once
#include <iostream>
namespace mathlib {
	template <typename T>


	class Fraction {
	public:
		T num;
		T den;
		Fraction() {};
		Fraction(T Numerator,  T Denominator) {
			num = Numerator;
			den = Denominator;

			if (Denominator == 0)
			{
				std::cout << "Denominator cannot be zero.\n";
				den = 1; // Set to a default value to avoid division by zero
			}
			else
			{
				den = Denominator;
			}

		};
		Fraction <T> operator + (const Fraction<T>& other) const
		{
			
			return Fraction<T>(num * other.den + other.num * den, den * other.den);
			
		}
		Fraction <T> operator - (const Fraction<T>&other) const {
			return Fraction<T>(num * other.den - other.num * den, den * other.den);
		}
		Fraction <T> operator * (const Fraction<T>& other) const {
			return Fraction<T>(num * other.num, den * other.den);
		}
		Fraction <T> operator / (const Fraction<T>& other) const {
			return Fraction<T>(num * other.den, den * other.num);
		}
		bool operator == (const Fraction<T>& other) const {
			return (num * other.den == other.num * den);
		}
		bool operator != (const Fraction<T>& other) const {
			return !(*this == other);
		}
		bool operator < (const Fraction<T>& other) const {
			return (num * other.den < other.num * den);
		}
		bool operator > (const Fraction<T>& other) const {
			return (num * other.den > other.num * den);
		}
		bool operator <= (const Fraction<T>& other) const {
			return (num * other.den <= other.num * den);
		}
		bool operator >= (const Fraction<T>& other) const {
			return (num * other.den >= other.num * den);
		}

		T findGCD(T a, T b) const {
			while (b != 0) {
				T t = b;
				b = a % b;
				a = t;
			}
			return a;
			}
		
			Fraction <T> simplify()const {
			T gcd = findGCD(abs(num), abs(den));
			T simplifiedNumerator = num / gcd;
			T simplifiedDenominator = den / gcd;
			if (simplifiedDenominator < 0) {
				simplifiedNumerator = -simplifiedNumerator;
				simplifiedDenominator = -simplifiedDenominator;
			}
			return Fraction<T>(simplifiedNumerator, simplifiedDenominator);
		}
		 float ToFloat() const {
			return float(num) / den;
		}
		 friend std::istream& operator >> (std::istream& istream, Fraction<T>& fraction)
		{
			istream >> fraction.num >> fraction.den;
			return istream;
			
		}
		friend std::ostream& operator << (std::ostream& ostream, const Fraction<T>& fraction)
		{
			ostream << fraction.num << "/" << fraction.den;
			return ostream;
		}
	};
}