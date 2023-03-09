// -------------------------------- MARIO BROS --------------------------------------------
/*
#define NOTE_B0  31
 #define NOTE_C1  33
 #define NOTE_CS1 35
 #define NOTE_D1  37
 #define NOTE_DS1 39
 #define NOTE_E1  41
 #define NOTE_F1  44
 #define NOTE_FS1 46
 #define NOTE_G1  49
 #define NOTE_GS1 52
 #define NOTE_A1  55
 #define NOTE_AS1 58
 #define NOTE_B1  62
 #define NOTE_C2  65
 #define NOTE_CS2 69
 #define NOTE_D2  73
 #define NOTE_DS2 78
 #define NOTE_E2  82
 #define NOTE_F2  87
 #define NOTE_FS2 93
 #define NOTE_G2  98
 #define NOTE_GS2 104
 #define NOTE_A2  110
 #define NOTE_AS2 117
 #define NOTE_B2  123
 #define NOTE_C3  131
 #define NOTE_CS3 139
 #define NOTE_D3  147
 #define NOTE_DS3 156
 #define NOTE_E3  165
 #define NOTE_F3  175
 #define NOTE_FS3 185
 #define NOTE_G3  196
 #define NOTE_GS3 208
 #define NOTE_A3  220
 #define NOTE_AS3 233
 #define NOTE_B3  247
 #define NOTE_C4  262
 #define NOTE_CS4 277
 #define NOTE_D4  294
 #define NOTE_DS4 311
 #define NOTE_E4  330
 #define NOTE_F4  349
 #define NOTE_FS4 370
 #define NOTE_G4  392
 #define NOTE_GS4 415
 #define NOTE_A4  440
 #define NOTE_AS4 466
 #define NOTE_B4  494
 #define NOTE_C5  523
 #define NOTE_CS5 554
 #define NOTE_D5  587
 #define NOTE_DS5 622
 #define NOTE_E5  659
 #define NOTE_F5  698
 #define NOTE_FS5 740
 #define NOTE_G5  784
 #define NOTE_GS5 831
 #define NOTE_A5  880
 #define NOTE_AS5 932
 #define NOTE_B5  988
 #define NOTE_C6  1047
 #define NOTE_CS6 1109
 #define NOTE_D6  1175
 #define NOTE_DS6 1245
 #define NOTE_E6  1319
 #define NOTE_F6  1397
 #define NOTE_FS6 1480
 #define NOTE_G6  1568
 #define NOTE_GS6 1661
 #define NOTE_A6  1760
 #define NOTE_AS6 1865
 #define NOTE_B6  1976
 #define NOTE_C7  2093
 #define NOTE_CS7 2217
 #define NOTE_D7  2349
 #define NOTE_DS7 2489
 #define NOTE_E7  2637
 #define NOTE_F7  2794
 #define NOTE_FS7 2960
 #define NOTE_G7  3136
 #define NOTE_GS7 3322
 #define NOTE_A7  3520
 #define NOTE_AS7 3729
 #define NOTE_B7  3951
 #define NOTE_C8  4186
 #define NOTE_CS8 4435
 #define NOTE_D8  4699
 #define NOTE_DS8 4978


#define melodyPin 3

int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7, 
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0, 

  NOTE_C7, 0, 0, NOTE_G6, 
  0, 0, NOTE_E6, 0, 
  0, NOTE_A6, 0, NOTE_B6, 
  0, NOTE_AS6, NOTE_A6, 0, 

  NOTE_G6, NOTE_E7, NOTE_G7, 
  NOTE_A7, 0, NOTE_F7, NOTE_G7, 
  0, NOTE_E7, 0,NOTE_C7, 
  NOTE_D7, NOTE_B6, 0, 0,

  NOTE_C7, 0, 0, NOTE_G6, 
  0, 0, NOTE_E6, 0, 
  0, NOTE_A6, 0, NOTE_B6, 
  0, NOTE_AS6, NOTE_A6, 0, 

  NOTE_G6, NOTE_E7, NOTE_G7, 
  NOTE_A7, 0, NOTE_F7, NOTE_G7, 
  0, NOTE_E7, 0,NOTE_C7, 
  NOTE_D7, NOTE_B6, 0, 0
};
int tempo[] = {
  12, 12, 12, 12, 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12, 

  12, 12, 12, 12,
  12, 12, 12, 12, 
  12, 12, 12, 12, 
  12, 12, 12, 12, 

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, 
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, 
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4, 
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4,NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
int underworld_tempo[] = {
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  3,
  12, 12, 12, 12, 
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18,18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};

void setup(void)
{
   pinMode(3, OUTPUT);//buzzer
   pinMode(13, OUTPUT);//led indicator when singing a note

}
void loop()
{
//sing the tunes
  sing(1);
  sing(1);
  sing(2);
}
int song = 0;

void sing(int s){      
   // iterate over the notes of the melody:
   song = s;
   if(song==2){
     Serial.println(" 'Underworld Theme'");
     int size = sizeof(underworld_melody) / sizeof(int);
     for (int thisNote = 0; thisNote < size; thisNote++) {

       // to calculate the note duration, take one second
       // divided by the note type.
       //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
       int noteDuration = 1000/underworld_tempo[thisNote];

       buzz(melodyPin, underworld_melody[thisNote],noteDuration);

       // to distinguish the notes, set a minimum time between them.
       // the note's duration + 30% seems to work well:
       int pauseBetweenNotes = noteDuration * 1.30;
       delay(pauseBetweenNotes);

       // stop the tone playing:
       buzz(melodyPin, 0,noteDuration);

    }

   }else{

     Serial.println(" 'Mario Theme'");
     int size = sizeof(melody) / sizeof(int);
     for (int thisNote = 0; thisNote < size; thisNote++) {

       // to calculate the note duration, take one second
       // divided by the note type.
       //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
       int noteDuration = 1000/tempo[thisNote];

       buzz(melodyPin, melody[thisNote],noteDuration);

       // to distinguish the notes, set a minimum time between them.
       // the note's duration + 30% seems to work well:
       int pauseBetweenNotes = noteDuration * 1.30;
       delay(pauseBetweenNotes);

       // stop the tone playing:
       buzz(melodyPin, 0,noteDuration);

    }
  }
}

void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13,HIGH);
  long delayValue = 1000000/frequency/2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length/ 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to 
  //// get the total number of cycles to produce
  for (long i=0; i < numCycles; i++){ // for the calculated length of time…
    digitalWrite(targetPin,HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin,LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait againf or the calculated delay value
  }
  digitalWrite(13,LOW);

}
*/

// -------------------------------- PIRATAS DEL CARIBE --------------------------------------------
/*
void setup(){
 pinMode (3, OUTPUT); //pin configurado como salida
}
// funcion = tone(pin, frequency, duration)

void loop() {
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,200);
  delay(200);
  tone(9,293.66,100);
  delay(100);
  tone(9,293.66,100);
  delay(100);
  tone(9,440,100);
  delay(100);
  tone(9,523.25,100);
  delay(100);
  tone(9,587.33,100);
  delay(200);
  tone(9,587.33,100);
  delay(200);
  tone(9,587.33,100);
  delay(100);
  tone(9,659.25,100);
  delay(100);
  tone(9,698.45,100);
  delay(200);
  tone(9,698.45,100);
  delay(200);
  tone(9,698.45,100);
  delay(100);
  tone(9,783.99,100);
  delay(100);
  tone(9,659.25,100);
  delay(200);
  tone(9,659.25,100);
  delay(200);
  tone(9,587.33,100);
  delay(100);
  tone(9,523.25,100);
  delay(100);
  tone(9,523.25,100);
  delay(100);
  tone(9,587.33,100);
  delay(300);
  tone(9,440,100);
  delay(100);
  tone(9,523.25,100);
  delay(100);
  tone(9,587.33,100);
  delay(200);
  tone(9,587.33,100);
  delay(200);
  tone(9,587.33,100);
  delay(100);
  tone(9,659.25,100);
  delay(100);
  tone(9,698.45,100);
  delay(200);
  tone(9,698.45,100);
  delay(200);
  tone(9,698.45,100);
  delay(100);
  tone(9,783.99,100);
  delay(100);
  tone(9,659.25,100);
  delay(200);
  tone(9,659.25,100);
  delay(200);
  tone(9,587.33,100);
  delay(100);
  tone(9,523.25,100);
  delay(100);
  tone(9,587.33,100);
  delay(400);
  tone(9,440,100);
  delay(100);
  tone(9,523.25,100);
  delay(100);
  tone(9,587.33,100);
  delay(200);
  tone(9,587.33,100);
  delay(200);
  tone(9,587.33,100);
  delay(100);
  tone(9,698.45,100);
  delay(100);
  tone(9,783.99,100);
  delay(200);
  tone(9,783.99,100);
  delay(200);
  tone(9,783.99,100);
  delay(100);
  tone(9,880,100);
  delay(100);
  tone(9,932.33,100);
  delay(200);
  tone(9,932.33,100);
  delay(200);
  tone(9,880,100);
  delay(100);
  tone(9,783.99,100);
  delay(100);
  tone(9,880,100);
  delay(100);
  tone(9,587.33,100);
  delay(300);
  tone(9,587.33,100);
  delay(100);
  tone(9,659.25,100);
  delay(100);
  tone(9,698.45,100);
  delay(200);
  tone(9,698.45,100);
  delay(200);
  tone(9,783.99,100);
  delay(200);
  tone(9,880,100);
  delay(100);
  tone(9,587.33,100);
  delay(300);
  tone(9,587.33,100);
  delay(100);
  tone(9,698.45,100);
  delay(100);
  tone(9,659.25,100);
  delay(200);
  tone(9,659.25,100);
  delay(200);
  tone(9,698.45,100);
  delay(100);
  tone(9,587.33,100);
  delay(100);
  tone(9,659.25,100);
  delay(400);
  tone(9,880,100);
  delay(100);
  tone(9,1046.50,100);
  delay(100);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1318.51,100);
  delay(100);
  tone(9,1396.91,100);
  delay(200);
  tone(9,1396.91,100);
  delay(200);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1567.98,100);
  delay(100);
  tone(9,1318.51,100);
  delay(200);
  tone(9,1318.51,100);
  delay(200);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1046.50,100);
  delay(100);
  tone(9,1046.50,100);
  delay(100);
  tone(9,1174.66,100);
  delay(300);
  tone(9,880,100);
  delay(100);
  tone(9,1046.50,100);
  delay(100);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1318.51,100);
  delay(100);
  tone(9,1396.91,100);
  delay(200);
  tone(9,1396.91,100);
  delay(200);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1567.98,100);
  delay(100);
  tone(9,1318.51,100);
  delay(200);
  tone(9,1318.51,100);
  delay(200);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1046.50,100);
  delay(100);
  tone(9,1174.66,100);
  delay(400);
  tone(9,880,100);
  delay(100);
  tone(9,1046.50,100);
  delay(100);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1567.98,100);
  delay(200);
  tone(9,1567.98,100);
  delay(200);
  tone(9,1567.98,100);
  delay(100);
  tone(9,1760,100);
  delay(100);
  tone(9,1864.66,100);
  delay(200);
  tone(9,1864.66,100);
  delay(200);
  tone(9,1760,100);
  delay(100);
  tone(9,1567.98,100);
  delay(100);
  tone(9,1760,100);
  delay(100);
  tone(9,1174.66,100);
  delay(300);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1318.51,100);
  delay(100);
  tone(9,1396.91,100);
  delay(200);
  tone(9,1396.91,100);
  delay(200);
  tone(9,1567.98,100);
  delay(200);
  tone(9,1760,100);
  delay(100);
  tone(9,1174.66,100);
  delay(300);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1318.51,100);
  delay(200);
  tone(9,1318.51,100);
  delay(200);
  tone(9,1174.66,100);
  delay(100);
  tone(9,1108.73,100);
  delay(100);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1174.66,100);
  delay(200);
  tone(9,1318.51,100);
  delay(200);
  tone(9,1396.91,100);
  delay(200);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1567.98,100);
  delay(200);
  tone(9,1760,300);
  delay(400);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1174.66,100);
  delay(100);
  tone(9,880,300);
  delay(600);
  tone(9,1864.66,300);
  delay(400);
  tone(9,1396.91,100);
  delay(100);
  tone(9,1174.66,100);
  delay(100);
  tone(9,932.33,300);
  delay(600);
  tone(9,587.33,100);
  delay(100);
  tone(9,440,100);
  delay(200);
  tone(9,587.33,100);
  delay(300);
  tone(9,554.36,100);
  delay(400);
  tone(9,1567.98,100);
  delay(100);
  tone(9,1567.98,100);
  delay(100);


  }
*/

// -------------------------------- STAR WARS --------------------------------------
/*

int ZumbadorPin = 3; 
int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;
 
 
void setup()    
{    
 
  pinMode(ZumbadorPin, OUTPUT); // definimos la variable ZumbadorPin como una salida.
 
}    
     
void loop()   
{   
    tone(ZumbadorPin, a, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 500);
    delay(500+50);     
    tone(ZumbadorPin, a, 500); 
    delay(500+50);
    tone(ZumbadorPin, f, 350);  
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50); 
    
    tone(ZumbadorPin, a, 500);
    delay(500+50);
    tone(ZumbadorPin, f, 350);
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    tone(ZumbadorPin, a, 1000);   
    delay(1000+50);
   
    tone(ZumbadorPin, eH, 500);
    delay(500+50);
    tone(ZumbadorPin, eH, 500);
    delay(500+50);
    tone(ZumbadorPin, eH, 500); 
    delay(500+50);   
    tone(ZumbadorPin, fH, 350);
    delay(350+50); 
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    
    tone(ZumbadorPin, gS, 500);
    delay(500+50);
    tone(ZumbadorPin, f, 350);
    delay(350+50);
    tone(ZumbadorPin, cH, 150);
    delay(150+50);
    tone(ZumbadorPin, a, 1000);
    delay(1000+50);
    
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 350);
    delay(350+50); 
    tone(ZumbadorPin, a, 150);
    delay(150+50);
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, gSH, 250); 
    delay(250+50);
    tone(ZumbadorPin, gH, 250);
    delay(250+50);
    
    tone(ZumbadorPin, fSH, 125);
    delay(125+50);
    tone(ZumbadorPin, fH, 125);
    delay(125+50);    
    tone(ZumbadorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(ZumbadorPin, aS, 250);
    delay(250+50);    
    tone(ZumbadorPin, dSH, 500); 
    delay(500+50); 
    tone(ZumbadorPin, dH, 250); 
    delay(250+50); 
    tone(ZumbadorPin, cSH, 250);
    delay(250+50);  
    
    // virtuosismo :)))
    
    tone(ZumbadorPin, cH, 125);
    delay(125+50);  
    tone(ZumbadorPin, b, 125); 
    delay(125+50); 
    tone(ZumbadorPin, cH, 250); 
    delay(250+50);     
    delay(250);
    tone(ZumbadorPin, f, 125); 
    delay(125+50); 
    tone(ZumbadorPin, gS, 500); 
    delay(500+50); 
    tone(ZumbadorPin, f, 375); 
    delay(375+50); 
    tone(ZumbadorPin, a, 125);
    delay(125+50); 
    
    tone(ZumbadorPin, cH, 500); 
    delay(500+50);
    tone(ZumbadorPin, a, 375);  
    delay(375+50);
    tone(ZumbadorPin, cH, 125); 
    delay(125+50);
    tone(ZumbadorPin, eH, 1000); 
    delay(1000+50);
 
    
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, a, 350); 
    delay(350+50);
    tone(ZumbadorPin, a, 150);
    delay(150+50);
    tone(ZumbadorPin, aH, 500);
    delay(500+50);
    tone(ZumbadorPin, gSH, 250);
    delay(250+50); 
    tone(ZumbadorPin, gH, 250);
    delay(250+50);
    
    tone(ZumbadorPin, fSH, 125);
    delay(125+50);
    tone(ZumbadorPin, fH, 125);  
    delay(125+50);  
    tone(ZumbadorPin, fSH, 250);
    delay(250+50);
    delay(250);
    tone(ZumbadorPin, aS, 250);  
    delay(250+50);  
    tone(ZumbadorPin, dSH, 500);  
    delay(500+50);
    tone(ZumbadorPin, dH, 250);  
    delay(250+50);
    tone(ZumbadorPin, cSH, 250);
    delay(250+50);  
 
    
    tone(ZumbadorPin, cH, 125);  
    delay(125+50);
    tone(ZumbadorPin, b, 125);  
    delay(125+50);
    tone(ZumbadorPin, cH, 250);
    delay(250+50);      
    delay(250);
    tone(ZumbadorPin, f, 250); 
    delay(250+50); 
    tone(ZumbadorPin, gS, 500); 
    delay(500+50); 
    tone(ZumbadorPin, f, 375);  
    delay(375+50);
    tone(ZumbadorPin, cH, 125); 
    delay(125+50);
           
    tone(ZumbadorPin, a, 500); 
    delay(500+50);           
    tone(ZumbadorPin, f, 375);  
    delay(375+50);          
    tone(ZumbadorPin, c, 125); 
    delay(125+50);  
    tone(ZumbadorPin, a, 1000);
    delay(1000+50);       
 
    delay(2000);  // dos segundos para volver a empezar.
}
*/

// ------------------------------- MERRY CHRISTMAS ----------------------------------------
/*
#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST      0


// change this to make the song slower or faster
int tempo = 140;

// change this to whichever pin you want to use
int buzzer = 3;

// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
int melody[] = {

  // We Wish You a Merry Christmas
  // Score available at https://musescore.com/user/6208766/scores/1497501
  
  NOTE_C5,4, //1
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,

  NOTE_F5,2, NOTE_C5,4, //8 
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4,

  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,//17
  NOTE_E5,2, NOTE_E5,4,
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,
  NOTE_C5,2, NOTE_A5,4,
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4, 
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8, //27
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4,
  NOTE_F5,4, NOTE_F5,4, NOTE_F5,4,
  NOTE_E5,2, NOTE_E5,4,
  NOTE_F5,4, NOTE_E5,4, NOTE_D5,4,
  
  NOTE_C5,2, NOTE_A5,4,//36
  NOTE_AS5,4, NOTE_A5,4, NOTE_G5,4,
  NOTE_C6,4, NOTE_C5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4, 
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8, 
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8,//45
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, NOTE_C5,4,
  NOTE_F5,4, NOTE_F5,8, NOTE_G5,8, NOTE_F5,8, NOTE_E5,8,
  NOTE_D5,4, NOTE_D5,4, NOTE_D5,4,
  NOTE_G5,4, NOTE_G5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  NOTE_E5,4, NOTE_C5,4, NOTE_C5,4,
  
  NOTE_A5,4, NOTE_A5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, //53
  NOTE_F5,4, NOTE_D5,4, NOTE_C5,8, NOTE_C5,8,
  NOTE_D5,4, NOTE_G5,4, NOTE_E5,4,
  NOTE_F5,2, REST,4
};

// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// there are two values per note (pitch and duration), so for each note there are four bytes
int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// this calculates the duration of a whole note in ms
int wholenote = (60000 * 4) / tempo;

int divider = 0, noteDuration = 0;

void setup() {
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
    divider = melody[thisNote + 1];
    if (divider > 0) {
      // regular note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted notes are represented with negative durations!!
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }

    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buzzer, melody[thisNote], noteDuration * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(buzzer);
  }
}

void loop() {
  // no need to repeat the melody.
}
*/
