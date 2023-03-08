// ----------------------------------------- MOVER EL SERVO A LAS POSICIONES INDICADAS POR EL USUARIO
/*
#include <Servo.h>

Servo miServo;  // Crear un objeto Servo

void setup() {
  miServo.attach(9);  // Inicializar el objeto Servo en el pin 9
}

void loop() {
  miServo.write(90);  // Mover el servomotor a 90 grados
  delay(1000);        // Esperar 1 segundo
  miServo.write(0);   // Mover el servomotor a 0 grados
  delay(1000);        // Esperar 1 segundo
}
*/


// -------------------------------------- MOVER EL SERVO DE 0 A 120 GRADOS LENTAMENTE USANDO UN CICLO FOR
/*
#include <Servo.h>

Servo miServo;  // Crear un objeto Servo

void setup() {
  miServo.attach(9);  // Inicializar el objeto Servo en el pin 9
}

void loop() {
  for (int i = 0; i <= 120; i++) {  // Mover el servomotor de 0 a 120 grados
    miServo.write(i);  // Escribir la posición en el servomotor
    delay(15);  // Esperar un tiempo para que se mueva el servomotor
  }
  delay(1000);  // Esperar un segundo antes de volver a mover el servomotor
}

*/

// --------------------------------------  MOVER EL SERVO UTILIZANDO UN POTENCIOMETRO
/*
int servopin = 8;

int angulo = 0;

int pot = A0;

int potvalue=0;

void setup() {

  servo1.attach(servopin);

  pinMode (pot,INPUT);

  servo1.write(angulo);

}

void loop() {

  potvalue= analogRead(pot);

  angulo=map(potvalue,0,1023,0,180);

  servo1.write(angulo);  

  delay(10);

}
*/
