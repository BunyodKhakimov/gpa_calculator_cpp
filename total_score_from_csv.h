//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_TOTAL_SCORE_FROM_CSV_H
#define GPA_TOTAL_SCORE_FROM_CSV_H


#endif //GPA_TOTAL_SCORE_FROM_CSV_H

//void total_score_from_csv(struct subject s);

void tot_score_for_all(){
    if(s1.name != ""){
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s1.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s1.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s2.name != "") {
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s2.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s2.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s3.name != "")
    {
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s3.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s3.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s4.name != ""){
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s4.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s4.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s5.name != ""){
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s5.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s5.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s6.name != ""){
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s6.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s6.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s7.name != ""){
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s7.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s7.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s8.name != ""){
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s8.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s8.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
    if(s9.name != ""){
        string line;

        ifstream myfile;

        myfile.open("../subjects/" + s9.name);

        string intermediate;

        int flag1 = 0;

        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                stringstream check1(line);

                if(flag1>0){
                    int flag2 = 0, total_score = 0;
                    vector<double> temp;
                    while(getline(check1, intermediate, ','))
                    {
                        if(flag2==0){
                            temp.push_back(stoi(intermediate));
                        }

                        if(flag2>0 && flag2<6)
                            total_score+=stoi(intermediate);

                        flag2++;
                    }
                    temp.push_back(total_score);
                    s9.student.push_back(temp);
                }
                flag1++;

            }
            myfile.close();
        }
        else cout << "Unable to open file";
    }
}

//void total_score_from_csv(struct subject obj){
//    string line;
//
//    ifstream myfile;
//
//    myfile.open("../subjects/" + obj.name);
//
//    string intermediate;
//
//    int flag1 = 0;
//
//    if (myfile.is_open())
//    {
//        while ( getline (myfile,line) )
//        {
//            stringstream check1(line);
//
//            if(flag1>0){
//                int flag2 = 0, total_score = 0;
//                vector<int> temp;
//                while(getline(check1, intermediate, ','))
//                {
//                    if(flag2==0){
//                        temp.push_back(stoi(intermediate));
//                    }
//
//                    if(flag2>0 && flag2<6)
//                        total_score+=stoi(intermediate);
//
//                    flag2++;
//                }
//                temp.push_back(total_score);
//                obj.student.push_back(temp);
//            }
//            flag1++;
//
//        }
//        myfile.close();
//    }
//    else cout << "Unable to open file";
//
//    cout<<endl<<"Here is our vector"<<endl;
//
//    for(int i = 0; i < obj.student.size(); i++){
//        for(int j =0 ; j < obj.student[i].size(); j++){
//            cout << obj.student[i][j] << endl;
//        }
//    }
//
//}
