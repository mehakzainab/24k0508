#pragma once;
#include"course.h";
#include"lecturecourse.h";
#include<iostream>
using namespace std;

 
lecturecourse::lecturecourse(string code, int c):course(code,c){}
    int lecturecourse::calculategrade(int marksobtain){
        return marksobtain*credits;
    }
    void  lecturecourse::displayinfo(){
        cout<<"course code"<<coursecode<<" credits "<<credits<<endl;
    }




