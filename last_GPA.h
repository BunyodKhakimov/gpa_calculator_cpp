//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_LAST_GPA_H
#define GPA_LAST_GPA_H

#endif //GPA_LAST_GPA_H

double last_GPA(){
//Total sum of all subjects
    s.T_sum=s1.value+s2.value+s3.value+s4.value+s5.value+s6.value+s7.value+s8.value+s9.value;

//Total credit hours
    s.CrSum=s1.crts+s2.crts+s3.crts+s4.crts+s5.crts+s6.crts+s7.crts+s8.crts+s9.crts;

//Final result of GPA
    s.GPA=s.T_sum/s.CrSum;
    cout<< endl;
    cout<<"   YOUR GPA = "<<s.GPA;
    cout<<"\n==================================\n";
    cout<<"\n\n"<<endl;
}