#ifndef COMPUTADORA_HPP
#define COMPUTADORA_HPP

#include "Procesador.hpp"
#include "MemoriaRAM.hpp"
#include "DiscoDuro.hpp"
#include "Periferico.hpp"

class Computadora 
    {
        private:
            Procesador procesador;
            MemoriaRAM memoria;
            DiscoDuro disco;
            Periferico* periferico;  // AGREGACIÓN.

        public:
            Computadora(float velProcesador, int nucProcesador, int capMemoria, int capDisco);
            void encender();
            void apagar();
            void conectarPeriferico(Periferico* perif);
            void desconectarPeriferico();
    };

#endif