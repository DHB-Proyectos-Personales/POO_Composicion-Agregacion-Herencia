#include <iostream>
#include "../include/MemoriaRAM.hpp"

MemoriaRAM::MemoriaRAM(int cap) 
           : capacidad(cap) {}

std::string MemoriaRAM::leer(int direccion) 
    {
        std::cout << "📖 Memoria RAM (" << capacidad << " GB) leyendo dirección: " << direccion << std::endl;
        std::cout << "🔍 Buscando datos en memoria...\n";
        std::cout << "✅ Datos recuperados exitosamente!\n";
        return "Datos leídos de la dirección " + std::to_string(direccion);
    }

void MemoriaRAM::escribir(int direccion, const std::string& dato) 
    {
        std::cout << "📝 Memoria RAM (" << capacidad << " GB) escribiendo en dirección: " << direccion << std::endl;
        std::cout << "💾 Guardando: '" << dato << "'\n";
        std::cout << "✅ Datos escritos exitosamente!\n";
    }