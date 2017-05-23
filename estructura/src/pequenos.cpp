#include "pequenos.h"

pequenos::pequenos()
{
    tamano=5;
    velocidad=40;
    inteligencia="no";
    hablar="no";
}

pequenos::pequenos(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar,const string new_peligro)
{
    titan(new_tamano,new_velocidad,new_inteligencia,new_hablar);
    peligro=new_peligro;
}

void pequenos::Atacan()
{
    cout<<"Si atacan, pero puedes denterlo"<<endl;
}
