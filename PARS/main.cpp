#include <iostream>
#include "passenger.h"
#include "airplane.h"
using namespace std;


int main()
{
/*  Testing class Passenger
    Passenger chris;
    chris.set_Name();
    chris.set_Lname();
    chris.phone_Format();
    cout << chris;
*/

// Testing class airplane
    Airplane test;
    test.add_passenger();
    test.display_list();


    return 0;
}


