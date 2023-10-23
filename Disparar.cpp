/*Echo por Emilio y Manuel
 * licencia Gratis
 * fecha 3/9/2022
*/

#include "Arduino.h"
#include "Disparar.h"

void infodisp(int _P, int _N, int _lapiz, int _n_lapiz, int _elastico, int _n_elastico){
  P = _P;
  N = _N;
  lapiz = _lapiz;
  n_lapiz = _n_lapiz;
  elastico = _elastico;
  n_elastico = _n_elastico;

  pinMode(P, OUTPUT);
  pinMode(N, OUTPUT);
  
  pinMode(lapiz, OUTPUT);
  pinMode(n_lapiz, OUTPUT);
  
  pinMode(elastico, OUTPUT);
  pinMode(n_elastico, OUTPUT);
}

void Disparar::torreta(){
  digitalWrite(P, LOW);
	digitalWrite(N, HIGH);
}
void Disparar::in_torreta(){
  digitalWrite(N, LOW);
  digitalWrite(P, HIGH);
}
void Disparar::disp_lapiz(){
  digitalWrite(lapiz, HIGH);
  digitalWrite(n_lapiz, LOW);
}
void Disparar::stop_pencil(){
  digitalWrite(lapiz, LOW);
  digitalWrite(n_lapiz, LOW);
}
void Disparar::disp_elsatico(){
  digitalWrite(elastico, HIGH);
  digitalWrite(n_elastico, LOW);
}
void Disparar::stop_elsatico(){
  digitalWrite(n_elastico, LOW);
  digitalWrite(elastico, LOW);
}
