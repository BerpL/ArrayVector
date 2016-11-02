#include <iostream>
#include <list>

using namespace std;

main()
{
	int l1[] = {5,3,4,2,1};             //creamos una lista con 5 elementos desordenados
    list<int> mylist(l1,l1+5);          //Declaramos la lista de enteros e introducimos los valores
    mylist.push_back(6);                //push_back nos inserta un elmento al final de la lista
    mylist.push_back(0);
    mylist.pop_back();                  //pop_back nos elimina el elemento al final de la lista
    mylist.insert(mylist.begin(),7);    //insert nos inserta un elemento en la posicion ingresada de forma iterativa
    mylist.erase(mylist.begin());       //erase nos elimina un elemento en la posicion ingresada
    mylist.sort();                      //sort nos ordena la lista

    cout << "el tamaño de la lista es : " << mylist.size() << endl;                 //size nos devuelve el tamaño de la lista
    cout << "El primer elemento de la lista es :" << mylist.front()<< endl;			//front devuele el valor de la primera posicion de la lista
    cout << "El ultimo elemento de la lista es :" << mylist.back() << endl;         //back devuelve el valor de la ultima poisicion de la lista


    list<int>::iterator i;                          //creamos un iterador para poder recorrer la lista
    for(i = mylist.begin();i!=mylist.end();i++)     //en este bucle usamos el iterador dandole la primera posicion de la lista para que pueda recorrer hasta
        cout << *i << endl;                         //la ultima posicion begin es para el principio de la lista y end para el final para que luego podamos
}                                                   //se pueda imprimir cada uno de los valores con el iterador.


