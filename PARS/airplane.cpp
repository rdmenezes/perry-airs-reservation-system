#include "airplane.h"

Airplane::Airplane()
{
    max_passengers = 0;
    //ctor
}

Airplane::~Airplane()
{
    //dtor
}

// try to add passneger
void Airplane::add_passenger()
{
    Passenger temp;
    // check if max_massengers is > 30
    if(max_passengers > 30)
    {
        cout << "Airplane is full";
        exit(1);
    }

    if(max_passengers <= 30)
    {
        temp.set_Name();
        temp.set_Lname();
        temp.phone_Format();
// push object to vector
        passengers.push_back(temp);
        max_passengers++;
    }


}

//display all passenger
void Airplane::display_list()
{
    for( unsigned int i = 0 ; i < passengers.size();i++ )
    {
        cout << passengers[i];
    }
}
