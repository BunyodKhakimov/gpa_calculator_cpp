#include<iostream>
#include<string>
#include <bits/stdc++.h>


using namespace std;

struct subject{
    string name;
    string grd;
    double total_mark;
    int crts;
    int num;

    vector <vector<double>> student;

    /*
     *      Format of vector student
     *
     *      Student_ID      Total_Score     Value   GPA
     *      Student_ID      Total_Score     Value   GPA
     *      Student_ID      Total_Score     Value   GPA
     *      Student_ID      Total_Score     Value   GPA
     */

};
subject s;
subject s1;
subject s2;
subject s3;
subject s4;
subject s5;
subject s6;
subject s7;
subject s8;
subject s9;

#include "calculate_student_gpa.h"



int main(){

    cout<<"\n\n\n\n";
    cout<<"____________________________________\n";
    cout<<"*|********************************|*\n";
    cout<<"*|                                |*\n";
    cout<<"*|   C++ GPA Processing System    |*\n";
    cout<<"*|                                |*\n";
    cout<<"*|________________________________|*\n";
    cout<<"************************************\n";
    cout<<"\n\n\n\n";

    calculate_student_gpa();

    return 0;
}