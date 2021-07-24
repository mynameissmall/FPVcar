void setup() {
  Serial.begin(9600); 
  Serial.println("BT is ready!");
}

void loop() {
  if (Serial.available()) {
    char serialData=Serial.read();
    Serial.println(serialData);
  }
}
