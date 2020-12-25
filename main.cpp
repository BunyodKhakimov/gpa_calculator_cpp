#include<iostream>
#include<string>
#include <bits/stdc++.h>

#include "total_score_from_csv.h"

using namespace std;

struct subject{
    string name;
    string grd;
    double total_mark;
    int crts;
    int num;
    int choice;
    double value;
    double CrSum;
    double T_sum;
    double GPA;
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

    while(1){
        cout<<"\n\n\n\n";
        cout<<"____________________________________\n";
        cout<<"*|********************************|*\n";
        cout<<"*|                                |*\n";
        cout<<"*|  C++ GPA Processing System     |*\n";
        cout<<"*|                                |*\n";
        cout<<"*|________________________________|*\n";
        cout<<"************************************\n";
        cout<<"*\n";
        cout<<"  *\n";
        cout<<"    Enter 1 To Calculate Your GPA... ";
        cin>> s.choice;
        switch(s.choice){
            case 1:
                calculate_student_gpa();
                break;
            default:
                cout<<" Please Enter 1 only ";
                break;
        }
    }

    return 0;
}