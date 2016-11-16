#include "Employee.h"
#include <iostream>
using namespace std;


 int Employee::total_employee_id = 1000;

Employee::Employee(std::string pname,int sin,Date dob,Date hiredate,double pay)
{
    name = pname;
    social_insurance_number = sin;
    birth_date = dob;
    hiring_date = hiredate;
    employee_id = total_employee_id;
    employee_pay = pay;
    total_employee_id++;

}

Employee::~Employee()
{

}

void Employee::print()
{
    cout << "NAME: "<<name <<endl;;
    cout <<"SIN:"<<social_insurance_number<<endl;
    cout<<"DOB:";
    birth_date.print();
    cout<<endl;
    cout<<"Hire Date:";
    hiring_date.print();
    cout << endl;
    cout<<"ID: "<<employee_id<<endl;
    cout <<"PAY: $"<<employee_pay<<endl;

}
