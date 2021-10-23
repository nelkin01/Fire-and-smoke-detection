#define buzzer 9
int state=0;

void setup() 
{
  // put your setup code here, to run once:
    Serial.begin(9600);
      pinMode(buzzer, OUTPUT);
}
void loop() 
{
  // put your main code here, to run repeatedly:
    if(Serial.available()>0)
      {
          state = Serial.read();
          Serial.write(state);
      }   
    if(state == '1')
      {
        tone(buzzer, 1000, 200);   
        delay(100);
      }
    else if(state == '0')
           {
              noTone(buzzer);
              delay(100);
           }
}