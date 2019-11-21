//
//Creado por Kevin Rodriguez 20/08/19.
//
#include <iostream>

#ifndef TE2_DATOSII_SERVER__NODE_H
#define TE2_DATOSII_SERVER__NODE_H

using namespace std;

class Node {

private:
    ///Dato que guardara el nodo
    int data;
    ///Referencia al nodo que esta siguiente a este
    Node* next;

public:
    Node(int _ficha);
    int getData();
    void setData(int _data);
    Node* getNext();
    void setNext(Node* _next);

};


#endif //
