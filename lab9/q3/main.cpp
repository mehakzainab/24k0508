#include<iostream>
#include "course.h"
#include "lecturecourse.h"
#include "labcourse.h"
using namespace std;
int main(){
  
    lecturecourse lc("pf",3);
    lc.calculategrade(50);
    lc.displayinfo();
    labcourse lab("pf",1);
    lab.calculategrade(75);
    lab.displayinfo();



}
