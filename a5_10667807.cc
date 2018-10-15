#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct studentdetail     //DECLEAR STRUCT TO CONTAIN DETAIL FOR EACH STUDENT
    {
        int id;
        string name;
        int age;
        string gender;
        float score;
        char grade;

    };


int main()
{
    int i,j,k=1,l=1, sumscore,sumage, malecount=0, femalecount=0;
    double avgage, avgscore;
    studentdetail student[5];

    cout<<"                ENTER STUDENT DETAILS"<<endl<<endl<<endl;
for (i=0; i<5; i++)   // TO COLLECT STUDENT DETAILS
    {   cout <<"STUDENT: "<<k<<endl<<endl;
                         k++;
        cout<<"id: ";cin>>student[i].id;
        cout<<"Name: ";cin>>student[i].name;
        cout<<"age: ";cin>>student[i].age;
        cout<<"Gender: ";cin>>student[i].gender;
        if(student[i].gender=="male")// TO COUNT THE NUMBER OF MALES AND FEMALES
        {
            malecount++;
        }
            else
                femalecount++;


        cout<<"score: ";cin>>student[i].score;
        if (student[i].score>=80)//FOR GRADING EACCH STUDENT
            student[i].grade='A';
        else if (student[i].score>=70)
           student[i].grade='B';
        else if (student[i].score>=60)
            student[i].grade='C';
            else if (student[i].score>=50)
            student[i].grade='D';
            else if (student[i].score>=40)
            student[i].grade='E';
            else if (student[i].score<40)
            student[i].grade='F';
        cout<< "grade: "<<student[i].grade;
        cout<<endl<<endl<<endl;

    }


        sumage=student[0].age + student[1].age + student[2].age + student[3].age + student[4].age; // SUM OF AGES OF STUDENTS
        sumscore=student[0].score+student[1].score+student[2].score+student[3].score+student[4].score; // SUM OF SCORE OF EACH STUDENT
avgage=sumage/5.0; // AVERAGE AGE
avgscore=sumscore/5.0; //AVERAGE SCORE



ofstream outf("student.txt"); //CREATE A .TXT FILE CALLED STUDENT


// WRITE TO THE STUDENT FILE
outf<<"                            STUDENT RECORD"<<endl<<endl;
outf<< "        ID NUMBER       "<< "NAME       "<< "AGE       "<<  "GENDER       "<<   " SCORE       "<<    "GRADE       "<<endl;
outf<< "       **************************************************************************"<<endl;
for (j=0; j<5; j++){
    outf<<l<<".  "<<"   "<<"   "<<student[j].id<<"       "<<student[j].name <<"       "<<"   "<<student[j].age <<"       "<<"   "<<student[j].gender <<"       "<<"   "<<student[j].score <<"       "<<"   "<<student[j].grade<< "       "<<endl<<endl<<endl;
    l++;}
outf<< "       **************************************************************************"<<endl;
outf<< "number of males:"<<malecount<<endl;
outf<<"number of females:"<<femalecount<<endl;
outf<< "average age: "<<avgage <<endl;
outf<< "average score: "<<avgscore<<endl;
return 0;
}






