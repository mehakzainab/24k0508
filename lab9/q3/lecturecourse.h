#pragma once;
#include "course.h";

using namespace std;
class lecturecourse:public course{
    public:
    lecturecourse(string code,int c);
    void displayinfo();
    int calculategrade(int marksobtain);
};
