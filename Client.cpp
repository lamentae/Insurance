#include "Client.h"
#include <iostream>
using namespace std;

int Client::total_client_id = 123456;

Client::Client(string pname, Date bday)
{
    name = pname;
	birth_date = bday;
	client_id = total_client_id;
	total_client_id++;
}

Client::~Client()
{
}

void Client::print()
{
    cout << name<< endl;
    cout <<"DOB:";
    birth_date.print();
    cout<<endl;
    cout << "Client ID: " << client_id<<endl;
}

int Client::getclient_id()
{
    return client_id;
}
