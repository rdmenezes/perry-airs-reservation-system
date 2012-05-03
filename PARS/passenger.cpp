#include "Passenger.h"

Passenger::Passenger()
{
    //ctor
}

Passenger::~Passenger()
{
    //dtor
}


//////////////////////////////////////////////////////////////
////////////////////// VALIDATIONS ///////////////////////////
// Iterate through the string,return false if a non-alphabeical letter
// is encountered, other wise , end loop and return true.
bool Passenger::validate_names(string name)
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
bool Passenger::validate_credit_c(string credit)
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


bool Passenger::validate_telephone(string phone)
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

string Passenger::get_firstName()     //FETCH FIRST NAME.
{
    return firstName;
}
string Passenger::get_lastName()     //FETCH LAST NAME.
{
    return lastName;
}
string Passenger::get_telnumber()     //FETCH TEL.#.
{
    return phoneNumber;
}


//////////////////////////////////////////////////////////////
////////////////////// SET DATA //////////////////////////////


void Passenger::set_Name()        //SET FIRST NAME.
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
void Passenger::set_Lname()      //SET LAST NAME
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

void Passenger::phone_Format(string tel)
{

    char *phone;
    phone = new char[10];

    for(int i = 0; i < 10; i++)
        {
            if(i==0)
                //cout << "(";
                phone[0] = '(';
            if(i==3)
                //cout << ")";
                phone[0] = ')';
            if(i == 6)
                //cout << "-";
                phone[6] = '-';

            phone[i+1] = tel[i];
        }

        delete[] phone;

}
/*
void Passenger::makeReservation() //FINAL RESERVATION STEP.
void Passenger::selectDCity()     //SET DESTINATION CITY.
void Passenger::selectTime()     //SELECT DEPARTURE TIME.
void Passenger::changeDate()      //SELECT DATE.
void Passenger::changeTime()      //SELECT TIME

*/

ostream &operator<<(ostream &stream, Passenger o)
{
  stream << o.lastName;
  stream << "," << o.firstName;
  stream << "/nTel#:";

  return stream; // must return stream
}

// Input name and telephone valueber.
istream &operator>>(istream &stream, Passenger &o)
{
  cout << "Enter F.Name: ";
  stream >> o.firstName;
  cout << "Enter L.Name ";
  stream >> o.lastName;
  cout << "\n";

  return stream;
}
