#ifndef PEQUENOS_H
#define PEQUENOS_H
#include "titan.h"
#include <iostream>

using namespace std;
class pequenos:public titan
{
    private:
        string peligro;
    public:
        pequenos();
        pequenos(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar,const string new_peligro);
        void Atacan();

};

#endif // PEQUENOS_H
