//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_LAST_GPA_H
#define GPA_LAST_GPA_H

#endif //GPA_LAST_GPA_H

double last_GPA(){
    int tot_crts= s1.crts + s2.crts + s3.crts;
    for(int i = 0; i<s1.student.size(); i++){
        cout << "GPA of student " << i << ": " << (s1.student[i][2] + s2.student[i][2] + s3.student[i][2]) / tot_crts << endl;
    }


    cout<<endl<<"Here is our vector"<<endl;

    for(int i = 0; i < s1.student.size(); i++){
        for(int j =0 ; j < s1.student[i].size(); j++){
            cout << s1.student[i][j] << endl;
        }
    }

}