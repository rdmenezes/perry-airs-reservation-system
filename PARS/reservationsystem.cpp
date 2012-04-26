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
