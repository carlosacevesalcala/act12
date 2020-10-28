#include <iostream>
#include "arreglo.h"
using namespace std;

void modificar(int *a){
    *a = *a + 1;
}

int main(){
    Arreglo arreglo;
    arreglo.insertar_final(10);
    arreglo.insertar_final(30);
    arreglo.insertar_final(11);
    arreglo.insertar_final(45);
    arreglo.insertar_final(58);
    arreglo.insertar_final(90);
    arreglo.insertar_final(63);
    arreglo.insertar_final(22);
    
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }

    arreglo.insertar_inicio(-10);
    arreglo.insertar_inicio(8);

    cout<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    

}