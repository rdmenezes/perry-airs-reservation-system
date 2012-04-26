#ifndef RESERVATIONSYSTEM_H
#define RESERVATIONSYSTEM_H

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

class ReservationSystem
{
    public:

        ReservationSystem();   //CONSTRUCTOR
       ~ReservationSystem();   //DESTRUCTOR

//////////////////////////////////////////////////////////////
////////////////////// SET DATA //////////////////////////////

        void makeReservation(); //FINAL RESERVATION STEP.
        void set_name();        //SET FIRST NAME.
        void set_lname();       //SET LAST NAME
        void selectDCity();     //SET DESTINATION CITY.
        void selectTime();      //SELECT DEPARTURE TIME.
        void changeDate();      //SELECT DATE.
        void changeTime();      //SELECT TIME
        void confNumber();      //GENERATE CONFIRMATION NUMBER

//////////////////////////////////////////////////////////////
////////////////////// VALIDATIONS ///////////////////////////

        bool validate_names(string);      // ARE NAMES VALID?
        bool validate_telephone();  //IS THE PHONE VALID?
        bool validate_credit_c(string);   //IS THE CC # VALID.

/////////////////////////////////////////////////////////////
////////////////////// FETCH DATA ///////////////////////////

        string get_firstName();     //FETCH FIRST NAME.
        string get_lastName();      //FETCH LAST NAME.
        string get_telnumber();     //FETCH TEL.#.

    private:

        string firstName;           //CUSTOMERS NAME.
        string lastName;            //CUSTOMERS LAST NAME.
        string phoneNumer;          //CUSTOMER PHONE #.
        string reservation_number;  //RE #.
};

#endif // RESERVATIONSYSTEM_H
