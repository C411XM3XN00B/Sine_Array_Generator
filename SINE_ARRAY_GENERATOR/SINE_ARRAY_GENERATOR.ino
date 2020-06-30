int arrayLength = 64;   //should be divisible by 4 to get peaks
int maxValue = 255;     //2^(number of bits the DAC has) - 1 


int valOffset = (maxValue + 1) / 2;
int valAmplitude = (valOffset - 1);

int val = 0;

void setup() {
  delay(300);
  Serial.begin(38400);
  Serial.println();
  Serial.print("byte sineValues[] = {");
  val = valOffset;
  Serial.print(val);
  for (int i = 1; i < arrayLength; i++) {
    Serial.print(", ");
    val = (valOffset + (valAmplitude * sin((2* PI * i)/arrayLength)));
    Serial.print(val);  
  }
  Serial.println("};");
}

void loop() {
}
