//learn how to dim the led light using PWM technique.
//ypu tube channel to learn about it https://youtu.be/2XjqS1clY_E

const int ledPin = 1; 
void setup() {
ledcSetup(0,5000,8); //led has been setup
ledcAttachPin(ledPin,0); //led GPIO pin asign to channel no 0

}

void loop() {
  //starts 
  int dutycycle;
for(dutycycle =0;dutycycle<=255;dutycycle++)
{
  ledcWrite(0,dutycycle);
  delay(11);
}
delay(1000);
}
