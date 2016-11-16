#pragma once
#include <string>
#include "Date.h"

class Employee
{
    public:
        Employee(std::string = "",int=0,Date = Date(),Date=Date(),double =0.0);
        void print();
        ~Employee();



    private:
        std::string name;
        int social_insurance_number;
        Date birth_date;
        Date hiring_date;
        int employee_id;
        double employee_pay;
        static int total_employee_id;
    //  An insurance agent should know it's clients
    // so additional data members needed probably pointer to clients


};


