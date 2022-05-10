#ifndef swapper_h
#define swapper_h

#include <iostream>
using namespace std;


template <class T>
class my_class
{
	T x;
	T y;
public:
	my_class(T a, T b);
	void swapper();
	void printem();
};

#endif
#include "swapper.cpp"