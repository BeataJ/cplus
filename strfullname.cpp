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
struct customer1,customer2;
cout "Enter  the fname of the first person ";
cin>>person1.fname;
cout "Enter the last name of the first person ";
cin>>person1.lname;
cout "Enter the email of the first person ";
cin>>person1.email;
cout "Enter full address  of the first person ";
cin>>person1.address;
//second person
cout "Enter  the fname of the second person ";
cin>>person2.fname;
cout "Enter the last name of the second person ";
cin>>person2.lname;
cout "Enter the email of the second person ";
cin>>person2.email;
cout "Enter full address  of the second person ";
cin>>person2.address;
//printing  data  for person1 and person2 
cout<<" personal data of persons information taken  from input"<<endl;
cout<<" First person: "<< endl;
cout <<"First name: "<<person1.fname<<endl;
cout << "Last name: " <<person1.lname<<endl;
cout <<"Email address: "<<person1.email<<endl;
cout <<"Living address : "<<person1.address<<endl;  
cout<<" Second person: "<< endl;
cout <<"First name: "<<person2.fname<<endl;
cout << "Last name: " <<person2.lname<<endl;
cout <<"Email address: "<<person2.email<<endl;
cout <<"Living address : "<<person2.address<<endl;  
return 0;
}
