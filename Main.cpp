#include <iostream>
#include "Paqueteria.h"

using namespace std;

int main()
{
    int respuesta;
    Paqueteria amazon;

    do
    {
        /* code */
    
    
        cout<<"Actividad 1"<<endl;
        cout<<"Menu"<<endl;
        cout<<"1. Agregar paquete."<<endl;
        cout<<"2. Eliminar paquete."<<endl;
        cout<<"3. Mostrar."<<endl;
        cout<<"4. Guardar."<<endl;
        cout<<"5. Recuperar."<<endl;
        cout<<"Opcion:"<<endl;
        cin>>respuesta;
    
        switch (respuesta)
        {
        case 1:
            amazon.agregarDatos();
            system("PAUSE");
            break;
        case 2:
            amazon.EliminarPaquete();
            system("PAUSE");
            break;
        case 3:
            amazon.Mostrar();
            system("PAUSE");
            break;
        case 4:
            amazon.Guardar();
            system("PAUSE");
            break;
        case 5: 
            amazon.Recuperar();
            break;
        default:
            break;
        }
    } while (respuesta != 65);


}