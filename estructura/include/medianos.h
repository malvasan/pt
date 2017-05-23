#ifndef MEDIANOS_H
#define MEDIANOS_H
#include "titan.h"

class medianos:public titan
{
    private:
        int fuerza;
    public:
        medianos();
        medianos(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar,const int fuerza);
        void Atacan();

};

#endif // MEDIANOS_H
