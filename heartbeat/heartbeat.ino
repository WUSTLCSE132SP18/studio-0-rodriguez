void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Beginning timing:");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long time = millis(); //begin count of ms
  Serial.print(time / 1000); //conversion to seconds
  Serial.println(" seconds have passed.");
  digitalWrite(13, HIGH);
  delay(500); //pause
  digitalWrite(13, LOW);
  delay(500); //pause again
  
}
