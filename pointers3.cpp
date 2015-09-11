//pointers3.cpp
//very simple oprations on pointers
#include<iostream>
using namespace std;
int main() {
	int x=24;
	int *p;
	p=&x;
	cout <<" the value of x is "<<x<<endl;	
	cout<<" p points to "<<p<<" that is an address  of  variable x "<<endl;
	cout<<" *p points  to : " <<*p<< " that is  a value of  variable x. This is indirect pointing " << endl;
	//how to updaete  the  value of  x 
	*p=17;
	cout <<" the value of x is now "<<*p<<endl;
	 
}
