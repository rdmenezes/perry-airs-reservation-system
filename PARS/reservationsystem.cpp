#include "reservationsystem.h"

ReservationSystem::ReservationSystem()
{
    //ctor
}

ReservationSystem::~ReservationSystem()
{
    //dtor
}

// Iterate through the string,return false if a non-alphabeical letter
// is encountered, other wise , end loop and return true.
bool ReservationSystem::validate_names(string name)
{
     for(unsigned int i=0; i<name.length(); i++)
    {
        if(!('a'<=name[i] && name[i] <='z'))
            return false;
    }
      return true;
}

// Credit card numbers have 16 digits
// if is less than or greater than 16 , return false.
// if 16 characters ,iterate through the string
// return false if a non-numerical number
// is encountered, other wise , end loop and return true.
bool ReservationSystem::validate_credit_c(string credit)
{
    if(credit.length() != 16)
    {
        return false;
    }

     for(unsigned int i=0; i<credit.length(); i++)
    {
        if(!('0'<=credit[i] && credit[i] <='9'))
            return false;
    }
      return true;
}