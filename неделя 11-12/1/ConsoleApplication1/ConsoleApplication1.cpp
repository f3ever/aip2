#include <iostream>
//1 b

struct Time
{
	int hour, 
		min, 
		sec;
};

bool Fun(Time T1, Time T2)
{
	if (T1.hour > T2.hour)
		return true;
	else if (T1.min > T2.min)
		return true;
	else if (T1.sec > T2.sec)
		return true;
	else 
		return false;
}

void main()
{
	Time T1, T2;
}