#define LED1 6 // Portti
#define LEDON HIGH //Päälle
#define LEDOFF LOW //Pois

void setup(){
pinMode(LED1, OUTPUT);
}
int viive = 800;

void loop(){
  digitalWrite(LED1, LEDON);   // turn the LED on (HIGH is the voltage level)
  delay(viive);
  digitalWrite(LED1, LEDOFF);    // turn the LED off by making the voltage LOW
  delay(viive);  
}
