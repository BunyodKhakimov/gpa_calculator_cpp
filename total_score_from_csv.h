//
// Created by bunyod_khakimov on 25/12/2020.
//

#ifndef GPA_TOTAL_SCORE_FROM_CSV_H
#define GPA_TOTAL_SCORE_FROM_CSV_H


#endif //GPA_TOTAL_SCORE_FROM_CSV_H
using namespace std;

void total_score_from_csv(){
    string line;

    ifstream myfile;

    myfile.open("../subjects/file.txt");

    vector <vector<int>> tokens;

    string intermediate;


    int flag1 = 0;

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            stringstream check1(line);

            if(flag1>0){
                int flag2 = 0, total_score = 0;
                vector<int> temp;
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
                tokens.push_back(temp);
            }
            flag1++;

        }
        myfile.close();
    }
    else cout << "Unable to open file";

    for(int i=0; i<tokens.size(); i++){
        for(int j=0; j<tokens[i].size(); j++){
            cout<<tokens[i][j]<<endl;
        }
    }
}
