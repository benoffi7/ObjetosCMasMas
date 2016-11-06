#include "Casa.h"

Casa::Casa()
{
    //ctor
}

Casa::~Casa()
{
    //dtor
}

int Casa::Gethabitaciones() { return habitaciones; }
void Casa::Sethabitaciones(int val) { habitaciones = val; }
std::string Casa::Getcalle() { return calle; }
void Casa::Setcalle(std::string val) { calle = val; }
