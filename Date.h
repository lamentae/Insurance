#pragma once
class Date
{

public:

	Date(int = 0, int = 0, int = 0);
	void print();
	~Date();

private:
	int month;
	int day;
	int year;
};

