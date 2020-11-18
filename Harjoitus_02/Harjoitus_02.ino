/*
 * Ohjelmassa luetaan sarjaporttiin tulleita arvoja. Luettu arvo 
 * tallentuu data nimiseen muuttujaan. Ohjelmassa tehdään testi 
 * jolla varmistetaan että tulostus tapahtuu ainoastaan silloin
 * kun luettu arvo ei ole yhtäkuin -1.
 */
 #define led1 6
 #define ledon LOW
 #define ledoff HIGH
 #define VIIVE 500
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
}

void loop() {
  int data = Serial.read();

// if-testi ehdollistaa käskyjen suorituksen
 if(data == 'R' || data == 'r' || data == 'S' || data == 's'){
   Serial.println("Vilkuttaa");
    digitalWrite(led1,ledon);
    delay(VIIVE);
    digitalWrite(led1, ledoff);
     delay(VIIVE); 
    digitalWrite(led1,ledon);
    delay(VIIVE);
    digitalWrite(led1,ledon);
     delay(VIIVE);
    digitalWrite(led1, ledoff); 
    delay(VIIVE);
    digitalWrite(led1,ledon);
     delay(VIIVE);
    digitalWrite(led1, ledoff); 
    delay(VIIVE);
    digitalWrite(led1,ledon);
     delay(VIIVE);
    digitalWrite(led1, ledoff); 
    data = -1;
 }

if(data == 10){ // Lukee enterin painaluksen
   data = -1 ;
    Serial.println("Enter");
    digitalWrite(led1,ledon);
    delay(1500);
    digitalWrite(led1, ledoff);
  }
 

    if(data != -1){ //Poistaa -1 merkin ja tulostaa muut merkit
    
    Serial.println(data);
    }
}
