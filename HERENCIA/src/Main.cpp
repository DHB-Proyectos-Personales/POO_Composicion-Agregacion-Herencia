#include <iostream>
#include <windows.h>
#include "../include/Laptop.hpp"
#include "../include/ComputadoraEscritorio.hpp"
#include "../include/Teclado.hpp"
#include "../include/Mouse.hpp"
#include "../include/Monitor.hpp"

using namespace std;

int main() 
    {
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
        
        cout << "\n========================================\n";
        cout << "🖥️  DEMOSTRACIÓN HERENCIA Y POLIMORFISMO\n";
        cout << "========================================\n\n";
        
        cout << "🔧 Creando diferentes tipos de computadoras...\n";
        Sleep(1000);
        
        // Crea diferentes tipos de computadoras.
        Laptop laptop(2.8f, 4, 8, 512, 8, 15.6f);
        ComputadoraEscritorio escritorio(3.5f, 8, 16, 1000, "Grande");
        
        // Crea los periféricos.
        Teclado teclado("Logitech", 105);
        Mouse mouse("Razer", 1600);
        Monitor monitor("Samsung", 27.0f, "2560x1440");
        
        cout << "\n🎯 DEMOSTRANDO POLIMORFISMO CON COMPUTADORAS:\n";
        cout << "==========================================\n";
        
        // Demuestra polimorfismo con arreglo de punteros a clase base.
        Computadora* computadoras[] = { &laptop, &escritorio };
        
        for (int i = 0; i < 2; i++) {
            computadoras[i]->conectarPeriferico(&teclado);
            computadoras[i]->encender();
            computadoras[i]->rendimiento(); // Llamada polimórfica.
            computadoras[i]->apagar();
            cout << "------------------------------------------\n";
            Sleep(2000);
        }
        
        cout << "\n🎯 FUNCIONALIDADES ESPECÍFICAS DE CADA TIPO:\n";
        cout << "==========================================\n";
        
        laptop.modoReposo();
        Sleep(800);
        
        escritorio.abrirTorre();
        Sleep(800);
        
        escritorio.cerrarTorre();
        Sleep(800);
        
        cout << "\n🎯 USO DE PERIFÉRICOS ESPECIALIZADOS:\n";
        cout << "====================================\n";
        
        teclado.presionarTecla();
        Sleep(800);
        
        mouse.clicIzquierdo();
        Sleep(800);
        
        mouse.clicDerecho();
        Sleep(800);
        
        monitor.encender();
        Sleep(800);
        
        monitor.ajustarBrillo();
        Sleep(800);
        
        monitor.apagar();
        Sleep(800);
        
        cout << "\n========================================\n";
        cout << "✅ DEMOSTRACIÓN COMPLETADA EXITOSAMENTE! 🌟\n";
        cout << "========================================\n\n";
        
        cout << "🎯 Resumen de conceptos demostrados:\n";
        cout << "   • Herencia (Laptop/ComputadoraEscritorio → Computadora)\n";
        cout << "   • Polimorfismo (método rendimiento())\n";
        cout << "   • Encapsulación (atributos privados)\n";
        cout << "   • Agregación (Computadora → Periferico)\n";
        cout << "   • Composición (Computadora → Procesador/Memoria/Disco)\n\n";
        
        return 0;
    }