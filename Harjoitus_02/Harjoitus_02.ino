#define LED1 6 // Portti
#define LEDON HIGH //Päälle
#define LEDOFF LOW //Pois

void setup(){
pinMode(LED1, OUTPUT);
Serial.begin(9600);
}
int viive = 800;

void loop(){
  digitalWrite(LED1, LEDOFF);   // turn the LED on (HIGH is the voltage level)
  Serial.println("LEDI ON");
  delay(viive);
  digitalWrite(LED1, LEDON);    // turn the LED off by making the voltage LOW
  Serial.println("LEDI OFF");
  delay(viive);  
}
