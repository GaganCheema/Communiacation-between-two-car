// C++ code


#define ENA A0
#define ENB A1
int sA = 70;
int sB = 50;

void setup() {

  Serial.begin(9600);
  

  pinMode(4, OUTPUT); //  left backward
  pinMode(5, OUTPUT); //  left forward
  pinMode(6, OUTPUT); //  right forward
  pinMode(8, OUTPUT); //  right backward

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  analogWrite(ENA, HIGH);
  analogWrite(ENB, HIGH);

}

void Stop()
{
  Serial.println("S");
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
}

void Forward()
{
  Serial.println("F");
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,LOW);
}
void Backward()
{
  Serial.println("B");
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,HIGH);

}
void left() {
  Serial.println("L");
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(8,LOW);

}
void right() {
  Serial.println("R");
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(8,HIGH);
}

void loop()
{
  
  analogWrite(ENA, sA);
  analogWrite(ENB, sB);
  Forward();
  delay(1000);
 
  Backward();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
}