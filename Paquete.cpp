#include "Paquete.h"

void Paquete::setID(int &id)
{
    this->id = id;
}

int Paquete::getID()
{
    return id;
}

void Paquete::setOrigen(string &origen)
{
    this->origen = origen;
}
string Paquete::getOrigen()
{
    return origen;
}

void Paquete::setDestino(string &destino)
{
    this->destino = destino;
}
string Paquete::getDestino()
{
    return destino;
}

void Paquete::setPeso(float &peso)
{
    this->peso = peso;
}
float Paquete::getPeso()
{
    return peso;
}