#include "PointArray.h"

PointArray::PointArray()
{
    this->_size=0;
    Point arr[0];
    puntero=arr;
}

PointArray::PointArray(Point arr[],const int _size)
{
    puntero=arr;
    this->_size=_size;
}

PointArray::PointArray(const PointArray &v)
{
    this->_size=v._size;
    this->puntero=v.puntero;
}
PointArray::~PointArray()
{
    for(int i=0;i<_size;++i)
    {
        (puntero+i)->setX(0);
        (puntero+i)->setY(0);
    }
}
void PointArray::_resize(int n)
{
    Point new_array[n];
    if(n<_size){
        for(int i=0;i<n;++i){
            new_array[i]=(puntero+i)->getX();
    }

    }
    else{
        for(int i=0;i<_size;++i){
            new_array[i]=(puntero+i)->getX();
        }
    }
    puntero=new_array;
    this->_size=n;
}















