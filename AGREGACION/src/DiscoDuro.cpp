#include <iostream>
#include "../include/DiscoDuro.hpp"

DiscoDuro::DiscoDuro(int cap) : capacidad(cap) {}

std::string DiscoDuro::leerSector(int sector) 
    {
        std::cout << "💿 Disco Duro (" << capacidad << " GB) leyendo sector: " << sector << std::endl;
        std::cout << "🔄 Accediendo a almacenamiento permanente...\n";
        return "Datos leídos del sector " + std::to_string(sector);
    }

void DiscoDuro::escribirSector(int sector, const std::string& dato) 
    {
        std::cout << "💿 Disco Duro (" << capacidad << " GB) escribiendo en sector: " << sector << std::endl;
        std::cout << "💾 Almacenando: '" << dato << "'\n";
        std::cout << "✅ Datos guardados permanentemente!\n";
    }