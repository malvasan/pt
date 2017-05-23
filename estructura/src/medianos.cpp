#include "medianos.h"

medianos::medianos()
{
    tamano=7;
    velocidad=20;
    inteligencia="si";
    hablar="no";
    fuerza = 500;
}

medianos::medianos(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar,const int new_fuerza)
{
    titan(new_tamano,new_velocidad,new_inteligencia,new_hablar);
    fuerza=new_fuerza;
}

void medianos::Atacan()
{
    cout<<"Si estas al frente de uno ya fuiste"<<endl;
}
