#pragma once;
#include "course.h";

using namespace std;
class labcourse: public course{
    public:
    labcourse(string code, int c);
    void displayinfo();
    int calculategrade(int marksobtain);
};
