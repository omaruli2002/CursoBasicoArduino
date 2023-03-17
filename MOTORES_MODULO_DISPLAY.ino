#include "TM1637.h" //incluimos la librería
#define CLK A1    // definimos los pines donde se debe conectar
#define DIO A0

TM1637 Display1(CLK,DIO); // creamos una variable del tipo de dato TM1637
int8_t Digits[] = {0,0,0,0}; // el valor inicial  a desplegar

void setup()
   {  
       Display1.set();  //  inicalizamos el display
       Display1.init() ;
   }

void loop()
{
// un contador de 0 a 999 
 for (int i=0 ; i < 1000 ; i++){
  Digits[0] = 0;
  Digits[1] = floor(i/100);
  Digits[2] = floor((i%100)/10); 
  Digits[3] = floor(i%10);
  delay(1000); 
  Display1.display(Digits); // la función para escribir en el display,  cada dígito diferenciado
 }
}
