#include <iostream>
#include "../include/ComputadoraEscritorio.hpp"

ComputadoraEscritorio::ComputadoraEscritorio(float velProcesador, int nucProcesador, int capMemoria, int capDisco,
                                             const std::string& torre)
                      : Computadora(velProcesador, nucProcesador, capMemoria, capDisco), tamanioTorre(torre) {}

void ComputadoraEscritorio::abrirTorre() 
    {
        std::cout << "🔧 Abriendo torre de computadora de escritorio...\n";
        std::cout << "📦 Tamaño de torre: " << tamanioTorre << "\n";
        std::cout << "✅ Torre abierta para mantenimiento!\n";
    }

void ComputadoraEscritorio::cerrarTorre() 
    {
        std::cout << "🔧 Cerrando torre de computadora de escritorio...\n";
        std::cout << "📦 Tamaño de torre: " << tamanioTorre << "\n";
        std::cout << "✅ Torre cerrada y asegurada!\n";
    }

float ComputadoraEscritorio::rendimiento() 
    {
        float factorTorre = 1.0f;
        if (tamanioTorre == "Grande") factorTorre = 1.3f;
        else if (tamanioTorre == "Mediana") factorTorre = 1.1f;
        
        float rendimiento = factorTorre;
        std::cout << "📊 Calculando rendimiento de Computadora de Escritorio...\n";
        std::cout << "💻 Características: Torre " << tamanioTorre << "\n";
        std::cout << "🎯 Puntuación de rendimiento: " << rendimiento << "\n";
        return rendimiento;
    }