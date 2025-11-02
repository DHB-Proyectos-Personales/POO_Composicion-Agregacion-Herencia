#include <iostream>
#include "../include/Teclado.hpp"

Teclado::Teclado(const std::string& marca, int teclas) 
        : Periferico(marca), numTeclas(teclas) {}

void Teclado::presionarTecla() 
    {
        std::cout << "⌨️  Teclado '" << getMarca() << "' (" << numTeclas 
                << " teclas) - Tecla presionada.\n";
        std::cout << "💬 Enviando código de tecla al sistema...\n";
        std::cout << "✅ Entrada registrada correctamente!\n";
    }