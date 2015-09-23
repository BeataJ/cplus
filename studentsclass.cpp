#include<iostream>
using namespace std;
//declaration section
class Student {
private:
		int idNum;
		static double athleticFee;
public:
	void setIdNum(int);
	int getIdNum();
	static double getAthleticFee();
	
};
//implementation   section
double Student::athleticFee=45.25;
void Student::setIdNum( int num) 
{
	idNum=num;
}	
int Student::getIdNum() {return idNum;}
static double Student::getAthleticFee()
{
return athleticFee;
}

//main exec section
int main()
{
/*
Student aFreshman, aSophomore;
aFreshman.setIdNum(1234);
aSophomore.setIdNum(2345);
cout << "Freshman: " << aFreshman.getIdNum() <<
" Athletic fee: " << aFreshman.getAthleticFee() <<
endl;
cout << "Sophomore: " << aSophomore.getIdNum() <<
" Athletic fee: " << aSophomore.getAthleticFee() <<
endl;
*/
cout << "Everyone's athletic fee is " <<
Student::getAthleticFee()<< endl;
return 0;
}
