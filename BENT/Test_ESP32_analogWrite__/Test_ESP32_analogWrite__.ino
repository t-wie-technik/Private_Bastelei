//LEDs
  // the number of the LED pin
  const int ledGrunPin = 15; //GPIO16 Eingang
  const int ledRotPin  = 23;
  const int ledBlauPin = 22;
  
  // PWM Konfiguration
  const int ledGrunChannel = 1; //Primär-Schlüssel für die Frab-Kanäle
  const int ledRotChannel  = 2;
  const int ledBlauChannel = 3;
  
  const int freq = 5000; //PWM Frequenz
  const int bitAnzahl = 8; // Ansteuern mit 8 Bit (0-255)Werten
  
  // mit "ledcWrite(Kanal, 0-255 Wert)" im Loop aufrufen
   
void setup(){
 //LEDs
  ledcSetup(ledGrunChannel, freq, bitAnzahl); //Konfiguration und erstellen der Farb-Kanäle
  ledcSetup(ledRotChannel, freq, bitAnzahl);
  ledcSetup(ledBlauChannel, freq, bitAnzahl);
  
  ledcAttachPin(ledGrunPin, ledGrunChannel); //Verküpfung vom Pin und Kanal
  ledcAttachPin(ledRotPin, ledRotChannel);
  ledcAttachPin(ledBlauPin, ledBlauChannel);
  
}
 
void loop(){
 ledcWrite(ledRotChannel, 255);
 ledcWrite(ledGrunChannel, 255);
 ledcWrite(ledBlauChannel, 255);
}
