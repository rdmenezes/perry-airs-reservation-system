#ifndef RESERVATIONSYSTEM_H
#define RESERVATIONSYSTEM_H

#include <vector>
class ReservationSystem
{
    public:
        ReservationSystem();
        virtual ~ReservationSystem();
        void show_Menu();        // view menu
        void view_airline();     //view???
        void view_passengers();  //list passengers
        void add_airline();      //add airline
        void print_sales();      //print sales report

    protected:
    private:
 //   vector <Airplane> airplane;  // passenger container.
};

#endif // RESERVATIONSYSTEM_H
