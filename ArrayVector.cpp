#include "ArrayVector.h"
#include "Vector.h"
#include <iostream>

ArrayVector::ArrayVector()
{
    mysize = 0;
    v = new Vector[mysize];
}

ArrayVector::ArrayVector(const Vector v1[], const int len)
{
    mysize = len;
    v = new Vector[mysize];
    for(int i = 0; i<mysize; i++)
        v[i] = v1[i];
}

ArrayVector::ArrayVector(ArrayVector &pv)
{
    mysize = pv.mysize;
    v = new Vector[mysize];
    for(int i = 0; i<mysize;i++)
        v[i] = pv.v[i];
}
ArrayVector::~ArrayVector()
{
    delete[] v;
}

void ArrayVector::myresize(const int newSize)
{
    Vector *t;
    t = new Vector[newSize];
    int minSize = (newSize >mysize ? mysize:newSize);
    for(int i =0; i<minSize;i++)
        v[i]=v[i];
    delete[] v;
    mysize = newSize;
    v = t;
}

void ArrayVector::mypush_back(const Vector &v1)
{
    Vector *t;
    mysize = mysize +1;
    t = new Vector[mysize];
    v[mysize-1]=v1;
}

void ArrayVector::myinsert(const int position, const Vector &v1)
{
    if(position>mysize && position<0)
        cout << ">>>>Ingrese una posición correcta<<<<" << endl;
    else
    {
        Vector *t;
        mysize = mysize +1;
        t = new Vector[mysize];
        for(int i=position; i <mysize;i++)
            v[position+1]=v[position];
        v[position] = v1;
    }
}

void ArrayVector::myremove(const int position)
{
    if(position>mysize && position<0)
        cout << ">>>>Ingrese una posición correcta<<<<" << endl;
    else
    {
        Vector *t;
        t = new Vector[mysize-1];
        for(int i=position;i<mysize-1;i++)
            v[i] = v[i+1];
        mysize = mysize-1;
    }
}

const int ArrayVector::getSize()const
{
    return mysize;
}

void ArrayVector::myclear()
{
    delete[] v;
}

void ArrayVector::printArrayVector()
{
    cout << "El array de vectores es :"<<endl;
    for(int i=0; i<mysize;i++)
        v[i].print_Vector();
}



