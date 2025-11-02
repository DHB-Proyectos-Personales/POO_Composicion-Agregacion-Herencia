#include <iostream>
#include <windows.h>
#include "../include/Computadora.hpp"
#include "../include/Periferico.hpp"

using namespace std;

int main() 
    {
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
        
        cout << "\n============================\n";
        cout << "🖥️ SIMULADOR DE COMPUTADORA\n";
        cout << "============================\n";
        cout << "🔧 Creando computadora con componentes...\n";
        Sleep(1000);
        
        // Crea computadora con especificaciones.
        Computadora miPC(3.5f, 8, 16, 1000);
        
        // Crea y conecta los periféricos (AGREGACIÓN).
        Periferico* miMouse = new Periferico("Logitech MX Master 3");
        miPC.conectarPeriferico(miMouse);
        
        cout << "\n🎮 Presiona Enter para encender la computadora...";
        cin.get();
        
        // Enciende la computadora.
        miPC.encender();
        
        cout << "\n⏸️  Computadora en funcionamiento...\n";
        cout << "🎮 Presiona Enter para apagar la computadora...";
        cin.get();
        
        // Apaga la computadora.
        miPC.apagar();
        
        // Libera memoria de periférico.
        delete miMouse;
        
        cout << "\n👋 ¡Hasta luego! Gracias por usar el simulador 🌟\n";
        
        return 0;
    }