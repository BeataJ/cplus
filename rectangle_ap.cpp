//simple  program that calculates area and perimeter of rectangle
#include<iostream>
using namespace std;
int main() {
	float a,b,area,perimeter;
	cout<<" Enter the value of side a ";
	cin>>a;
	cout<<" Enter the value of side b ";
	cin>>b;
	area=a*b;
	perimeter=2*(a+b);
	cout<<" Perimeter = "<<perimeter<<"\n";
	cout<<" Area = "<<area<<"\n";
	return 0;
}
