#include "HomeInsurance.h"
#include <iostream>
using namespace std;


HomeInsurance::HomeInsurance(Date firstdate,Client* cptr,double price)
:InsurancePolicy(firstdate,cptr)
{
    cost = price;
}

HomeInsurance::~HomeInsurance()
{

}
void HomeInsurance::print()
{
    cout << cost<<endl;
    cout << domain_id<<endl;
}
