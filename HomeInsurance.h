#pragma once
#include "InsurancePolicy.h"
#include "Date.h"
#include "Client.h"

class HomeInsurance:public InsurancePolicy
{
    public:
        HomeInsurance(Date=Date(),Client* = nullptr,double = 0);
        ~HomeInsurance();
        void print();


    private:
       double cost;
      const int domain_id = 01; //make string??

};
