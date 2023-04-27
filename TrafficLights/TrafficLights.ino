const int redLed = 13;
const int yellowLed = 2;
const int greenLed = 8;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(greenLed,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(greenLed,HIGH);
delay(5000);
digitalWrite(greenLed,LOW);
digitalWrite(yellowLed,HIGH);
delay(1000);
digitalWrite(yellowLed,LOW);
digitalWrite(redLed,HIGH);
delay(6000);
digitalWrite(redLed,LOW);
}