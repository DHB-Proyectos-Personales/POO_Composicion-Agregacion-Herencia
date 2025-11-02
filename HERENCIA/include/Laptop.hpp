#ifndef LAPTOP_HPP
#define LAPTOP_HPP

#include "Computadora.hpp"

class Laptop : public Computadora // HERENCIA.
{
    private:
        int duracionBateria;
        float pulgadas;
    
    public:
        Laptop(float velProcesador, int nucProcesador, int capMemoria, int capDisco, int bateria, float pulgadas);
        void modoReposo();
        float rendimiento() override;
};

#endif