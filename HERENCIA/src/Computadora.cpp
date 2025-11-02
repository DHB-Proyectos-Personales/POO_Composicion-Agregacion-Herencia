#include <iostream>
#include <windows.h>
#include "../include/Computadora.hpp"

Computadora::Computadora(float velProcesador, int nucProcesador, int capMemoria, int capDisco)
            : procesador(velProcesador, nucProcesador), 
              memoria(capMemoria), 
              disco(capDisco), 
              periferico(nullptr) {}

void Computadora::encender() 
    {
        std::cout << "\n=========================\n";
        std::cout << "🎯 INICIANDO COMPUTADORA\n";
        std::cout << "=========================\n";
        std::cout << "🔌 Conectando energía...\n";
        Sleep(1000);
        
        std::cout << "⚡ Energía estable.\n";
        Sleep(500);
        
        std::cout << "🔍 Inicializando componentes...\n";
        Sleep(1000);
        
        procesador.ejecutarInstruccion();
        Sleep(800);
        
        memoria.escribir(1024, "Sistema Operativo Cargado.");
        Sleep(800);
        
        std::string datosLeidos = memoria.leer(1024);
        std::cout << "📋 " << datosLeidos << std::endl;
        Sleep(800);
        
        disco.escribirSector(1, "Archivo de configuración del sistema.");
        Sleep(800);
        
        std::string datosDisco = disco.leerSector(1);
        std::cout << "📋 " << datosDisco << std::endl;
        Sleep(800);
        
        if (periferico != nullptr) 
            {
                periferico->conectar();
                Sleep(800);
            }
        
        std::cout << "✅ ¡Computadora encendida y lista para usar! 🖥️\n";
        std::cout << "=============================\n";
        std::cout << "🎯 SISTEMA OPERATIVO CARGADO\n";
        std::cout << "=============================\n\n";
    }

void Computadora::apagar() 
    {
        std::cout << "\n========================\n";
        std::cout << "🎯 APAGANDO COMPUTADORA\n";
        std::cout << "========================\n";
        std::cout << "📋 Guardando trabajo...\n";
        Sleep(1000);
        
        disco.escribirSector(2, "Datos de sesión guardados.");
        Sleep(800);
        
        if (periferico != nullptr) 
            {
                periferico->desconectar();
                Sleep(800);
            }
        
        std::cout << "🔒 Cerrando aplicaciones...\n";
        Sleep(1000);
        
        std::cout << "🔄 Liberando memoria...\n";
        Sleep(800);
        
        std::cout << "⏹️ Deteniendo procesos...\n";
        Sleep(800);
        
        std::cout << "🔌 Desconectando energía...\n";
        Sleep(500);
        
        std::cout << "✅ ¡Computadora apagada exitosamente! 💤\n";
        std::cout << "\n===================\n";
        std::cout << "🎯 SISTEMA APAGADO\n";
        std::cout << "===================\n\n";
    }

void Computadora::conectarPeriferico(Periferico* perif) 
    {
        periferico = perif;
        std::cout << "🔌 Periférico asignado a la computadora.\n";
    }

void Computadora::desconectarPeriferico() 
    {
        if (periferico != nullptr) 
            {
                std::cout << "🔌 Periférico '" << periferico->getMarca() << "' desconectado de la computadora.\n";
                periferico = nullptr;
            }
    }