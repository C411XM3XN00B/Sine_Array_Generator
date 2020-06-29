int arrayLength = 255;
int maxValue = 1023;
int valOffset = (maxValue + 1) / 2;
int valAmplitude = valOffset;

int val = 0;

void setup() {
  delay(300);
  Serial.begin(38400);
  Serial.println();
  Serial.print("byte hiResValues[] = {");
  val = valOffset;
  Serial.print(val);
  for (int i = 1; i < (arrayLength + 1); i++) {
    Serial.print(", ");
    val = (valOffset + (valAmplitude * sin((2* PI * i)/arrayLength)));
    Serial.print(val);  
  }
  Serial.println("};");
}

void loop() {
}
