//passing  paramethers   by reference
#include<iostream>
using namespace std;
void  cubeByReference(int *);//prototype

int main() {
int number=5;
cout<<"The original  value of number is "<<number<<endl;
cubeByReference(&number);
cout <<"The  value of number is :"<<number<<endl;
}
void cubeByReference(int *nPtr)  {
*nPtr= *nPtr * *nPtr* *nPtr;
}


