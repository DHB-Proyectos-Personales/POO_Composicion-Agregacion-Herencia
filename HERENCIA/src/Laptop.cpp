#include <iostream>
#include "../include/Laptop.hpp"

Laptop::Laptop(float velProcesador, int nucProcesador, int capMemoria, int capDisco,
               int bateria, float pulgadas)
       : Computadora(velProcesador, nucProcesador, capMemoria, capDisco),
         duracionBateria(bateria), pulgadas(pulgadas) {}

void Laptop::modoReposo() 
    {
        std::cout << "💤 Activando modo reposo en Laptop " << pulgadas << "\"...\n";
        std::cout << "🔋 Estado de batería: " << duracionBateria << " horas restantes\n";
        std::cout << "✅ Laptop en estado de bajo consumo!\n";
    }

float Laptop::rendimiento() 
    {
        float rendimiento = (duracionBateria * 0.1f) + (pulgadas * 0.05f);
        std::cout << "📊 Calculando rendimiento de Laptop...\n";
        std::cout << "💻 Características: " << pulgadas << "\" pantalla, " << duracionBateria << "h batería\n";
        std::cout << "🎯 Puntuación de rendimiento: " << rendimiento << "\n";
        return rendimiento;
    }