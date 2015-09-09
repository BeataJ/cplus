
#include <cstdlib>
#include<iostream>

using namespace std;

int main() {
     const int TESTNUMBER=5;
    const  int QUIZNUMBER=10;
    float sum_q=0,avg_q;
    float sum_t=0,avg_t;
    
    int tests[TESTNUMBER];
    int quizes[QUIZNUMBER];
	//entering  tests data
	cout<<"Entering test data for student"<<endl;
	for (int i=0;i<TESTNUMBER;i++) {cout <<" Test "<< i <<" score = ";
	cin>>tests[i];
	if (tests[i]<0 || tests[i]>100) cout<<"out of range. Number is  less than 0 or >100";
	}
	cout<<"Entering  quiz data for student "<<endl;
	for (int i=0;i<QUIZNUMBER;i++) {
	cout <<" Quiz "<<i<<" score = "; 
	cin>>quizes[i];
	
	if (quizes[i]<0 || quizes[i]>10) cout<<"out of range. Number is  less than 0 or >10";
	}

	//calculating  average test result
	
	for (int i=0;i<TESTNUMBER;i++) sum_t+=tests[i];
	avg_t=sum_t/TESTNUMBER;
	 //calculating quiz average
	 
	 for (int i=0;i<QUIZNUMBER;i++) sum_q+=quizes[i];
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
