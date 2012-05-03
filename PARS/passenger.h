#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

class Passenger
{
    public:

        Passenger();   //CONSTRUCTOR
       ~Passenger();   //DESTRUCTOR

//////////////////////////////////////////////////////////////
////////////////////// SET DATA //////////////////////////////

        void make_Reservation(); //FINAL RESERVATION STEP.
        void set_Name();        //SET FIRST NAME.
        void set_Lname();       //SET LAST NAME
        void select_City();     //SET DESTINATION CITY.
        void select_Time();      //SELECT DEPARTURE TIME.
        void select_Date();      //SELECT DATE.
        void confirmation_Number();      //GENERATE CONFIRMATION NUMBER
        void phone_Format(string);    //Build (###)###-####

//////////////////////////////////////////////////////////////
////////////////////// VALIDATIONS ///////////////////////////

        bool validate_names(string);      // ARE NAMES VALID?
        bool validate_telephone(string);  //IS THE PHONE VALID?
        bool validate_credit_c(string);   //IS THE CC # VALID.

/////////////////////////////////////////////////////////////
////////////////////// FETCH DATA ///////////////////////////

        string get_firstName();     //FETCH FIRST NAME.
        string get_lastName();      //FETCH LAST NAME.
        string get_telnumber();     //FETCH TEL.#.

/////////////////////////////////////////////////////////////
////////////////////// OVERLOADING //////////////////////////

    friend ostream &operator<<(ostream &stream, Passenger o);
    friend istream &operator>>(istream &stream, Passenger &o);


    private:

        string firstName;           //CUSTOMERS NAME.
        string lastName;            //CUSTOMERS LAST NAME.
        string phoneNumber;         //CUSTOMER PHONE #.
        string reservation_number;  //RE #.
        bool sel_City;
        bool sel_Time;
        bool sel_Date;

};

#endif // PASSENGER_H
