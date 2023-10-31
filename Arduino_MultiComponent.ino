// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int x =digitalRead(4);
  int y =digitalRead(5);
  int z =digitalRead(8);
  if(x==HIGH&&y==HIGH)
  {
  digitalWrite(3,HIGH);//LED
  delay(200);
  digitalWrite(2,HIGH);//LED
  delay(200);
  digitalWrite(8,255);//MOTOR
  digitalWrite(9,HIGH);//PIEZO
  }
  else if(x==HIGH ||y==HIGH)
  {
  digitalWrite(3,HIGH);//LED
  }
  else
  {
  digitalWrite(1,HIGH);//LED
  }
}