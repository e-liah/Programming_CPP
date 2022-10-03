#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    float msalary, la_amt, la_hrs, hr_rate, la_mins, phealth, pagibig, SSS, tax, t_deduc, netpay;
    string id, date, name, inst;
    inst = "FEU-Institute of Technology";

//inputs
    cout<<"Employee ID: ";
    cin>>id;
    cout<<"Employee Name: ";
    getline(cin, name);
    cout<<"Payroll Period: ";
    getline(cin, date);
    cout<<"Enter monthly salary: ";
    cin>>setprecision(2)>>msalary;
    cout<<"Enter lates and absences (in minutes): ";
    cin>>la_mins;
    
//output and computations
    cout<<'\n'<<setw(47)<<inst<<'\n';
    
    //row 1
    cout<<"Employee ID: "<<id<<setw(45)<<"Payroll Period: "<<date<<'\n';
    //row 2
    cout<<"Employee Name: "<<name<<'\n';
    //row 3
    cout<<"\nINCOME"<<setw(45)<<"DEDUCTIONS \n";
    
    la_hrs = (la_mins/60);
    hr_rate = ((msalary/30)/8);
    la_amt = (hr_rate*la_hrs);
    
    //row 4
    cout<<"Monthly Salary Php"<<fixed<<setprecision(2)<<msalary;
    cout<<setw(38)<<"Lates and absences "<<fixed<<setprecision(2)<<'('<<la_amt<<')'<<'\n';
    
    phealth = 1000;
    pagibig = 800;
    SSS = 1200;
    tax = (msalary*0.12);
    
    //row 5
    cout<<setw(56)<<"Philhealth "<<fixed<<setprecision(2)<<'('<<phealth<<')'<<'\n';
    //row 6
    cout<<setw(54)<<"Pag-ibig "<<fixed<<setprecision(2)<<'('<<pagibig<<')'<<'\n';
    //row 7
    cout<<setw(49)<<"SSS "<<fixed<<setprecision(2)<<'('<<SSS<<')'<<'\n';
    //row 8
    cout<<setw(61)<<"Withholding tax "<<fixed<<setprecision(2)<<'('<<tax<<')'<<'\n';
    //row 9
    cout<<"\n";
    //row 10
    cout<<"Total Earnings: Php"<<fixed<<setprecision(2)<<msalary<<"\n";
    
    t_deduc = (la_amt + phealth + pagibig + SSS + tax);
    netpay = (msalary - t_deduc);
    
    //row 11
    cout<<"Total Deductions: Php "<<fixed<<setprecision(2)<<t_deduc<<"\n";
    //row 12
    cout<<"Net Pay: "<<fixed<<setprecision(2)<<netpay;
    
    return 0;
}
