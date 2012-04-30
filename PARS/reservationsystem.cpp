#include "reservationsystem.h"

ReservationSystem::ReservationSystem()
{
    //ctor
}

ReservationSystem::~ReservationSystem()
{
    //dtor
}


//////////////////////////////////////////////////////////////
////////////////////// VALIDATIONS ///////////////////////////
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


bool ReservationSystem::validate_telephone(string phone)
{
    if(phone.length() != 16)
    {
        return false;
    }

     for(unsigned int i=0; i<phone.length(); i++)
    {
        if(!('0'<=phone[i] && phone[i] <='9'))
            return false;

    }

      return true;

}

/////////////////////////////////////////////////////////////
////////////////////// FETCH DATA ///////////////////////////

string ReservationSystem::get_firstName()     //FETCH FIRST NAME.
{
    return firstName;
}
string ReservationSystem::get_lastName()     //FETCH LAST NAME.
{
    return lastName;
}
string ReservationSystem::get_telnumber()     //FETCH TEL.#.
{
    return phoneNumber;
}


//////////////////////////////////////////////////////////////
////////////////////// SET DATA //////////////////////////////


void ReservationSystem::set_name()        //SET FIRST NAME.
{
    string name;
    cout << "Enter F.Name: ";
    getline(cin,name);

    while(validate_names(name) == false)
    {
     cout << "Invalid...";
     cout << "\nEnter F.Name: ";
     getline(cin,name);
    }

    firstName = name;
}
void ReservationSystem::set_lname()      //SET LAST NAME
{
    string name;
    cout << "Enter L.Name: ";
    getline(cin,name);

    while(validate_names(name) == false)
    {
     cout << "Invalid...";
     cout << "\nEnter L.Name: ";
     getline(cin,name);
    }

    lastName = name;
}

/*
void ReservationSystem::makeReservation() //FINAL RESERVATION STEP.
void ReservationSystem::selectDCity()     //SET DESTINATION CITY.
void ReservationSystem::selectTime()     //SELECT DEPARTURE TIME.
void ReservationSystem::changeDate()      //SELECT DATE.
void ReservationSystem::changeTime()      //SELECT TIME

*/
