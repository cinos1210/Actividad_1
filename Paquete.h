#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Paquete
{
private:
    int id;
    string origen;
    string destino;
    float peso;
    
public:
//Constructor
    Paquete(){}
    Paquete(int &id, string origen, string destino, float peso):id(id), origen(origen), destino(destino), peso(peso){};
    
    void setID(int &id);
    int getID();

    void setOrigen(string &origen);
    string getOrigen();

    void setDestino(string &destino);
    string getDestino();

    void setPeso(float &peso);
    float getPeso();

    friend ostream& operator<<(ostream &out, const Paquete &p)
    {
        out << left;
        out << setw(10) << p.id;
        out << setw(10) << p.origen;
        out << setw(10) << p.destino;
        out << setw(10) << p.peso;

        return out;
    }
};







