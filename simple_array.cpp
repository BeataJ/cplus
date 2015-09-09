#include<iostream>
using namespace std;
int main(){
const int SIZE=10;
int  score[SIZE];

cout<<"Enter scores as integer numbers: ";
for (int i=0;i<SIZE;i++)
	{
	cout<<"Score["<<i<<"=] ";
	cin>>score[i];
	}
cout<<" here we  have  our scores: "<<endl;
for (int i=0;i<SIZE;i++) cout<<"score ]"<<i<<" ]= "<<score[i]<<endl; 
return 0;
}

