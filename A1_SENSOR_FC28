

const int sensorPin = A0;
void setup() {
   Serial.begin(9600);
}

void loop() 
{
   int humedad = analogRead(sensorPin);
   int porcentaje=map(humedad,0,1023,100,0);//pasamos a porcentajes
   Serial.print(procentaje);
  
   if(procentaje < 50)
   {
      Serial.println("Humedad Baja");  
      //hacer las acciones necesarias
   }else{
      Serial.println("Humedad Alta");  
      //hacer las acciones necesarias
   }
   delay(1000);
}
