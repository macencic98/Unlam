#include <iostream>
#include "Cadena.h"
#include <fstream>

using namespace std;

int main()
{
    Cadena cad1;
    Cadena cad2("Hola");
    Cadena cad3("Como Andas?");
    Cadena cad4(cad3);
    Cadena cad5;
    Cadena cad6;
    Cadena cad7;
    Cadena cad8(cad2);
    ///MUESTRO CADENAS INDIVIDUALMENTE
    puts("\nMuestro Cadena 1");
    cout<<cad1<<endl;
    puts("\nMuestro Cadena 2");
    cout<<cad2<<endl;
    puts("\nMuestro Cadena 3");
    cout<<cad3<<endl;
    puts("\nMuestro Cadena 4");
    cout<<cad4<<endl;

    ///PRUEBO OPERACIONES
    cad4=cad2;
    puts("\nMuestro Cadena 4 con asignacion de cad2");
    cout<<cad4;

    cad1=cad2+cad3;
    puts("\nMuestro Cadena 1 con Suma de CAD2 y CAD3");
    cout<<cad1;
    puts("\nMuestro Cadena 6 con Suma de CAD3 y una palabra X");
    cad6=cad3+"Maquina";
    cout<<cad6;

    puts("\nMuestro Cadena 7 con Suma de una palabra X y una Cadena");
    cad7="Hola"+cad3;
    cout<<cad7;

    puts("\nMuestro Cadena 8 con Suma de si misma(cad2) y cad7 utilizando operador +=: ");
    cad8+=cad7;
    cout<<cad8;

    cout<<"\nIngrese una cadena: ";
    cin>>cad5;
    puts("\nMuestro Cadena 5 con el numero que ingrese por teclado: ");
    cout<<cad5;
}
