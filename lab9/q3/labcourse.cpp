#include"labcourse.h";
#include"course.h";
#include<iostream>
using namespace std;
labcourse::labcourse(string code, int c):course(code,c){}
int labcourse::calculategrade(int marksobtain){
return marksobtain*credits;
}
void labcourse::displayinfo()
{
    cout << "Lab Course code:" << coursecode << "\nCredits:" << credits << endl;
}
