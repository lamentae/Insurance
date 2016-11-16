#include "Coverage.h"

Coverage::Coverage(std::string covtype,double price)
{
    type = covtype;
    cost = price;
}

Coverage::~Coverage()
{
    //dtor
}
