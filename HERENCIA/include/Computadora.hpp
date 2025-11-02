#ifndef COMPUTADORA_HPP
#define COMPUTADORA_HPP

#include "Procesador.hpp"
#include "MemoriaRAM.hpp"
#include "DiscoDuro.hpp"
#include "Periferico.hpp"

class Computadora 
{
    protected:
        Procesador procesador;
        MemoriaRAM memoria;
        DiscoDuro disco;
        Periferico* periferico;  // AGREGACIÓN.
    
    public:
        Computadora(float velProcesador, int nucProcesador, int capMemoria, int capDisco);
        virtual ~Computadora() = default;
        virtual void encender();
        virtual void apagar();
        void conectarPeriferico(Periferico* perif);
        void desconectarPeriferico();
        virtual float rendimiento() = 0;  // Método abstracto.
};

#endif