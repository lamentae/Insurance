#pragma once
#include "InsurancePolicy.h"
class TravelInsurance:public InsurancePolicy
{
    public:
        TravelInsurance();
        ~TravelInsurance();



    private:
        double cost;
        Date start_date;
        Date last_date;


};
