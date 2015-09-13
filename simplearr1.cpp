//initializing an array in declaration 
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	const int SIZE=10;
	int n[SIZE];
	for (int i=0;i<SIZE;i++) n[i]=2*i+10;
	//int n[10]={};
	cout <<"Element"<<setw(12)<<"Value "<<endl;
	for (int i=0;i<SIZE;i++) 
	cout<<setw(7)<<i<<setw(13)<<n[i]<<endl;
}
