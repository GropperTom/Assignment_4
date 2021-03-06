#include "CircularInt.hpp"
#include <string>

using namespace std;
// *** Constructors *** //
CircularInt::CircularInt(int min, int max) {
	if (min < max) {
		this->min = min;
		this->max = max;
		this->value = min;
	}
	// im not sure what to do if min >= max.
}

CircularInt::CircularInt(const CircularInt& other) {
	if (*this != other) {
		min = other.min;
		max = other.max;
		value = other.value;
	}
}

// *** Public Methods *** //
int CircularInt::getValue() { return value; }

// *** Private Methods *** //
void CircularInt::calcVal() {
	while(value > max) {
		value -= (max - min + 1);
	}
	while(value < min) {
		value += (max - min + 1);
	}
}

// *** Operators *** //
	// *** Assignment *** //
CircularInt CircularInt::operator=(const int other) {
	value = other;
	calcVal();
	return *this;
}

	// *** Arithmetic *** //
		// *** Addition *** //
CircularInt CircularInt::operator+(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value += other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator+(const int other) {
	CircularInt ret = *this;
	ret.value += other;
	ret.calcVal();
	return ret;
}

CircularInt operator+(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a + b.value;
	ret.calcVal();
	return ret;
}

		// *** Substraction *** //
CircularInt CircularInt::operator-(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value -= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator-(const int other) {
	CircularInt ret = *this;
	ret.value -= other;
	ret.calcVal();
	return ret;
}

CircularInt operator-(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a - b.value;
	ret.calcVal();
	return ret;
}

		// *** Negative *** //
CircularInt CircularInt::operator-() {
	CircularInt ret = *this;
	ret.value = max - (value - min  + 1);
	ret.calcVal();
	return ret;
}

		// *** Multiplication *** //
CircularInt CircularInt::operator*(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value *= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator*(const int other) {
	CircularInt ret = *this;
	ret.value *= other;
	ret.calcVal();
	return ret;
}

CircularInt operator*(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a * b.value;
	ret.calcVal();
	return ret;
}

		// *** Division *** //
CircularInt CircularInt::operator/(const CircularInt & other) {
	CircularInt ret = *this;
	return ret / other.value;
}

CircularInt CircularInt::operator/(const int other) {
	CircularInt ret = *this;
	if (other == 0) {
		throw std::string("received zero!");
	}
	else {
		for (int i = ret.min; i <= ret.max; i++) {
			ret.value = i;
			ret.calcVal();
			if (ret.value * other == value) {
				return ret;
			}
		}
	}
	string msg = "There is no number x in {" + to_string(min) + "," + to_string(max) + "} such that x*" + to_string(other) + "=" + to_string(value);
	throw std::string(msg);
}

CircularInt operator/(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a / b.value;
	ret.calcVal();
	return ret;
}

		// *** Modulus *** //
CircularInt CircularInt::operator%(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value %= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator%(const int other) {
	CircularInt ret = *this;
	ret.value %= other;
	ret.calcVal();
	return ret;
}

CircularInt operator%(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a % b.value;
	ret.calcVal();
	return ret;
}

		// *** Compound Addition *** //
CircularInt & CircularInt::operator+=(const CircularInt & other) {
	value += other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator+=(const int other) {
	value += other;
	calcVal();
	return *this;
}

		// *** Compound Substraction *** //
CircularInt & CircularInt::operator-=(const CircularInt & other) {
	value -= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator-=(const int other) {
	value -= other;
	calcVal();
	return *this;
}

		// *** Compound Multiplication *** //
CircularInt & CircularInt::operator*=(const CircularInt & other) {
	value *= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator*=(const int other) {
	value *= other;
	calcVal();
	return *this;
}

		// *** Compound Division *** //
CircularInt & CircularInt::operator/=(const CircularInt & other) {
	*this /= other.value;
	return *this;
}

CircularInt & CircularInt::operator/=(const int other) {
	if (other == 0) {
		throw std::string("received zero!");
	}
	else {
		for (int i = min; i <= max; i++) {
			value = i;
			calcVal();
			if (value * other == value) {
				return *this;
			}
		}
	}
	string msg = "There is no number x in {" + to_string(min) + "," + to_string(max) + "} such that x*" + to_string(other) + "=" + to_string(value);
	throw std::string(msg);
}

		// *** Compound Modulus *** //
CircularInt & CircularInt::operator%=(const CircularInt & other) {
	value %= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator%=(const int other) {
	value %= value;
	calcVal();
	return *this;
}

		// *** Increment *** //
CircularInt & CircularInt::operator++() {
	++value;
	calcVal();
	return *this;
}

CircularInt CircularInt::operator++(int) {
	CircularInt ret = *this;
	++value;
	calcVal();
	return ret;
}

		// *** Decrement *** //
CircularInt & CircularInt::operator--() {
	--value;
	calcVal();
	return *this;
}

CircularInt CircularInt::operator--(int) {
	CircularInt ret = *this;
	--value;
	calcVal();
	return ret;
}

	// *** Bitwise *** //
		// *** AND *** //
CircularInt CircularInt::operator&(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value &= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator&(const int other) {
	CircularInt ret = *this;
	ret.value &= other;
	ret.calcVal();
	return ret;
}

CircularInt operator&(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a & b.value;
	ret.calcVal();
	return ret;
}

		// *** OR *** //
CircularInt CircularInt::operator|(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value |= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator|(const int other) {
	CircularInt ret = *this;
	ret.value |= other;
	ret.calcVal();
	return ret;
}

CircularInt operator|(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a | b.value;
	ret.calcVal();
	return ret;
}

		// *** XOR *** //
CircularInt CircularInt::operator^(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value ^= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator^(const int other) {
	CircularInt ret = *this;
	ret.value ^= other;
	ret.calcVal();
	return ret;
}

CircularInt operator^(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a ^ b.value;
	ret.calcVal();
	return ret;
}

		// *** Ones Complement *** //
CircularInt CircularInt::operator~() {
	CircularInt ret = *this;
	ret.value = ~ret.value;
	ret.calcVal();
	return ret;
}

		// *** Left Shift *** //
CircularInt CircularInt::operator<<(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value <<= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator<<(const int other) {
	CircularInt ret = *this;
	ret.value <<= other;
	ret.calcVal();
	return ret;
}

CircularInt operator<<(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a << b.value;
	ret.calcVal();
	return ret;
}

		// *** Right Shift *** //
CircularInt CircularInt::operator>>(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value >>= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator>>(const int other) {
	CircularInt ret = *this;
	ret.value >>= other;
	ret.calcVal();
	return ret;
}

CircularInt operator>>(const int a, CircularInt b) {
	CircularInt ret = b;
	ret.value = a >> b.value;
	ret.calcVal();
	return ret;
}

		// *** Compound AND *** //
CircularInt & CircularInt::operator&=(const CircularInt & other) {
	value &= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator&=(const int other) {
	value &= other;
	calcVal();
	return *this;
}

		// *** Compound OR *** //
CircularInt & CircularInt::operator|=(const CircularInt & other) {
	value |= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator|=(const int other) {
	value |= other;
	calcVal();
	return *this;
}

		// *** Compound XOR *** //
CircularInt & CircularInt::operator^=(const CircularInt & other) {
	value ^= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator^=(const int other) {
	value ^= other;
	calcVal();
	return *this;
}

		// *** Compound Left Shift *** //
CircularInt & CircularInt::operator<<=(const CircularInt & other) {
	value <<= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator<<=(const int other) {
	value <<= other;
	calcVal();
	return *this;
}

		// *** Compound Right Shift *** //
CircularInt & CircularInt::operator>>=(const CircularInt & other) {
	value >>= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator>>=(const int other) {
	value >>= other;
	calcVal();
	return *this;
}

	// *** Relational *** //
		// *** Equality *** //
bool CircularInt::operator==(const CircularInt & other) {
	return value == other.value && min == other.min && max == other.max;
}

bool CircularInt::operator==(const int other) {
	return value == other;
}

bool operator==(const int a, CircularInt b) {
	return a == b.value;
}

		// *** Inequality *** //
bool CircularInt::operator!=(const CircularInt & other) {
	return !(value == other.value);
}

bool CircularInt::operator!=(const int other) {
	return value != other;
}

bool operator!=(const int a, CircularInt b) {
	return a != b.value;
}

		// *** Greater Than *** //
bool CircularInt::operator>(const CircularInt & other) {
	return value > other.value;
}

bool CircularInt::operator>(const int other) {
	return value > other;
}

bool operator>(const int a, CircularInt b) {
	return a > b.value;
}

		// *** Less Than *** //
bool CircularInt::operator<(const CircularInt & other) {
	return value < other.value;
}

bool CircularInt::operator<(const int other) {
	return value < other;
}

bool operator<(const int a, CircularInt b) {
	return a < b.value;
}

		// *** Greater Than Or Equal To *** //
bool CircularInt::operator>=(const CircularInt & other) {
	return value >= other.value;
}

bool CircularInt::operator>=(const int other) {
	return value >= other;
}

bool operator>=(const int a, CircularInt b){
	return a >= b.value;
}

		// *** Less Than OR Equal To *** //
bool CircularInt::operator<=(const CircularInt & other) {
	return value <= other.value;
}

bool CircularInt::operator<=(const int other) {
	return value <= other;
}

bool operator<=(const int a, CircularInt b) {
	return a <= b.value;
}

	// *** Streams *** //
		// *** Insertion To Stream *** //
ostream & operator<<(ostream & out, const CircularInt & cirInt) {
	out << cirInt.value;
	return out;
}
		
		// *** Extraction From Stream *** //
istream & operator>>(istream & in, CircularInt & cirInt) {
	int value;
	in >> value;
	cirInt.value = value;
	cirInt.calcVal();
	return in;
}
