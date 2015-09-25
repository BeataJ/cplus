#ifndef TIME_H
#define TIME_H
//class definition
class Time {
public:
Time();//constructor
void setTime( int, int , int);//set hour,minute and second
void printUniveral(); //print time in universal format
void printStandard(); //print time in standard time format
private:
int hour; //hour in range of 0-23
int minute; //minute value in range 0-59
int second; //second  value in range  of 0-59
};//end of class  definition
#endif


