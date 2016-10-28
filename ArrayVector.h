#ifndef ARRAYVECTOR_H
#define ARRAYVECTOR_H
#include <Vector.h>

class ArrayVector
{
    private:
        Vector *v;
        int mysize;
        void myresize(const int);
    public:
        ArrayVector();
        ArrayVector(const Vector v1[], const int tam);
        ArrayVector(ArrayVector &pv);
        ~ArrayVector();
        void mypush_back(const Vector &v1);
        void myinsert(const int position, const Vector &v1);
        void myremove(const int position);
        const int getSize()const;
        void myclear();
        void printArrayVector();
};

#endif // ARRAYVECTOR_H
