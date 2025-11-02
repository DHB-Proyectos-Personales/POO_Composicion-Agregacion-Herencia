#include <iostream>
#include "../include/Procesador.hpp"

Procesador::Procesador(float vel, int nuc) : velocidad(vel), nucleos(nuc) {}

void Procesador::ejecutarInstruccion() 
    {
        std::cout << "🚀 Procesador ejecutando instrucción a " << velocidad << " GHz con " << nucleos << " núcleos.\n";
        std::cout << "💻 Procesando datos...\n";
        std::cout << "✅ Instrucción completada exitosamente!\n";
    }