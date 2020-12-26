//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_CALCULATE_STUDENT_GPA_H
#define GPA_CALCULATE_STUDENT_GPA_H

#endif //GPA_CALCULATE_STUDENT_GPA_H

#include "register_subj_name_crts.h"
#include "total_score_from_csv.h"
#include "enter_total_mark.h"
#include "grade_of_subj.h"
#include "value_of_subj.h"
#include "display_subj_grades.h"
#include "last_GPA.h"


void calculate_student_gpa(){
    // get name and credits for subject
    register_subj_name_crts();

    // for every subject calculate total score for each student saves in vector
    tot_score_for_all();

    value_of_subj();
//    grade_of_subj();
//    display_subj_grades();

    last_GPA();
}
