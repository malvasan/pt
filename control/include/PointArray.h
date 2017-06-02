#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"

class PointArray:public Point
{
    private:
        Point *puntero;
        int _size;

    public:
        PointArray();
        PointArray(Point arr[],const int _size);
        PointArray(const PointArray& pv);
        ~PointArray();
        void _resize(int n);
};

#endif // POINTARRAY_H
