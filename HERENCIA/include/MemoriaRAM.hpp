#ifndef MEMORIARAM_HPP
#define MEMORIARAM_HPP

#include <string>

class MemoriaRAM 
    {
        private:
            int capacidad;
        
        public:
            MemoriaRAM(int cap = 0);
            std::string leer(int direccion);
            void escribir(int direccion, const std::string& dato);
    };

#endif