#ifndef COMPUTADORAESCRITORIO_HPP
#define COMPUTADORAESCRITORIO_HPP

#include "Computadora.hpp"

class ComputadoraEscritorio : public Computadora // HERENCIA.
    {
        private:
            std::string tamanioTorre;
        
        public:
            ComputadoraEscritorio(float velProcesador, int nucProcesador,
                                int capMemoria, int capDisco,
                                const std::string& torre = "Mediana");
            void abrirTorre();
            void cerrarTorre();
            float rendimiento() override;
    };

#endif