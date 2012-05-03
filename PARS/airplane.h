#ifndef AIRPLANE_H
#define AIRPLANE_H

class Airplane
{
    public:
        Airplane();            // Default Constructor
        virtual ~Airplane();   // Destructor
        void assign_seat();    // passenger numbers starts from 00
        bool airplane_limit(); // 30 passenters per plane
        void add_passenger();  // try to add passengers
        int get_max_passengers();
    private:
//    vector<Passenger> passengers;
    int max_passengers;
};

#endif // AIRPLANE_H
