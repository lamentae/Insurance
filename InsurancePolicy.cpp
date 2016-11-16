#include "InsurancePolicy.h"
#include <iostream>
using namespace std;


InsurancePolicy::InsurancePolicy(Date firstdate,Client* cptr)
{
    int number = 0;

    start_date = firstdate;
    renew_date = firstdate; // plus one year

    if(cptr != nullptr){
         number = cptr->getclient_id();
    }

    policy_number = number;
}

InsurancePolicy::~InsurancePolicy()
{

}

void InsurancePolicy::print()
{
    cout <<"policy number: " <<policy_number<<endl;
    cout << "Start Date:";
    start_date.print();
     cout<<endl;
    cout<<"Renew Date:";
    renew_date.print();
    cout << endl;
}
