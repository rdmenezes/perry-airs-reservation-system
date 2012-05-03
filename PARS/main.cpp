#include <iostream>
#include "passenger.h"
using namespace std;

int main()
{
    /*
    Passenger chris;
    chris.set_name();
    chris.set_lname();
    cout << chris;*/


    string phone_number;

    cout << "enter phone number: ";
    cin >> phone_number;

    //if((phone_number[0] == '(') && (phone_number[3]) && (phone_number[8])
    cout << phone_number[0] <<"," << phone_number[4] << "," << phone_number[8];



    return 0;
}


