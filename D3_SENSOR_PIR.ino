/*
MEDIR TEMPERATURA Y HUMEDAD CON ARDUINO Y SENSOR DHT11-DHT22
Código por: Ulises Chávez 
Fecha: 01/03/2023
*/
const int LEDPin = 13;        // pin para el LED
const int PIRPin = 2;         // pin de entrada (for PIR sensor)

int pirState = LOW;           // de inicio no hay movimiento
int val = 0;                  // estado del pin

void setup() 
{
   pinMode(LEDPin, OUTPUT); 
   pinMode(PIRPin, INPUT);
   Serial.begin(9600);
}

void loop()
{
   val = digitalRead(PIRPin);
   if (val == HIGH)   //si está activado
   { 
      digitalWrite(LEDPin, HIGH);  //LED ON
      if (pirState == LOW)  //si previamente estaba apagado
      {
        Serial.println("Sensor activado");
        pirState = HIGH;
      }
   } 
   else   //si esta desactivado
   {
      digitalWrite(LEDPin, LOW); // LED OFF
      if (pirState == HIGH)  //si previamente estaba encendido
      {
        Serial.println("Sensor parado");
        pirState = LOW;
      }
   }
}

// CODIGO  BASICO CON UN LED QUE SOLO LEE EL ESTADO Y LO ENCIENDE AL ESTAR ACTIVADO

/*
const int LEDPin= 13;
const int PIRPin= 2;

void setup()
{
  pinMode(LEDPin, OUTPUT);
  pinMode(PIRPin, INPUT);
}

void loop()
{
  int value= digitalRead(PIRPin);
 
  if (value == HIGH)
  {
    digitalWrite(LEDPin, HIGH);
    delay(50);
    digitalWrite(LEDPin, LOW);
    delay(50);
  }
  else
  {
    digitalWrite(LEDPin, LOW);
  }
}

*/
