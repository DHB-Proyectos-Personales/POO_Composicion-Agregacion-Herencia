#include <iostream>
#include "../include/Periferico.hpp"

Periferico::Periferico(const std::string& marca) 
           : marca(marca) {}

void Periferico::conectar() 
    {
        std::cout << "🖱️  Periférico '" << marca << "' conectado.\n";
        std::cout << "🔗 Estableciendo comunicación...\n";
        std::cout << "✅ Periférico listo para usar!\n";
    }

void Periferico::desconectar() 
    {
        std::cout << "🖱️  Periférico '" << marca << "' desconectado.\n";
        std::cout << "🔌 Liberando recursos...\n";
        std::cout << "✅ Periférico desconectado exitosamente!\n";
    }

std::string Periferico::getMarca() const 
    {
        return marca;
    }