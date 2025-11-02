#ifndef DISCODURO_HPP
#define DISCODURO_HPP

#include <string>

class DiscoDuro 
    {
        private:
            int capacidad;
        
        public:
            DiscoDuro(int cap = 0);
            std::string leerSector(int sector);
            void escribirSector(int sector, const std::string& dato);
    };

#endif