int b = 0;
int g = 0;
int r = 0;



void setup() {
  // put your setup code here, to run once:
  
  pinMode(15,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i<100;i++){
    g = i;
   mach();
   delay(20);
  }
  for (int i = 100; i<255;i++){
    g = i;
   mach();
  }
  
  for (int i = 255; i>100; i--){
   g = i;
   mach();
  }
  for (int i = 100; i>0; i--){
   g = i;
   mach();
   delay(20);
  }
}
  
void mach(){
    analogWrite(15, 100);
    ledcWrite(24, g);
    ledcWrite(27, g);
  }


//17,8 W 
