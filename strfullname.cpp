#include<iostream>
#include<cstring>
/* this is modification of fullname.cpp progaram with additions of structure person that will describe persons attributes */

using namespace std;
struct person {
string fname;
string lname;
string email;
string address;
};
int main() {
person customer1,customer2;
cout<<"Enter  the fname of the first person ";
getline(cin,customer1.fname);
cout<<"Enter the last name of the first person ";
getline(cin,customer1.lname);
cout << "Enter the email of the first person ";
getline(cin,customer1.email;
cout<< "Enter full address  of the first person ";
getline(cin,customer1.address);
//second person
cout << "Enter  the fname of the second person ";
getline(cin,customer2.fname;
cout << "Enter the last name of the second person ";
getline(cin,customer2.lname;
cout << "Enter the email of the second person ";
getline(cin,customer2.email;
cout << "Enter full address  of the second person ";
getline(cin,customer2.address);
//printing  data  for customer1 and customer2 
cout<<" personal data of persons information taken  from input"<<endl;
cout<<" First person: "<< endl;
cout <<"First name: "<< customer1.fname<<endl;
cout << "Last name: " << customer1.lname<<endl;
cout <<"Email address: "<< customer1.email<<endl;
cout <<"Living address : "<< customer1.address<<endl;  
cout<<" Second person: "<< endl;
cout <<"First name: "<< customer2.fname<<endl;
cout << "Last name: " << customer2.lname<<endl;
cout <<"Email address: "<< customer2.email<<endl;
cout <<"Living address : "<< customer2.address<<endl;  
return 0;
}
