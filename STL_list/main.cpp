//--------------------------------------------------------------------
//      File: main.cpp
//
//	Modified by: Nova Scheidt--November 8, 2007
//      Modified by: Catherine Song -- October 27, 2010
//--------------------------------------------------------------------

// Reads a series of packets, formats them into a message, and
// outputs the message.


#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

struct DataType 
{
    string lastname;              // (Key) Student's Last Name
    string firstname;     // Student's First Name

    string getKey () const
        { return lastname; }   // Returns the key field
};

//---------Need to Overload operator <<

ostream& operator << (ostream& os, DataType myData)
{
// add code here
	os << myData.firstname<<" "<<myData.lastname<<endl;
	return os;
}

//-------fix error C2784: 'bool __cdecl std::operator <

bool operator < (DataType lhs, DataType rhs)
{

 // add code here 

	return lhs.getKey()<rhs.getKey();
}

void main() 
{
	ifstream studentFile ("input.txt");  // Student file
        list <DataType> students;            // Students
        DataType currStudent;              // One Student (has firstname,lastname)

 

    // Read each line from input.txt. Store the firstname and the lastname into 
    // the temporary student structure "currStudent". 
		while(studentFile >> currStudent.firstname >> currStudent.lastname)
		{
    // Push the current student into the list ("students") 
			students.push_back(currStudent);
		}
    // Output the message packet-by-packet using the iterator.
		list<DataType>::iterator p = students.begin();
	while(p != students.end()){
		cout << *p;
		p++;
	}

	cout << endl << endl;
	
	// sort the list
	students.sort();

	cout <<"Sorted contents:\n";
	p = students.begin();
	while(p != students.end()){
		cout << *p;
		p++;
	}
        cout << endl << endl;
    // Sort the message

    // Output the sorted message packet-by-packet using the iterator.
}


