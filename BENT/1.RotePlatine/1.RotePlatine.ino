#define pwmPin 13

void setup()
{
    Serial.begin(115200);
    ledcSetup(0,2000,8);
    ledcAttachPin(pwmPin,0);
    
}

void loop()
{
    for(int i=0; i<255; i++){
        ledcWrite(0,i);
        Serial.println(i);
        delay(200);
    }
    for(int i=255; i>0; i--){
        ledcWrite(0,i);
        Serial.println(i);
        delay(200);
    }
}


