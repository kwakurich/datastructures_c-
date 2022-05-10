
#ifndef swapperclass_cpp
#define swapperclass_cpp
#include "swapper.h"

template <class T>
my_class<T>::my_class(T a, T b)
{
	x = a;
	y = b;
}
template <class T>
void my_class<T>::swapper()
{
	T TempVal = x;
	x = y;
	y = TempVal;
} 
template <class T>
void my_class<T>::printem(){	
	cout << "First value is: " << x << " Second value is: " << y << endl;
}

#endif


