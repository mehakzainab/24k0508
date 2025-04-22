#pragma once;

#include<iostream>
using namespace std;
class course{
    protected:
string coursecode;
int credits;
public:
course(string code, int c){
    coursecode=code;
    credits=c;

}
virtual int calculategrade(int marksobtain)=0;
 
virtual void displayinfo()=0;
};
