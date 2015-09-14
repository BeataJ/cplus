#include<iostream>
using namespace std;
int sumOfElements(int X[],int size);

int main() {
	int A[]={1,2,3,4,5};
	cout <<"Size of A :" << sizeof(A)<<" Size of each element "<<sizeof(A[0])<<" Lenght of array( number of elements = "<<sizeof(A)/sizeof(A[0])<<endl;
	int length=sizeof(A)/sizeof(A[0]);
	int total=sumOfElements(A,length);
	cout<<"Sum of elements = "<<total<<endl;
}
 
int sumOfElements(int X[],int size) {
	int sum=0;
	
	//
	for (int i=0;i<size;i++) sum+=X[i];
	return sum;
}

