int Threshold=190;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int T=analogRead(A1);
  if(T>Threshold){
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }
  else{
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
  }
  Serial.println(T);
}
