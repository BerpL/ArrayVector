#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> mystack;     //Declaramos la pila dandole el nombre de mystack
    mystack.push(1);        //Empezamos a introducirle valores enteros del 1 al 5
    mystack.push(2);
    mystack.push(3);
    mystack.push(4);
    mystack.push(5);
    mystack.pop();          //Usamos pop lo cual nos elimina el ultimo elemento introducido


    cout << "La pila esta vacia ? : "<< mystack.empty()<< endl;                         //empty devuelve un valor booleano si la pila esta vacio o no
    cout << "El tamaño de la pila es : " << mystack.size() << endl;                     //size devuelve el tamaño de la pila
    cout << "El valor de la ultima posicion de la pila es : " << mystack.top() << endl; //top devuelve el valor de la posicion final de la pila

    for(int i=0; mystack.size()!=0;i++){        //este bucle imprime el ultimo valor de la posicion de la pila acompañado con el pop
        cout << mystack.top() << endl;          //el pop hace que cada que el bucle de una vuelta quite la ultima poiscion y asi top pueda recorrer al anterior
        mystack.pop();                          //asi el resultado de la impresion seria 4,3,2,1 ya que usamos un pop al principio como ejemplo
    }
}

