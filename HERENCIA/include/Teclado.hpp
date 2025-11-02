#ifndef TECLADO_HPP
#define TECLADO_HPP

#include "Periferico.hpp"

class Teclado : public Periferico // HERENCIA.
    {
        private:
            int numTeclas;
        
        public:
            Teclado(const std::string& marca = "Genérico", int teclas = 104);
            void presionarTecla();
    };

#endif