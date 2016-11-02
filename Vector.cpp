#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> v1(1,2.5);				//En esta linea declaramos un vector de tipo double con un solo valor que contiene al 2.5
    v1.push_back(2.2);						//A continuacion empezamos a introducirle valores con la funcion push_back 
    v1.push_back(3.3);						//La funcion push_back introduce un valor en la posicion final del vector
    v1.push_back(4.4);			
    v1.push_back(5.5);
    v1.insert(v1.begin()+1,9.9);			//Insert inserta un elemento en la posicion que le indiques, en este caso la funcion recibe un valor iterativo como 
    v1.erase(v1.begin()+1);					//pisicion y es por eso que usamos el begin que estaria apuntando a la primera posicion del vector, erase funciona
    v1.pop_back();							//de una forma muy similar a insert pero en vez de introducir un elemento, lo elimina
											//El pop_back elimina el ultimo elemento del vector
    cout << "El tamaño del vector es :" <<v1.size() << endl;					//size devuelve el tamaño del vector
    cout << "El valor de la posicion 1 del vector es :" << v1.at(1) << endl;	//at devuelve el valor de la posicion que le indiques en este ejemplo el primer valor
    cout << "El primer elemento del vector es :" << v1.front()<< endl;			//front devuele el valor de la primera posicion del vector
    cout << "El ultimo elemento del vector es :" << v1.back() << endl;			//Back devuelve el valor de la ultima posicion del vector

    for(int i=0; i<v1.size(); i++)			//en este bucle imprimimos el vector 
        cout << v1[i] << endl;
}

