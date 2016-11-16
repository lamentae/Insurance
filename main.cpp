#include <iostream>
#include "Client.h"
#include "Date.h"
#include "Employee.h"
#include "InsurancePolicy.h"
#include "HomeInsurance.h"
using namespace std;

int main()
{

    Date* dateptr = nullptr;
    dateptr = new Date(6,7,1990);

    Client* clientptr = nullptr;
    clientptr = new Client("client1",*dateptr);

    clientptr->print();
    cout << endl;

    Employee* emptr = nullptr;

    emptr = new Employee("employee1",1234,*dateptr,*dateptr,30000);

    emptr->print();
  cout << endl;
    InsurancePolicy* polptr = nullptr;

    polptr = new InsurancePolicy(*dateptr,clientptr);

    polptr->print();

    HomeInsurance* homeptr = nullptr;

    homeptr = new HomeInsurance(500);

    homeptr->print();



    return 0;
}
