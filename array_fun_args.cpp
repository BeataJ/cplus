#include<iostream>
using namespace std;
int sumOfElements(int X[]);

int main() {
	int A[]={1,2,3,4,5};
	cout <<"Size of A :" << sizeof(A)<<"Size of each element"<<sizeof(A[0])<<"Lenght of array( number of elements ="<<sizeof(A)/sizeof(A[0])<<endl;
	int total=sumOfElements(A);
	cout<<"Sum of elements = "<<total<<endl;
}
 
int sumOfElements(int X[]) {
	int sum=0;
	int size=sizeof(X)/sizeof(X[0]);
	//
	for (int i=0;i<size;i++) sum+=X[i];
	return sum;
}
