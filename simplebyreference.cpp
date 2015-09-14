#include<iostream>
using namespace std;
void avgPtr(int *a, int *b);
int main() {
	int a,b;
	cout<<"This is a trivial program that calculates average  of two integeres"
		<<"using  calling  a function paramethers by reference "<<endl;
		cout <<" Enter  first number:\t ";
		cin>>a;
		cout<<" Enter the second number:\t ";
		cin>>b;
		avgPtr(&a,&b);
		cout<<"Program  has finished. "<<endl;		
}
void avgPtr(int *a, int *b) {
	float average=((*a)+(*b))/2;
	cout <<" The average  is "<<average<<endl;
}
