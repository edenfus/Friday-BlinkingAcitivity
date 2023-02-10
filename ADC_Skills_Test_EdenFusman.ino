void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int value = analogRead(A0);
  float math = (value / 1023.) * 5;
Serial.print(value);
Serial.println(math);
  // print out the value you read:
  Serial.println(value);
  
  delay(500);        // delay in between reads for stability
}A