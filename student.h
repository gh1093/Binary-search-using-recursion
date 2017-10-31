#ifndef STUDENT_H
#define STUDENT_H
#include<cstring>
#include <iostream>

using namespace std;

class student {
    
private:
    int studentID;
    string studentName;
    string studentAddress;
    float GPA;
    int *scores;
     
public:
    student();
    student(int studentID, string studentName, 
           float GPA, string studentAddress, int* testscores);
    int getStudentID();
    string getStudentName();
    string getStudentAddress();
    float getGPA();
    
};

#endif


