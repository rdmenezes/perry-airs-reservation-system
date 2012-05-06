#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <cstdlib> // to clear screen
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
        //void confirmation_Number();      //GENERATE CONFIRMATION NUMBER FROM 000000
        void telephone_Number(string);
        void phone_Format();    //Build (###)###-####

//////////////////////////////////////////////////////////////
////////////////////// VALIDATIONS ///////////////////////////

        bool validate_names(string);      // ARE NAMES VALID?
        bool validate_telephone(string);  //IS THE PHONE VALID?
        bool validate_credit_c(string);   //IS THE CC # VALID. IS 6 DIGITS

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
        string reservation_number;  //RE #. MUST BE 6 DIGITS IN LENGTH
        bool sel_City;              // THERE ARE 2 CITIES
        bool sel_Time;             // FROM SFO @ 6AM AND FROM LAS @ 10PM
        bool sel_Date;             // SELECT DATE
        bool how_bags;             // 0 OR 1 BAG.
        bool age;                  // age requirements
        bool assist;               // disability assitance


};

#endif // PASSENGER_H
