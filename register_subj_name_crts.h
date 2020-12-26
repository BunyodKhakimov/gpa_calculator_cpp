//
// Created by bunyod_khakimov on 25/12/2020.
//
#include<fstream>
#include <stdio.h>
#include <dirent.h>

#ifndef GPA_REGISTER_SUBJ_NAME_H
#define GPA_REGISTER_SUBJ_NAME_H

#endif //GPA_REGISTER_SUBJ_NAME_H

// Open subjects folder ond get file names as subject names and ask user to enter credits for each

void register_subj_name_crts(){

    int subj_count = 1;
    string subjects = "", subject = "";

    struct dirent *de;  // Pointer for directory entry

    // opendir() returns a pointer of DIR type.

    DIR *dr = opendir("../subjects/");

    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        cout << "Could not open current directory";
    }

    // for readdir()
    while ((de = readdir(dr)) != NULL){
        subject = de->d_name;

        if(subject != "." && subject != ".."){

            if(subj_count == 1){
                s1.name = subject;
                cout<< " 1) Enter Credit Hours of  "<<s1.name<<"... ";
                cin>> s1.crts;
            }

            if(subj_count == 2){
                s2.name = subject;
                cout<< " 2) Enter Credit Hours of  "<<s2.name<<"... ";
                cin>> s2.crts;
            }

            if(subj_count == 3){
                s3.name = subject;
                cout<< " 3) Enter Credit Hours of  "<<s3.name<<"... ";
                cin>> s3.crts;
            }

            if(subj_count == 4){
                s4.name = subject;
                cout<< " 4) Enter Credit Hours of  "<<s4.name<<"... ";
                cin>> s4.crts;
            }

            if(subj_count == 5){
                s5.name = subject;
                cout<< " 5) Enter Credit Hours of  "<<s5.name<<"... ";
                cin>> s5.crts;
            }

            if(subj_count == 6){
                s6.name = subject;
                cout<< " 6) Enter Credit Hours of  "<<s6.name<<"... ";
                cin>> s6.crts;
            }

            if(subj_count == 7){
                s7.name = subject;
                cout<< " 7) Enter Credit Hours of  "<<s7.name<<"... ";
                cin>> s7.crts;
            }

            if(subj_count == 8){
                s8.name = subject;
                cout<< " 8) Enter Credit Hours of  "<<s8.name<<"... ";
                cin>> s8.crts;
            }

            if(subj_count == 9){
                s9.name = subject;
                cout<< " 9) Enter Credit Hours of  "<<s8.name<<"... ";
                cin>> s9.crts;
            }

            subj_count++;
        }

        subject="";
    }

    closedir(dr);

}