#include<iostream>
using namespace std;

int main() 
{
	const double RATE=6.9;
	double deposit;
	cout<<"Enter the amount of your  deposit ";
	cin>>deposit;
	double newBalance;
	newBalance=deposit+deposit*(RATE/100);
	cout<<"In one year, that  deposit will  grow to "<<"$"<<newBalance<<" an amount woth waiting for .\n";
return 0;
}
