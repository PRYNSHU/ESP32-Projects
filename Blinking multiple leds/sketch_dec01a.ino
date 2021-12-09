const int led=2;
int button =0;

void setup() 
{
  Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(35,INPUT);
}

void loop() {
  Serial.println("test");
  
  button= digitalRead(35);
  Serial.println(button);
if(button ==HIGH)
{
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}
  
}
