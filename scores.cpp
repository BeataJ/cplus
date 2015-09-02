
#include <cstdlib>
#include<iostream>

using namespace std;

int main() {
     const int TESTNUMBER=10;
    const  int QUIZNUMBER=15;
    float sum_q=0,avg_q;
    float sum_t=0,avg_t;
    
    int tests(TESTNUMBER);
    int quizes(QUIZNUMBER);
	//entering  tests data
	cout<<"Entering  test data for student"<<endl;
	for (i=0;i<TESTNUMBER;i++) {cout <<" Test "<< i <<"score = " << tests[i]<< endl;};
	cout<<"Entering  quiz data for student "<<endl;
	for (i=0;i<QUIZNUMBER;i++) {cout <<" Quiz "<<i<<" score = " << quizes[i]<< endl;};
	//calculating  average test result
	
	for (i=0;i<TESTNUMBER;i++) {sum_t+=tests[i];};
	avg_t=sum_t/TESTNUMBER;
	 //calculating quiz average
	 
	 for (i=0;i<QUIZNUMBER;i++) {sum_q+=quizes[i];}
		avg_q=sum_q/QUIZNUMBER;
	float totalScore;
	totalScore=int(avg_t*0.60 +avg_q*0.40);
        
	//grading  student
	
		if ((totalScore >=0) && (totalScore>40))   {cout<<" Failed. You  have to repeat the course";}
		else if ((totalScore >=40) && (totalScore>60))  {cout<<" Conditional pass.You  need to contact your  instructor for  furher information";}
		else if ((totalScore >=60) && (totalScore>60))   {cout<<" Passed. You  have finished the course with satisfactory result";}
		else if ((totalScore >=80) && (totalScore>100))  {cout<<" Passsed. You have excellent skills achieved in this course ";}
	    
        return 0;
}
