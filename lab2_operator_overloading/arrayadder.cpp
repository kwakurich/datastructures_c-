//filename: arrayaddder.cpp
//Modify this program to overload subtraction operator and insertion operator
#include <iostream>
using namespace std;

#define MAXARRAY 5

class myarray 
{
private:
	int value[MAXARRAY];

public:
	void setvalue(int index, int newvalue){
		value[index]=newvalue;}
	int getvalue(int index){
		return value[index];}
	myarray operator+(myarray array2)
	{
		myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=value[i] + array2.value[i];
		return temparray;
	}
	friend myarray operator-(myarray array1, myarray array2);
	friend ostream& operator<<(ostream& os, myarray array1);
};
 myarray operator-(myarray array1, myarray array2)
{
	myarray temparray;
		for (int i=0; i<MAXARRAY; i++)
			temparray.value[i]=array1.value[i] - array2.value[i];
		return temparray;
}
  ostream& operator<<(ostream& os, myarray array1)
  {
	  os<< "new array: ";
	  for (int i=0; i<MAXARRAY; i++)
		  os<<array1.value[i] << " ";
	      os <<endl;
		  return os;
  }
int main ()
{

	myarray array1, array2, array3,array4;
	int i;
	
	//INITIALIZE 
	for (i=0; i<MAXARRAY; i++)
	{
		array1.setvalue(i,i);
		array2.setvalue(i,i+3);
	}
	
	//ADD 
	array3=array1 + array2; 
	array4 = array1-array2;
	//PRINT 
	cout << "array1   array2   array3 array4" << endl;
	for (i=0; i<MAXARRAY; i++)
		cout << array1.getvalue(i) << "        " 
		     << array2.getvalue(i) << "        " 
		     << array3.getvalue(i) << "        "
	         <<array4.getvalue(i)<<endl;
	cout<<array1<<array2<<array3<<array4<<endl;
	return 0;
}
