/*Licencia Gratis
hecho por Emilio y Manuel
21-09-2022*/

#include "Tanque.h"
#include "Arduino.h"

void Tanque::info(int _P1N, int _P1S, int _P2N, int _P2S) {
	Serial.begin(9600);

	//motor 1
	P1N = _P1N;
	P1S = _P1S;
	//motor 2
	P2N = _P2N;
	P2S = _P2S;

	//motor 1
	pinMode(P1N, OUTPUT);
	pinMode(P1S, OUTPUT);
	//motor 2
	pinMode(P2N, OUTPUT);
	pinMode(P2S, OUTPUT);

	Serial.println("--------------------------------------------------------------------------------------------------");
	Serial.println("Los pines a utilizar son: ");
	Serial.print("Motor 1 positivo: "); Serial.print(P1N); Serial.print("| "); Serial.print("Motor 1 negativo "); Serial.print(P1S);
	Serial.print("Motor 2 positivo: "); Serial.print(P2N); Serial.print("| "); Serial.print("Motor 2 negativo "); Serial.print(P2S);
	Serial.println("--------------------------------------------------------------------------------------------------");
}

/*void Tanque::avanza() {
	digitalWrite(P1N, LOW);
	digitalWrite(P1S, HIGH);
	digitalWrite(P2N, LOW);
	digitalWrite(P2S, HIGH);
}

void Tanque::retrocede() {
	digitalWrite(P1N, HIGH);
	digitalWrite(P1S, LOW);
	digitalWrite(P2N, HIGH);
	digitalWrite(P2S, LOW);
}
*/

void Tanque::derecha() {
	digitalWrite(P1N, LOW);
	digitalWrite(P1S, HIGH);
	digitalWrite(P2N, HIGH);
	digitalWrite(P2S, LOW);
}

void Tanque::izquierda() {
	digitalWrite(P1N, HIGH);
	digitalWrite(P1S, LOW);
	digitalWrite(P2N, LOW);
	digitalWrite(P2S, HIGH);
}

void Tanque::detener() {
	digitalWrite(P1N, LOW);
	digitalWrite(P1S, LOW);
	digitalWrite(P2N, LOW);
	digitalWrite(P2S, LOW);
}
