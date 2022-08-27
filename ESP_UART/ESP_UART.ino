//Macros
#define Delay 1000
#define BAUD_RATE 115200
//Global  Variables
char buff [100];
uint32_t indx;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(BAUD_RATE);
    Serial.print("Serial Begins");
}

void loop() {
  // put your main code here, to run repeatedly:
    if (Serial.available() > 0) {
      byte c = Serial.read();
      if (indx < sizeof buff) {
        buff [indx++] = c; 
        
        if (c == '\n') { 
          Serial.print(buff);
          delay(Delay);
          indx= 0; 
        }
      }
  }
}
