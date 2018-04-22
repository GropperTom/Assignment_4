#pragma once

#include <iostream>

using namespace std;

class CircularInt {

	int min;
	int max;
	int value;

public:

	// *** Constructors *** //
	CircularInt(int min, int max);

	// *** Operators *** //
		// *** Arithmetic *** //
			// *** Assignment *** //
	CircularInt& operator=(const CircularInt& other);

			// *** Addition *** //
	CircularInt operator+(const CircularInt& other);
	CircularInt operator+(const int& other);
	friend CircularInt operator+(const int& a, CircularInt b);

			// *** Substraction *** //
	CircularInt operator-(const CircularInt& other);
	CircularInt operator-(const int& other);
	friend CircularInt operator-(const int& a, CircularInt b);

			// *** Negative *** //
	CircularInt operator-();

			// *** Multiplaication *** //
	CircularInt operator*(const CircularInt& other);
	CircularInt operator*(const int& other);
	friend CircularInt operator*(const int& a, CircularInt b);

			// *** Division *** //
	CircularInt operator/(const CircularInt& other);
	CircularInt operator/(const int& other);
	friend CircularInt operator/(const int& a, CircularInt b);

			// *** Modulus *** //
	CircularInt operator%(const CircularInt& other);
	CircularInt operator%(const int& other);
	friend CircularInt operator%(const int& a, CircularInt b);

			// *** Compound Addition *** //
	CircularInt& operator+=(const CircularInt& other);
	CircularInt& operator+=(const int& other);

			// *** Compound Substraction *** //
	CircularInt& operator-=(const CircularInt& other);
	CircularInt& operator-=(const int& other);

			// *** Compound Multiplication *** //
	CircularInt& operator*=(const CircularInt& other);
	CircularInt& operator*=(const int& other);

			// *** Compound Division *** //
	CircularInt& operator/=(const CircularInt& other);
	CircularInt& operator/=(const int& other);

			// *** Compound Modulus *** //
	CircularInt& operator%=(const CircularInt& other);
	CircularInt& operator%=(const int& other);

			// *** Increment *** //
	CircularInt& operator++();
	CircularInt operator++(int);

			// *** Decrement *** //
	CircularInt& operator--();
	CircularInt operator--(int);

		// *** Bitwise *** //
			// *** AND *** //
	CircularInt operator&(const CircularInt& other);
	CircularInt operator&(const int& other);
	friend CircularInt operator&(const int& a, CircularInt b);

			// *** OR *** //
	CircularInt operator|(const CircularInt& other);
	CircularInt operator|(const int& other);
	friend CircularInt operator|(const int& a, CircularInt b);

			// *** XOR *** //
	CircularInt operator^(const CircularInt& other);
	CircularInt operator^(const int& other);
	friend CircularInt operator^(const int& a, CircularInt b);

			// *** Ones Complement *** //
	CircularInt operator~();

			// *** Left Shift *** //
	CircularInt operator<<(const CircularInt& other);
	CircularInt operator<<(const int& other);
	friend CircularInt operator<<(const int& a, CircularInt b);

			// *** Right Shift *** //
	CircularInt operator>>(const CircularInt& other);
	CircularInt operator>>(const int& other);
	friend CircularInt& operator>>(const int& a, CircularInt b);

			// *** Compound AND *** //
	CircularInt& operator&=(const CircularInt& other);
	CircularInt& operator&=(const int& other);

			// *** Compound OR *** //
	CircularInt& operator|=(const CircularInt& other);
	CircularInt& operator|=(const int& other);

			// *** Compound XOR *** //
	CircularInt& operator^=(const CircularInt& other);
	CircularInt& operator^=(const int& other);

			// *** Compound Left Shift *** //
	CircularInt& operator<<=(const CircularInt& other);
	CircularInt& operator<<=(const int& other);

			// *** Compound Right Shift *** //
	CircularInt& operator>>=(const CircularInt& other);
	CircularInt& operator>>=(const int& other);

		// *** Relational *** //
			// *** Equlity *** //
	bool operator==(const CircularInt& other);
	bool operator==(const int& other);
	friend bool operator==(const int& a, CircularInt b);

			// *** Inequality *** //
	bool operator!=(const CircularInt& other);
	bool operator!=(const int& other);
	friend bool operator!=(const int& a, CircularInt b);

			// *** Greater Than *** //
	bool operator>(const CircularInt& other);
	bool operator>(const int& other);
	friend bool operator>(const int& a, CircularInt b);

			// *** Less Than *** //
	bool operator<(const CircularInt& other);
	bool operator<(const int& other);
	friend bool operator<(const int& a, CircularInt b);

			// *** Greater Than Or Equal To *** //
	bool operator>=(const CircularInt& other);
	bool operator>=(const int& other);
	friend bool operator>=(const int& a, CircularInt b);

			// *** Less Than Or Equal To *** //
	bool operator<=(const CircularInt& other);
	bool operator<=(const int& other);
	friend bool operator<=(const int& a, CircularInt b);
	
		// *** Streams *** //
			// *** Insertion to stream *** //
	friend ostream& operator<<(ostream& out, const CircularInt& cirInt);

			// *** Extraction from stream *** //
	friend istream& operator>>(istream& in, const CircularInt& cirInt);

};
