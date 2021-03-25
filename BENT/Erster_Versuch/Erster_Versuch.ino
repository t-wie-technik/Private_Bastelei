int RotMaster = 3;
int RotSlave  = 2;
int GrunMaster = 7;
int GrunSlave  = 6;
int BlauMaster = 1;
int BlauSlave  = 0;

int ErsatzInt = 0;
int ErsatzInt2 = 100;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(RotMaster,OUTPUT);
  pinMode(RotSlave,OUTPUT);
  pinMode(GrunMaster,OUTPUT);
  pinMode(GrunSlave,OUTPUT);
  pinMode(BlauMaster,OUTPUT);
  pinMode(BlauSlave,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 grunSingle(255);
 delay(200);
 rotSingle(255);
 delay(200);
 blauSingle(255);
 delay(200);
}
void RGB (int R, int G, int B);
void rotSingle(int Farbe){
  analogWrite(RotMaster,   Farbe);
  analogWrite(RotSlave,    ErsatzInt);
  analogWrite(BlauMaster,  ErsatzInt);
  analogWrite(BlauSlave,   ErsatzInt2);
  analogWrite(GrunMaster,  ErsatzInt);
  analogWrite(GrunSlave,   ErsatzInt2);
}
void grunSingle(int Farbe){
  analogWrite(RotMaster,   ErsatzInt);
  analogWrite(RotSlave,    ErsatzInt2);
  analogWrite(BlauMaster,  Farbe);
  analogWrite(BlauSlave,   ErsatzInt);
  analogWrite(GrunMaster,  ErsatzInt);
  analogWrite(GrunSlave,   ErsatzInt2);
}
void blauSingle(int Farbe){
  analogWrite(RotMaster,   ErsatzInt);
  analogWrite(RotSlave,    ErsatzInt2);
  analogWrite(BlauMaster,  ErsatzInt);
  analogWrite(BlauSlave,   ErsatzInt2);
  analogWrite(GrunMaster,  Farbe);
  analogWrite(GrunSlave,   ErsatzInt);
}
//17,8 W 
