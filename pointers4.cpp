#include<iostream>
using namespace std;
int main() {
int a; //a as integer viariable
int *aPtr; //aPtr as pointer to integer
a=7;
aPtr=&a;
cout<<"the address of a  is : "<<&a<<"\n the value of aptr is "<<aPtr<<endl;
cout<<" The value of a  is "<<a<<"\n the value of aPtr is "<<*aPtr<<endl;
} 

