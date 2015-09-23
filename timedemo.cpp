#include<iostream>
#include<stdexcept>
#include"time.h"
using namespace std;
int main() 
{
	Time t;
	cout<<"the universal time is "<<t.printUniversal()<<endl;
	cout<<" the initial  standard time is "<<t.printStandard()<<endl;
	t.setTime(13,27,6);//change Time
	cout<<"The  universal time after  setTime is "<<t.printUniversal()<<endl;
	cout<< "The standart time after setTime is  "<<t.printStandard()<<endl;
	// attempt to set the time with invalid values
	try 
	  {
		t.setTime(99,99,99);
	}//end of try
	catch (invalid_argument &e) 
	{
	cout<<"Exception: "<<e.what()<<endl<<endl;
	}
	cout << "\n\nAfter attempting invalid settings:"
	<< "\nUniversal time: ";
	t.printUniversal(); // 00:00:00
	cout << "\nStandard time: ";
	t.printStandard(); // 12:00:00 AM
	cout<<endl;
	}
