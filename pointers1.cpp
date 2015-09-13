#include<iostream>
using namespace std;
int main(){
int *p1,v1;
v1=0;
p1=&v1;
*p1=42;
cout<<v1<<endl;
cout<<*p1<<endl;
return 0;
}
