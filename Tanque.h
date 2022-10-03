/*Echo por Emilio y Manuel
 * licencia Gratis
 * fecha 3/9/2022
 */

#include "Arduino.h"

#ifndef Tanque_h
#define Tanque_h

class Tanque{
private:  //atributos del tanque

	// Motor 1
	int P1N; //polo Norte (motor 1)
	int P1S; //polo Sur (motor 1)

	// Motor 2

	int P2N; //polo norte (motor 2)
	int P2S; //polo Sur (motor 2)

public:

	void info(int _P1N, int _P1S, int _P2N, int _P2S);
	void avanza();
	void retrocede();
	void derecha();
	void izquierda();
	void detener();

}; //no olvidar ;

#endif
