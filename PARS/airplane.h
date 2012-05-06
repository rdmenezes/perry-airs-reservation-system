#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "passenger.h"
#include <vector>
class Airplane
{
    public:
        Airplane();            // Default Constructor
        virtual ~Airplane();   // Destructor
        void assign_seat();    // passenger numbers starts from 00
        void add_passenger();  // try to add passengers
        //int get_max_passengers();
        void display_list();

    private:
    vector<Passenger> passengers; // an array of passengers
    int max_passengers;        //as a passenger is assigned, increment this var.
};

#endif // AIRPLANE_H
