//passing  paramethers   by value
#include<iostream>
using namespace std;
int cubeByValue(int);//prototype
int main() {
int number=5;
cout<<"The original  value of number is "<<number<<endl;
int vol=cubeByValue(number);
cout<<"The volume  is "<<vol <<"The  value of number is :"<<number<<endl;
}
int cubeByValue(int n)  {
return n*n*n;
}


