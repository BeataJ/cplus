#include<iostream>
#include<cstring>
using namespace std;
int main(){
string fname;
string lname;
string fullname;

cout<<"Enter  your  first name: ";
getline(cin,fname);
cout<<" Enter your  last name ";
getline(cin,lname);
fullname=fname+" "+lname;
cout <<" Full name: "<<fullname<<endl;
return 0;
}
