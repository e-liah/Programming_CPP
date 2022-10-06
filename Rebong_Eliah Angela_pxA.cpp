/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name, id, degree, subj, inst, title;
    float midterm, final;
    int sem_grade;
    
    //inputs
    cout<<"Enter student name: ";
    getline(cin, name);
    cout<<"Enter student number: ";
    getline(cin, id);
    cout<<"Enter degree program: ";
    getline(cin, degree);
    cout<<"Enter subject: ";
    getline(cin, subj);
    cout<<"Enter midterm grade: ";
    cin>>midterm;
    cout<<"Enter final grade: ";
    cin>>final;
    
    //output
    inst = "FEU INSTITUTE OF TECHNOLOGY";
    
    cout<<"\n";
    cout<<setw(60)<<inst<<"\n";
    cout<<"\n";
    cout<<setw(60)<<"SEMESTRAL GRADE COMPUTATION";
    
    cout<<"\nStudent Name     : "<<name<<"\n";
    cout<<"Student Number   : "<<id<<"\n";
    cout<<"Degree Program   : "<<degree<<"\n";
    
    cout<<"\nSubject          :"<<subj<<"\n";
    cout<<fixed<<setprecision(2)<<"Midterm Grade    :"<<midterm<<"\n";
    cout<<fixed<<setprecision(2)<<"Final Grade      :"<<final<<"\n";
    
    cout<<"\nSubject"<<setw(38)<<"Midterm Grade"<<setw(20)<<"Final Grade\n";
    cout<<"Computer Programming 1"<<setw(20)<<midterm<<setw(19)<<final<<"\n";
    
    sem_grade = ((midterm*0.60)+(final*0.40));
    cout<<"\n";
    cout<<"\nSEMESTRAL GRADE  : "<<sem_grade<<"\n";
    cout<<"\n";
    cout<<"Thank you, "<<name<<" for using this program!";
    
    

    return 0;
}

