#ifndef TITAN_H
#define TITAN_H
#include <string.h>
#include <iostream>

using namespace std;

class titan
{
    protected:
        int tamano;
        int velocidad;
        string inteligencia;
        string hablar;


    public:
        titan();
        titan(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar);
        virtual void Atacan();


};

#endif // TITAN_H
