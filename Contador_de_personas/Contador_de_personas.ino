int c=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(A0)<1000){
    c++;
    Serial.println(c);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(500);
  }
  if(analogRead(A1)<1000){
    c--;
    Serial.println(c);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    delay(500);
  }
  if(c<1){
    c=0;
    digitalWrite(9,LOW);
  } else {
    digitalWrite(9,HIGH);
  }
  
  /*
  Serial.print("Sensor entrada: ");
  Serial.println(analogRead(A0));
  Serial.print("Sensor salida: ");
  Serial.println(analogRead(A1));
  delay(500);
  */
}
