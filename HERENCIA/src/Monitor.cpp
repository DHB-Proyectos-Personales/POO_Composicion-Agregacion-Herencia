#include <iostream>
#include "../include/Monitor.hpp"

Monitor::Monitor(const std::string& marca, float pulgadas, const std::string& resol)
        : Periferico(marca), tamanioPulgadas(pulgadas), resolucion(resol) {}

void Monitor::encender() 
    {
        std::cout << "🖥️  Monitor '" << getMarca() << "' (" << tamanioPulgadas << "\", " << resolucion << ") - Encendido.\n";
        std::cout << "⚡ Inicializando pantalla...\n";
        std::cout << "🌈 Mostrando imagen de inicio...\n";
        std::cout << "✅ Monitor listo para usar!\n";
    }

void Monitor::apagar() 
    {
        std::cout << "🖥️  Monitor '" << getMarca() << "' (" << tamanioPulgadas << "\", " << resolucion << ") - Apagado.\n";
        std::cout << "🌙 Apagando retroiluminación...\n";
        std::cout << "⚡ Desconectando energía...\n";
        std::cout << "✅ Monitor apagado correctamente!\n";
    }

void Monitor::ajustarBrillo() 
    {
        std::cout << "🖥️  Monitor '" << getMarca() << "' - Ajustando brillo.\n";
        std::cout << "☀️  Modificando intensidad de luz...\n";
        std::cout << "✅ Brillo ajustado a nivel óptimo!\n";
    }