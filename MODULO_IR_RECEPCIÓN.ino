#include <IRremote.h>   

int IR = 9;     
 
void setup() { 
  Serial.begin(9600);           
  IrReceiver.begin(IR, DISABLE_LED_FEEDBACK);     
} 

void loop() { 
  if (IrReceiver.decode()) {    
    Serial.print("Codigo Recibido: ");     
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);  
    IrReceiver.resume();  
    Serial.println("----------------------------");          
  }
  delay (250);                 
}
