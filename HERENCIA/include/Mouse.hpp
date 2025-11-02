#ifndef MOUSE_HPP
#define MOUSE_HPP

#include "Periferico.hpp"

class Mouse : public Periferico // HERENCIA.
    {
        private:
            int dpi;
        
        public:
            Mouse(const std::string& marca = "Genérico", int dpi = 800);
            void clicIzquierdo();
            void clicDerecho();
    };

#endif