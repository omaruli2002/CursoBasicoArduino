/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int luz = 7;
int buzzer = 8;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(luz, INPUT);
  pinMode(buzzer, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int luzState = digitalRead(luz);
  // print out the state of the button:
  Serial.println(luzState);

  if(luzState == HIGH){
    	for(int i=0; i<10; i++){	
        digitalWrite(buzzer, HIGH);
		    delay(200);
		    digitalWrite(buzzer, LOW);
		    delay(200);
		    digitalWrite(buzzer, HIGH);
		    delay(200);
		    digitalWrite(buzzer, LOW);
		    delay(200);
		    digitalWrite(buzzer, HIGH);
		    delay(200);
		    digitalWrite(buzzer, LOW);
		    delay(200);
		    digitalWrite(buzzer, HIGH);
		    delay(200);
		    digitalWrite(buzzer, LOW);
        delay(250);
      }
  }else{
    digitalWrite(buzzer, LOW);
  }
  delay(10);  // delay in between reads for stability
}
