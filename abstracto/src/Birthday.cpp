#include "Birthday.h"

Birthday::Birthday()
{
    ano=new int;
    ano=0;
    mes=new int;
    mes=0;
    dia=new int;
    dia=0;
}

Birthday::~Birthday()
{
    delete ano;
    delete mes;
    delete dia;
}

int Birthday::cal_edad_ano()
{
    return 2017-(*ano);
}

int Birthday::cal_edad_mes()
{
    return 5-(*mes);
}
int Birthday::cal_edad_dia()
{
    return 26-(*dia);
}
