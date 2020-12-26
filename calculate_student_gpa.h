//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_CALCULATE_STUDENT_GPA_H
#define GPA_CALCULATE_STUDENT_GPA_H

#endif //GPA_CALCULATE_STUDENT_GPA_H

#include "register_subj_name_crts.h"
#include "enter_total_mark.h"
#include "grade_of_subj.h"
#include "value_of_subj.h"
#include "display_subj_grades.h"
#include "last_GPA.h"


void calculate_student_gpa(){
    register_subj_name_crts();
    enter_total_mark();
    grade_of_subj();
    value_of_subj();
    display_subj_grades();
    last_GPA();
}
