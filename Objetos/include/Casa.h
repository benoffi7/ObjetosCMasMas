#ifndef CASA_H
#define CASA_H
#include <iostream>

class Casa
{
    public:
        Casa();
        virtual ~Casa();

        int Gethabitaciones() ;
        void Sethabitaciones(int val);
        std::string Getcalle();
        void Setcalle(std::string val);

    protected:

    private:
        int habitaciones;
        std::string calle;
};

#endif // CASA_H
