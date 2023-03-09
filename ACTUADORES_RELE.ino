int pin_rele = 5; // Pin digital al que está conectado el módulo de relé
void setup() {
  pinMode(pin_rele, OUTPUT); // Establece el pin como salida
}
void loop() {
  digitalWrite(pin_rele, HIGH); // Enciende el dispositivo conectado al relé
  delay(1000); // Espera un segundo
  digitalWrite(pin_rele, LOW); // Apaga el dispositivo conectado al relé
  delay(1000); // Espera un segundo
}
