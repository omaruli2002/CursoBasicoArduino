int redPin = 6;
int greenPin = 5;
int bluePin = 3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Colores RGB básicos
  setColor(255, 0, 0);  // Rojo
  delay(1000);
  setColor(0, 255, 0);  // Verde
  delay(1000);
  setColor(0, 0, 255);  // Azul
  delay(1000);
  // Mezclas de colores RGB
  setColor(255, 255, 0);  // Amarillo
  delay(1000);
  setColor(0, 255, 255);  // Cian
  delay(1000);
  setColor(255, 0, 255);  // Magenta
  delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
