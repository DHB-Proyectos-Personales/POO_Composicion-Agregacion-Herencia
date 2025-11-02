#ifndef MONITOR_HPP
#define MONITOR_HPP

#include "Periferico.hpp"

class Monitor : public Periferico // HERENCIA.
    {
        private:
            float tamanioPulgadas;
            std::string resolucion;
        
        public:
            Monitor(const std::string& marca = "Genérico", 
                    float pulgadas = 24.0f, 
                    const std::string& resol = "1920x1080");
            void encender();
            void apagar();
            void ajustarBrillo();
    };

#endif