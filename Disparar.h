/*Echo por Emilio y Manuel
 * licencia Gratis
 * fecha 3/9/2022
*/

#include "Arduino.h"

#ifndef Disparar_h
#define Disparar_h

class Disparar
{
    public:
        void infodisp(int _P, int _N, int _lapiz, int _n_lapiz, int _elastico, int _n_elastico);
        void torreta{};
        void in_torreta{};
        void disp_lapiz{};
        void stop_pencil{};
        void disp_elsatico{};
        void stop_elsatico{};
    private:

        int P;//torreta
        int N;//n_torreta

        int lapiz;
        int n_lapiz;

        int elastico;
        int n_elastico;

};

#endif
