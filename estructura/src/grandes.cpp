#include "grandes.h"

grandes::grandes()
{
    tamano=15;
    velocidad=10;
    inteligencia="si";
    hablar="no";
    belleza="mucha";
}

grandes::grandes(const int &new_tamano,const int &new_velocidad,const string new_inteligencia,const string new_hablar,const string new_belleza)
{
    titan(new_tamano,new_velocidad,new_inteligencia,new_hablar);
    belleza=new_belleza;

}
