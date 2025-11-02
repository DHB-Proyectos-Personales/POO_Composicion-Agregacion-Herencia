// include/Procesador.hpp
#ifndef PROCESADOR_HPP
#define PROCESADOR_HPP

class Procesador 
    {
        private:
            float velocidad;
            int nucleos;
        
        public:
            // 0.0f es un indicador de que se va a pasar un valor tipo float.
            Procesador(float vel = 0.0f, int nuc = 0); 
            void ejecutarInstruccion();
    };

#endif