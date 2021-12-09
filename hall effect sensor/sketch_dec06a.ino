//here I am reading hall effect sensor reading
int hall=0;
void setup() {
  Serial.begin(9600);
  delay(2000);
  Serial.println("test1");

}

void loop() {
  // put your main code here, to run repeatedly:
  hall= hallRead();
  Serial.println(hall);
  delay(300);
}
