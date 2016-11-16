#pragma once
#include "InsurancePolicy.h"
#include <string>

class InsurancePolicy;
class Coverage
{
    public:
        Coverage(std::string = "",double = 0);
        ~Coverage();



    private:
        std::string type;
        double cost;
};
