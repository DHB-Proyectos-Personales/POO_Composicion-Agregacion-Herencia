#ifndef PROCESADOR_HPP
#define PROCESADOR_HPP

class Procesador 
    {
        private:
            float velocidad;
            int nucleos;

        public:
            Procesador(float vel = 0.0f, int nuc = 0);
            void ejecutarInstruccion();
    };

#endif