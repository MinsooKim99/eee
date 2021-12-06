const int joyPinX=A0;
const int joyPinY=A1;
const int joyPinZ=2;

void setup() {
  pinMode(joyPinZ,INPUT);
  Serial.begin(9600);
}

void loop() {
  int xvalue=analogRead(joyPinX);
  int yvalue=analogRead(joyPinY);
  int zvalue=digitalRead(joyPinZ);
  Serial.print("x: ");
  Serial.println(xvalue);
  Serial.print("y: ");
  Serial.println(yvalue);
  Serial.print("z: ");
  Serial.println(zvalue);
  Serial.println();
  delay(1000);
}
