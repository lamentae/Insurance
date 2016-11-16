#pragma once
#include <string>
#include "Date.h"



class Client
{


public:

	Client(std::string = "", Date = Date());
	void print();
	~Client();
    int getclient_id();

private:
	std::string name;
	Date birth_date;
	int client_id;//make string??
	static int total_client_id;// make string and use operator overloading to increment??

};

