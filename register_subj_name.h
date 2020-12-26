//
// Created by bunyod_khakimov on 25/12/2020.
//
#include<fstream>
#include <stdio.h>
#include <dirent.h>

#ifndef GPA_REGISTER_SUBJ_NAME_H
#define GPA_REGISTER_SUBJ_NAME_H

#endif //GPA_REGISTER_SUBJ_NAME_H

void register_subj_name(){
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
                cout<< "1) First course name: " << subject << endl;
                s1.name = subject; }

            if(subj_count == 2){
                cout<< "2) Second course name: " << subject << endl;
                s2.name = subject; }

            if(subj_count == 3){
                cout<< "3) Third course name: " << subject << endl;
                s3.name = subject; }

            if(subj_count == 4){
                cout<< "4) Fourth course name: " << subject << endl;
                s4.name = subject; }

            if(subj_count == 5){
                cout<< "5) Fifth course name: " << subject << endl;
                s5.name = subject; }

            if(subj_count == 6){
                cout<< "6) Sixth course name: " << subject << endl;
                s6.name = subject; }

            if(subj_count == 7){
                cout<< "7) Seventh course name: " << subject << endl;
                s7.name = subject; }

            if(subj_count == 8){
                cout<< "8) Eighth course name: " << subject << endl;
                s8.name = subject; }

            if(subj_count == 9){
                cout<< "9) Nineth course name: " << subject << endl;
                s9.name = subject; }

            subj_count++;
        }

        subject="";
    }

    closedir(dr);

    cout << "\nNumber of courses you entered as file: " << subj_count-1 << endl;

}