#include <iostream>
#include "DynamicArray.cpp"

using namespace std;

int main() {

    DynamicArray a;
    cout << a.getSize() << endl;

    int arreglo[] = {1,2,3,6,5,4,8,9};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    DynamicArray b(arreglo, tam);
    cout << b.getSize() << endl;

    // Invocando a un constructor copia.
    if(true) 
        DynamicArray c = b;
        
    b.print();
    b.push_back(15);
    b.print();
    b.insert(32,9);
    b.print();
    b.remove(5);
    b.print();

    return 0;
}