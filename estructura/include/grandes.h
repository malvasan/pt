#ifndef GRANDES_H
#define GRANDES_H
#include "titan.h"

class grandes:public titan
{
    private:
        string belleza;
    public:
        grandes();
        grandes(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar,const string belleza);


};

#endif // GRANDES_H
