#include "CircularInt.hpp"

CircularInt::CircularInt(int min, int max) {}
CircularInt::CircularInt() {}
CircularInt& CircularInt::operator=(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator+(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator+(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator-(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator-(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator-()
{
	return CircularInt();
}
CircularInt CircularInt::operator*(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator*(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator/(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator/(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator%(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator%(const int & other)
{
	return CircularInt();
}
CircularInt & CircularInt::operator+=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator+=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator-=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator-=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator*=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator*=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator/=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator/=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator%=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator%=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator++()
{
	return *this;
}
CircularInt CircularInt::operator++(int)
{
	return CircularInt();
}
CircularInt & CircularInt::operator--()
{
	return *this;
}
CircularInt CircularInt::operator--(int)
{
	return CircularInt();
}
CircularInt CircularInt::operator&(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator&(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator|(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator|(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator^(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator^(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator~()
{
	return CircularInt();
}
CircularInt CircularInt::operator<<(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator<<(const int & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator>>(const CircularInt & other)
{
	return CircularInt();
}
CircularInt CircularInt::operator>>(const int & other)
{
	return CircularInt();
}
CircularInt & CircularInt::operator&=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator&=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator|=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator|=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator^=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator^=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator<<=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator<<=(const int & other)
{
	return *this;
}
CircularInt & CircularInt::operator>>=(const CircularInt & other)
{
	return *this;
}
CircularInt & CircularInt::operator>>=(const int & other)
{
	return *this;
}
bool CircularInt::operator==(const CircularInt & other)
{
	return false;
}
bool CircularInt::operator==(const int & other)
{
	return false;
}
bool CircularInt::operator!=(const CircularInt & other)
{
	return false;
}
bool CircularInt::operator!=(const int & other)
{
	return false;
}
bool CircularInt::operator>(const CircularInt & other)
{
	return false;
}
bool CircularInt::operator>(const int & other)
{
	return false;
}
bool CircularInt::operator<(const CircularInt & other)
{
	return false;
}
bool CircularInt::operator<(const int & other)
{
	return false;
}
bool CircularInt::operator>=(const CircularInt & other)
{
	return false;
}
bool CircularInt::operator>=(const int & other)
{
	return false;
}
bool CircularInt::operator<=(const CircularInt & other)
{
	return false;
}
bool CircularInt::operator<=(const int & other)
{
	return false;
}
;

CircularInt operator+(const int & a, CircularInt b)
{
	return b;
}

CircularInt operator-(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator*(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator/(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator%(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator&(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator|(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator^(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator<<(const int & a, CircularInt b)
{
	return CircularInt();
}

CircularInt operator>>(const int & a, CircularInt b)
{
	return CircularInt();
}

bool operator==(const int & a, CircularInt b)
{
	return false;
}

bool operator!=(const int & a, CircularInt b)
{
	return false;
}

bool operator>(const int & a, CircularInt b)
{
	return false;
}

bool operator<(const int & a, CircularInt b)
{
	return false;
}

bool operator>=(const int & a, CircularInt b)
{
	return false;
}

bool operator<=(const int & a, CircularInt b)
{
	return false;
}

ostream & operator<<(ostream & out, const CircularInt & cirInt)
{
	return out;
}

istream & operator>>(istream & in, const CircularInt & cirInt)
{
	return in;
}
