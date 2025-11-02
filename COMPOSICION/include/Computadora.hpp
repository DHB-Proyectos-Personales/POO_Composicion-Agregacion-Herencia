#ifndef COMPUTADORA_HPP
#define COMPUTADORA_HPP

#include "Procesador.hpp"
#include "MemoriaRAM.hpp"
#include "DiscoDuro.hpp"

class Computadora 
    {
        private:
            Procesador procesador; // COMPOSICIÓN.
            MemoriaRAM memoria;
            DiscoDuro disco;

        public:
            Computadora(float velProcesador, int nucProcesador, int capMemoria, int capDisco);
            void encender();
            void apagar();
    };

#endif