//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_VALUE_OF_SUBJ_H
#define GPA_VALUE_OF_SUBJ_H

#endif //GPA_VALUE_OF_SUBJ_H

#include "grade_calculator.h"
using namespace std;

void value_of_subj(){
//Grade multiply by it's crts for each subjects

    if(s1.name != ""){
        for(int i = 0; i < s1.student.size(); i++){
            s1.student[i].push_back(grade_calculator(s1.student[i][1], s1.crts));
        }
    }


    if(s2.name != ""){
        for(int i = 0; i < s2.student.size(); i++){
            s2.student[i].push_back(grade_calculator(s2.student[i][1], s2.crts));
        }
    }


    if(s3.name != ""){
        for(int i = 0; i < s3.student.size(); i++){
            s3.student[i].push_back(grade_calculator(s3.student[i][1], s3.crts));
        }
    }

    if(s4.name != ""){
        for(int i = 0; i < s4.student.size(); i++){
            s4.student[i].push_back(grade_calculator(s4.student[i][1], s4.crts));
        }
    }

    if(s5.name != ""){
        for(int i = 0; i < s5.student.size(); i++){
            s5.student[i].push_back(grade_calculator(s5.student[i][1], s5.crts));
        }
    }

    if(s6.name != ""){
        for(int i = 0; i < s6.student.size(); i++){
            s6.student[i].push_back(grade_calculator(s6.student[i][1], s6.crts));
        }
    }

    if(s7.name != ""){
        for(int i = 0; i < s7.student.size(); i++){
            s7.student[i].push_back(grade_calculator(s7.student[i][1], s7.crts));
        }
    }

    if(s8.name != ""){
        for(int i = 0; i < s8.student.size(); i++){
            s8.student[i].push_back(grade_calculator(s8.student[i][1], s8.crts));
        }
    }

    if(s9.name != ""){
        for(int i = 0; i < s9.student.size(); i++){
            s9.student[i].push_back(grade_calculator(s9.student[i][1], s9.crts));
        }
    }

}