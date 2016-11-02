#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> myqueue;			//Declaramos la cola dandole el nombre de myqueue
    myqueue.push(1);			//Introducimos valores enteros a la cola del 1 al 5
    myqueue.push(2);
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(5);
    myqueue.pop();				//En el caso de la cola el pop elimina el valor de la primera posicion de la cola

    cout << "La cola esta vacia : "<< myqueue.empty() << endl;								//empty devuelve un valor booleano si la cola esta vacia o no
    cout << "El tamaño de la cola es : "<< myqueue.size() << endl;							//size devuelve el tamaño de la cola
    cout << "El valor de la posicion inicial de la cola es : " << myqueue.front() << endl;	//front devuelve el valor de la primera posicion de la cola
    cout << "El valor de la posicion final de la cola es: " << myqueue.back() << endl;		//back devuelve el valor de la ultima posicion de la cola

    for (int i=0; myqueue.size()!=0;i++){					//En este bucle lo que hacemos es imprimir el valor de la primera posicion de la cola y luego el pop 
            cout <<"  "<< myqueue.front() << endl;			//elimina la primera posicion, asi a la siguente iteraccion se imprimiria el segundo valor y asi imprimiria
            myqueue.pop();									//la cola en este caso imprimiria: "1,2,3,4" ya que usamos un pop al comienzo como ejemplo.
    }


}

