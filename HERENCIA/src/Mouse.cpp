#include <iostream>
#include "../include/Mouse.hpp"

Mouse::Mouse(const std::string& marca, int dpi) 
      : Periferico(marca), dpi(dpi) {}

void Mouse::clicIzquierdo() 
    {
        std::cout << "🖱️  Mouse '" << getMarca() << "' (" << dpi << " DPI) - Clic izquierdo.\n";
        std::cout << "👆 Seleccionando elemento...\n";
        std::cout << "✅ Acción completada!\n";
    }

void Mouse::clicDerecho() 
    {
        std::cout << "🖱️  Mouse '" << getMarca() << "' (" << dpi << " DPI) - Clic derecho.\n";
        std::cout << "📋 Desplegando menú contextual...\n";
        std::cout << "✅ Menú mostrado correctamente!\n";
    }