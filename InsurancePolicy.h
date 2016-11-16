#pragma once
#include "Date.h"
#include "Client.h"
#include "Coverage.h"

class InsurancePolicy
{
    friend class Coverage;
    public:
        InsurancePolicy(Date=Date(),Client* = nullptr);
        ~InsurancePolicy();
        void print();


    private:
        Date start_date;
        Date renew_date;  //  add one year??
        int policy_number;
        // client pointer
        // employee pointer

};
