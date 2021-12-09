//In this project i am reading analog value  from LDR SENSOR 
int p=36,l=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(2000);
  Serial.println("test1");
  pinMode(p,INPUT);
   pinMode(2,OUTPUT);
}

void loop() {
  l= map(analogRead(p),0,4095,0,100); // mapping its value
  Serial.println(l);
  if(l<=50)
  {
    digitalWrite(2,HIGH);
  }
  else
  digitalWrite(2,LOW);
  delay(300);
}
