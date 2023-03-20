#include <IRremote.h>
IRsend irsend;

void setup()
{
  Serial.begin(9600);
}

void loop() 
{
  irsend.sendNEC(0x20DF10EF, 32); //Insertar aqui el codigo que queremos enviar
  delay(5000);
}
