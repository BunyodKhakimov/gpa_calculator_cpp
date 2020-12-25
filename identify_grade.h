//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_IDENTIFY_GRADE_H
#define GPA_IDENTIFY_GRADE_H

#endif //GPA_IDENTIFY_GRADE_H

string identify_grade(double totalMark) {
    if(totalMark>=90 && totalMark<=100)
        return "A+";

    else if(totalMark>=85 && totalMark<90)

        return "A";

    else if(totalMark>=80 && totalMark<85)

        return "A-";

    else if(totalMark>=75 && totalMark<80)

        return "B+";

    else if(totalMark>=70 && totalMark<75)

        return "B";

    else if(totalMark>=65 && totalMark<70)

        return "B-";

    else if(totalMark>=60 && totalMark<65)

        return "C+";

    else if(totalMark>=50 && totalMark<60)

        return "C";

    else if(totalMark>=45 && totalMark<50)

        return "C-";

    else if(totalMark>=40 && totalMark<45)

        return "D";

    else if(totalMark>=30 && totalMark<40)

        return "F(X)";

    else if(totalMark>=0 && totalMark<30)

        return "F";

    else

        return "Invalid";
}