#include "CircularInt.hpp"

using namespace std;
// *** Constructors *** //
CircularInt::CircularInt(int min, int max) {
	if (min < max) {
		this->min = min;
		this->max = max;
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
int CircularInt::calcVal() {
	if (value < min || max < value) {
		value = (value - min) % (max - min);
		if (value >= 0) value += min;
		else value = (max - value) + min;
	}
}

// *** Operators *** //
	// *** Arithmetic *** //
		// *** Addition *** //
CircularInt CircularInt::operator+(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value += other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator+(const int & other) {
	CircularInt ret = *this;
	ret.value += other;
	ret.calcVal();
	return ret;
}

int operator+(const int & a, CircularInt b) {
	return a + b.value;
}

		// *** Substraction *** //
CircularInt CircularInt::operator-(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value -= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator-(const int & other) {
	CircularInt ret = *this;
	ret.value -= other;
	ret.calcVal();
	return ret;
}

int operator-(const int & a, CircularInt b) {
	return a - b.value;
}

		// *** Negative *** //
CircularInt CircularInt::operator-() {
	CircularInt ret = *this;
	ret.value = -ret.value;
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

CircularInt CircularInt::operator*(const int & other) {
	CircularInt ret = *this;
	ret.value *= other;
	ret.calcVal();
	return ret;
}

int operator*(const int & a, CircularInt b) {
	return a * b.value;
}

		// *** Division *** //
CircularInt CircularInt::operator/(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value /= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator/(const int & other) {
	CircularInt ret = *this;
	ret.value /= other;
	ret.calcVal();
	return ret;
}

int operator/(const int & a, CircularInt b) {
	return a / b.value;
}

		// *** Modulus *** //
CircularInt CircularInt::operator%(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value %= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator%(const int & other) {
	CircularInt ret = *this;
	ret.value %= other;
	ret.calcVal();
	return ret;
}

int operator%(const int & a, CircularInt b) {
	return a % b.value;
}

		// *** Compound Addition *** //
CircularInt & CircularInt::operator+=(const CircularInt & other) {
	value += other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator+=(const int & other) {
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

CircularInt & CircularInt::operator-=(const int & other) {
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

CircularInt & CircularInt::operator*=(const int & other) {
	value *= other;
	calcVal();
	return *this;
}

		// *** Compound Division *** //
CircularInt & CircularInt::operator/=(const CircularInt & other) {
	value /= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator/=(const int & other) {
	value /= other;
	calcVal();
	return *this;
}

		// *** Compound Modulus *** //
CircularInt & CircularInt::operator%=(const CircularInt & other) {
	value %= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator%=(const int & other) {
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

CircularInt CircularInt::operator&(const int & other) {
	CircularInt ret = *this;
	ret.value &= other;
	ret.calcVal();
	return ret;
}

int operator&(const int & a, CircularInt b) {
	return a & b.value;
}

		// *** OR *** //
CircularInt CircularInt::operator|(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value |= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator|(const int & other) {
	CircularInt ret = *this;
	ret.value |= other;
	ret.calcVal();
	return ret;
}

int operator|(const int & a, CircularInt b) {
	return a | b.value;
}

		// *** XOR *** //
CircularInt CircularInt::operator^(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value ^= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator^(const int & other) {
	CircularInt ret = *this;
	ret.value ^= other;
	ret.calcVal();
	return ret;
}

int operator^(const int & a, CircularInt b) {
	return a ^ b.value;
}

		// *** Ones Complement *** //
CircularInt CircularInt::operator~() {
	CircularInt ret = *this;
	~ret.value;
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

CircularInt CircularInt::operator<<(const int & other) {
	CircularInt ret = *this;
	ret.value <<= other;
	ret.calcVal();
	return ret;
}

int operator<<(const int & a, CircularInt b) {
	return a << b.value;
}

		// *** Right Shift *** //
CircularInt CircularInt::operator>>(const CircularInt & other) {
	CircularInt ret = *this;
	ret.value >>= other.value;
	ret.calcVal();
	return ret;
}

CircularInt CircularInt::operator>>(const int & other) {
	CircularInt ret = *this;
	ret.value >>= other;
	ret.calcVal();
	return ret;
}

int operator>>(const int & a, CircularInt b) {
	return a >> b.value;
}

		// *** Compound AND *** //
CircularInt & CircularInt::operator&=(const CircularInt & other) {
	value &= other.value;
	calcVal();
	return *this;
}

CircularInt & CircularInt::operator&=(const int & other) {
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

CircularInt & CircularInt::operator|=(const int & other) {
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

CircularInt & CircularInt::operator^=(const int & other) {
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

CircularInt & CircularInt::operator<<=(const int & other) {
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

CircularInt & CircularInt::operator>>=(const int & other) {
	value >>= other;
	calcVal();
	return *this;
}

	// *** Relational *** //
		// *** Equality *** //
bool CircularInt::operator==(const CircularInt & other) {
	return value == other.value;
}

bool CircularInt::operator==(const int & other) {
	return value == other;
}

bool operator==(const int & a, CircularInt b) {
	return a == b.value;
}

		// *** Inequality *** //
bool CircularInt::operator!=(const CircularInt & other) {
	return value != other.value;
}

bool CircularInt::operator!=(const int & other) {
	return value != other;
}

bool operator!=(const int & a, CircularInt b) {
	return a != b.value;
}

		// *** Greater Than *** //
bool CircularInt::operator>(const CircularInt & other) {
	return value > other.value;
}

bool CircularInt::operator>(const int & other) {
	return value > other;
}

bool operator>(const int & a, CircularInt b) {
	return a > b.value;
}

		// *** Less Than *** //
bool CircularInt::operator<(const CircularInt & other) {
	return value < other.value;
}

bool CircularInt::operator<(const int & other) {
	return value < other;
}

bool operator<(const int & a, CircularInt b) {
	return a < b.value;
}

		// *** Greater Than Or Equal To *** //
bool CircularInt::operator>=(const CircularInt & other) {
	return value >= other.value;
}

bool CircularInt::operator>=(const int & other) {
	return value >= other;
}

bool operator>=(const int & a, CircularInt b) {
	return a >= b.value;
}

		// *** Less Than OR Equal To *** //
bool CircularInt::operator<=(const CircularInt & other) {
	return value <= other.value;
}

bool CircularInt::operator<=(const int & other) {
	return value <= other;
}

bool operator<=(const int & a, CircularInt b) {
	return a <= b.value;
}

	// *** Streams *** //
		// *** Insertion To Stream *** //
ostream & operator<<(ostream & out, const CircularInt & cirInt) {
	out << "(" << cirInt.min << ", " << cirInt.max << ", " << cirInt.value << ")";
	return out;
}
		
		// *** Extraction From Stream *** //
istream & operator>>(istream & in, CircularInt & cirInt) {
	int min, max, value;

	in.ignore(1);
	in >> min;
	cirInt.min = min;

	in.ignore(2);
	in >> max;
	cirInt.max = max;

	in.ignore(2);
	in >> value;
	cirInt.max = value;

	in.ignore(1);
}
