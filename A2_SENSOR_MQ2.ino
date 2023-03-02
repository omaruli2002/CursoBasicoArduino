/*
MEDIR LA CONCENTRACIÓN DE GASES CON EL SENSOR MQ2
Código por: Ulises Chávez 
Fecha: 01/03/2023
*/

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int adc_MQ = analogRead(A0); //Lemos la salida analógica del MQ
  float voltaje = adc_MQ * (5.0 / 1023.0); //Convertimos la lectura en un valor de voltaje

  Serial.print("adc:");
  Serial.print(adc_MQ);
  Serial.print("    voltaje:");
  Serial.println(voltaje);
  delay(100);
}
