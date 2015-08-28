#include<iostream>
using namespace std;
int main() {
	int countDown;
	cout<<" How many greetings do you want ?";
	cin >>countDown;
	while (countDown>0)
	{
		cout<<"Hello !!\n";
		countDown--;
	}
	cout<<endl;
	cout <<"That's it \n ";
	return 0;
}
