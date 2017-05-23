#include "titan.h"

titan::titan()
{
    tamano=0;
    velocidad=0;
    inteligencia="";
    hablar="";
}

titan::titan(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar)
{
    tamano=new_tamano;
    velocidad=new_velocidad;
    inteligencia=new_inteligencia;
    hablar=new_hablar;
}

void titan::Atacan()
{
    cout<<"Si atacan, ten cuidado"<<endl;
}

