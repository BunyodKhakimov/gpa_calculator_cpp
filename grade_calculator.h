//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_GRADE_CALCULATOR_H
#define GPA_GRADE_CALCULATOR_H

#endif //GPA_GRADE_CALCULATOR_H

double grade_calculator(double totalMark, int crts) {
    if(totalMark>=90 && totalMark<=100)
        return 4*crts;

    else if(totalMark>=85 && totalMark<90)

        return 4*crts;

    else if(totalMark>=80 && totalMark<85)

        return 3.75*crts;

    else if(totalMark>=75 && totalMark<80)

        return 3.5*crts;

    else if(totalMark>=70 && totalMark<75)

        return 3*crts;

    else if(totalMark>=65 && totalMark<70)

        return 2.75*crts;

    else if(totalMark>=60 && totalMark<65)

        return 2.5*crts;

    else if(totalMark>=50 && totalMark<60)

        return 2*crts;

    else if(totalMark>=45 && totalMark<50)

        return 1.75*crts;

    else if(totalMark>=40 && totalMark<45)

        return 1*crts;

    else if(totalMark>=30 && totalMark<40)

        return 0*crts;

    else if(totalMark>=0 && totalMark<30)

        return 0*crts;

    else

        return 0*crts;
}