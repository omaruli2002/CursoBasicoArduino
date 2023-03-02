/*
CÓDIGO PARA SENSORES DIGITALES DE ACTIVACIÓN (CUALQUIER MODELO Y TIPO)
Código por: Ulises Chávez 
Fecha: 01/03/2023
*/
const int sensorPin = 3;

void setup() {
  Serial.begin(9600);   //iniciar puerto serie
  pinMode(sensorPin , INPUT);  //definir pin como entrada
}
 
void loop(){
  int value = 0;
  value = digitalRead(sensorPin );  //lectura digital de pin
 
  if (value == HIGH) {
      Serial.println("********** ACTIVADO **********");
  }else{
    Serial.println("********** DESACTIVADO **********");
  }
  delay(1000);
}
