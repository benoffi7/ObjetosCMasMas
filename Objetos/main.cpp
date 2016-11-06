#include <iostream>
#include "Casa.h"
#include "stdio.h"
using namespace std;

int main()
{
    //creo una instancia de mi objeto del tipo Casa llamado "c"
    Casa c;
    //seteo los atributos
    c.Setcalle("salta");
    c.Sethabitaciones(2);
    //muestro los atributos
    printf("mi calle es %s y tengo %d habitaciones",c.Getcalle().c_str(),c.Gethabitaciones());

    return 0;
}
