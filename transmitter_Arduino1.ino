#define gasPin A1
int gasVal=0;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
              pinMode(gasPin, INPUT);
              }
void loop() {
    // put your main code here, to run repeatedly:
      gasVal=analogRead(gasPin);
      
    if(gasVal>200                       ){
              Serial.print("1");
                      }
               else{
               Serial.print
               ("0");
               }
                      }