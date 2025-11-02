#ifndef PERIFERICO_HPP
#define PERIFERICO_HPP

#include <string>

class Periferico 
    {
        private:
            std::string marca;

        public:
            Periferico(const std::string& marca = "Genérico");
            void conectar();
            void desconectar();
            std::string getMarca() const;
    };

#endif