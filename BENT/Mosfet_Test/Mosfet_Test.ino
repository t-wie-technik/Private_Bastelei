void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(map(analogRead(A0),0,1024,0,5000));
Serial.print("  ");
Serial.println(map(analogRead(A1),0,1024,0,5000));
}
