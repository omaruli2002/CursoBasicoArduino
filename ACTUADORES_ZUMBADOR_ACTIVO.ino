int zumbador = 9; //El zumbador está conectado al pin 9
void setup() {
  pinMode(zumbador, OUTPUT); //Establece el pin del zumbador como salida
}
void loop() {
  digitalWrite(zumbador, HIGH); //Enciende el zumbador
  delay(1000); //Espera un segundo
  digitalWrite(zumbador, LOW); //Apaga el zumbador
  delay(1000); //Espera un segundo
}
