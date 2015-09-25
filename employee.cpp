#include<iostream>
using namespace std;
class Employee 
{
	private:
	int idNum;
	double hourlyRate;
	public:
	Employee(int=9999,double=0.0);
	void setIdNum(const int);
	void setHourlyRate(const double);
	int getIdNum();
	double getHourlyRate();
};
Employee::Employee(int id, double rate)
	{
		idNum=id;
		hourlyRate=rate;
	}

void Employee::setIdNum(const int id)
{
idNum = id;
}
void Employee::setHourlyRate(const double rate)
{
hourlyRate = rate;
}
int Employee::getIdNum()
{
return idNum;
}
double Employee::getHourlyRate()
{
return hourlyRate;
}

int main() {
Employee one;
Employee two(345);
Employee three(678, 18.44);
cout << "Employee one ID: " << one.getIdNum() <<
" Rate: " << one.getHourlyRate() <<
endl;
cout << "Employee two ID: " << two.getIdNum() <<
" Rate: " << two.getHourlyRate() <<
endl;
cout << "Employee three ID " << three.getIdNum() <<
" Rate: " << three.getHourlyRate() <<
endl;	
}
