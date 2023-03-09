int motor = 5; // Pin digital al que está conectado el módulo de relé
void setup() {
  pinMode(motor, OUTPUT); // Establece el pin como salida
}
void loop() {
  digitalWrite(motor, HIGH); // Enciende el dispositivo conectado al relé
  delay(2500); // Espera un segundo
  digitalWrite(motor, LOW); // Apaga el dispositivo conectado al relé
  delay(2500); // Espera un segundo
}
