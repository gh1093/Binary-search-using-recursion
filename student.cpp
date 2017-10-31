#include <cstdlib>
#include"student.h"
#include<cstring>
#include <iostream>

using namespace std;

student::student(){
}

student::student(int studentID, string studentName, 
                float GPA, string studentAddress, int *scores){
    this->studentID = studentID;
    this->studentName = studentName;
    this->studentAddress = studentAddress;
    this->GPA = GPA; 
    
}

int student::getStudentID(){
    return studentID;
}

string student::getStudentName(){
    return studentName;
}

string student::getStudentAddress(){
    return studentAddress;
}

float student::getGPA(){
    return GPA;
}
