#include <iostream>
#include <string>
#include <list>
#include "Paquete.h"
#include <fstream>
#include <sstream>

using namespace std;

class Paqueteria
{
private:
    /* data */
public:
    Paqueteria(){}
    list<Paquete> Paquetin;
    list<Paquete>::iterator p;
    void AgregarPaquete(Paquete &p);
    void EliminarPaquete();
    void Mostrar();
    void agregarDatos();
    void Guardar();
    void Recuperar();
};


void Paqueteria::AgregarPaquete(Paquete &p)
{
    Paquetin.push_back(p);
}

void Paqueteria::EliminarPaquete()
{
    Paquetin.pop_front();
}

void Paqueteria::Mostrar()
{
    for (p = Paquetin.begin(); p != Paquetin.end(); p++)
    {
        cout << *p << endl;
    }
    
}

void Paqueteria::agregarDatos()
{
    int ides;
    string origenes;
    string destinos;
    float pesos;
    cout<<"ID;"<<endl;
    cin>>ides;
    cout<<"Origen:"<<endl;
    cin>>origenes;
    cout<<"Destino:"<<endl;
    cin>>destinos;
    cout<<"Peso:"<<endl;
    cin>>pesos;
    Paquete pack(ides, origenes, destinos, pesos);
    AgregarPaquete(pack);
}

void Paqueteria::Guardar()
{
    ofstream file("Paquetes.txt");
    if (file.is_open())
    {
        for (p = Paquetin.begin(); p != Paquetin.end(); p++)
        {
            file << p->getID() << endl;
            file << p->getOrigen() << endl;
            file << p->getDestino() << endl;
            file << p->getPeso() << endl;
        }
    }
    file.close();
}

void Paqueteria::Recuperar()
{
    ifstream file("Paquetes.txt");
    if (file.is_open())
    {
        string temp;
        int ide;
        float peso;
        Paquete Recuperacion;
        while (true)
        {
            getline(file, temp);
            stringstream str_int(temp);
            str_int >> ide;
            Recuperacion.setID(ide);
            getline(file, temp);
            Recuperacion.setOrigen(temp);
            getline(file, temp);
            Recuperacion.setDestino(temp);
            getline(file, temp);
            stringstream str_float(temp);
            str_float >> peso;
            Recuperacion.setPeso(peso);
            AgregarPaquete(Recuperacion);
            if (file.eof())
            {
                break;
            }
            
        }
        
    }

    file.close();
    
}









